#include <stdio.h>
#include <string.h>

#define MAX_PACIENTES 3

/* LÓGICA DE TYPEDEF:
 * Creamos el alias 'Mascota' para no tener que escribir 'struct Mascota'
 * cada vez que declaremos una variable o parámetro.
 */
typedef struct {
    char nombre[50];
    int edad;
    int vacunado; // 1: Sí, 0: No
} Mascota;

/* LÓGICA DE ENTRADA POR REFERENCIA:
 * Recibimos 'Mascota *m' (dirección de memoria) para almacenar directamente
 * los datos capturados en el espacio reservado del arreglo original.
 */
void registrarMascota(Mascota *m, int indice) {
    printf("\n--- Registro Mascota %d ---\n", indice + 1);

    printf("Nombre: ");
    /* LÓGICA DE CAPTURA DE TEXTO:
     * fgets lee cadenas con espacios de forma segura.
     * Luego reemplazamos el salto de línea '\n' que captura fgets por el fin de cadena '\0'.
     */
    fgets(m->nombre, sizeof(m->nombre), stdin);
    m->nombre[strcspn(m->nombre, "\n")] = '\0';

    printf("Edad: ");
    /* LÓGICA DEL AMPERSAND EN STRUCT:
     * 'm->edad' es un int primitivo, por lo que requerimos '&' para darle a scanf
     * la dirección exacta de ese entero dentro de la estructura.
     */
    scanf("%d", &(m->edad));

    printf("¿Está vacunado? (1 = Sí, 0 = No): ");
    scanf("%d", &(m->vacunado));

    /* LÓGICA DE LIMPIEZA DE BÚFER:
     * scanf deja el caracter 'Enter' (\n) en el búfer de entrada.
     * Si no lo consumimos con getchar(), el siguiente fgets lo leería como una línea vacía.
     */
    getchar();
}

/* LÓGICA DE BÚSQUEDA Y RETORNO DE PUNTERO:
 * Compara secuencialmente el nombre buscado con cada registro.
 * - Si coincide: retorna la dirección de memoria exacta (&arr[i]) del elemento dentro del arreglo.
 * - Si no coincide tras revisar todo el arreglo: retorna NULL como bandera de "no encontrado".
 * Esto permite al llamador decidir qué hacer con el dato encontrado sin duplicar memoria.
 */
Mascota* buscarPorNombre(Mascota arr[], int total, const char *nombreBuscado) {
    for (int i = 0; i < total; i++) {
        /* strcmp devuelve 0 cuando dos cadenas son exactamente idénticas */
        if (strcmp(arr[i].nombre, nombreBuscado) == 0) {
            return &arr[i]; /* Retorna el puntero directo al objeto original */
        }
    }
    return NULL;
}

/* LÓGICA DE MODIFICACIÓN POR PUNTERO:
 * Al recibir un puntero, cualquier cambio hecho con el operador flecha '->'
 * afecta directamente a la memoria original en main, sin hacer copias.
 */
void actualizarEstado(Mascota *m, int nuevaEdad, int nuevoEstadoVacuna) {
    if (m == NULL) return; // Guardia de seguridad para evitar desreferenciar nulos

    m->edad = nuevaEdad;
    m->vacunado = nuevoEstadoVacuna;
}

/* LÓGICA DE RECORRIDO CON ARITMÉTICA DE PUNTEROS:
 * Un arreglo decae en un puntero a su primer elemento (ptr = arr).
 * Al sumar un entero 'i' a un puntero de tipo Mascota*, el compilador avanza
 * la memoria en bloques de 'sizeof(Mascota)' bytes automáticamente.
 * '(ptr + i)->campo' equivale lógicamente a 'arr[i].campo'.
 */
void imprimirCatalogo(Mascota *ptr, int total) {
    printf("\n================ LISTA DE PACIENTES ================\n");
    for (int i = 0; i < total; i++) {
        Mascota *actual = ptr + i; // Apunta al elemento i-ésimo del arreglo
        printf("Paciente %d:\n", i + 1);
        printf("  Nombre:   %s\n", actual->nombre);
        printf("  Edad:     %d\n", actual->edad);
        printf("  Vacunado: %s\n", (actual->vacunado == 1) ? "Al día" : "Pendiente");
        printf("----------------------------------------------------\n");
    }
}

int main(void) {
    Mascota clinica[MAX_PACIENTES];

    /* 1. Llenado interactivo pasando direcciones con '&' */
    printf("=== CAPTURA INICIAL DE DATOS ===\n");
    for (int i = 0; i < MAX_PACIENTES; i++) {
        registrarMascota(&clinica[i], i);
    }

    /* 2. Mostramos todos los elementos recorriendo memoria con punteros */
    imprimirCatalogo(clinica, MAX_PACIENTES);

    /* 3. Búsqueda dinámica */
    char busqueda[50];
    printf("\nIngrese el nombre de la mascota a buscar y modificar: ");
    fgets(busqueda, sizeof(busqueda), stdin);
    busqueda[strcspn(busqueda, "\n")] = '\0';

    Mascota *encontrado = buscarPorNombre(clinica, MAX_PACIENTES, busqueda);

    /* LÓGICA DE VALIDACIÓN DE RESULTADO:
     * Siempre verificar si el puntero es distinto de NULL antes de intentar acceder a sus campos.
     */
    if (encontrado != NULL) {
        printf("\n[Éxito] Mascota encontrada: %s (Edad actual: %d)\n", encontrado->nombre, encontrado->edad);
        printf("Aplicando vacuna y sumando 1 año de edad...\n");

        /* Modificamos directamente a través del puntero retornado por la búsqueda */
        actualizarEstado(encontrado, encontrado->edad + 1, 1);

        printf("Datos actualizados correctamente.\n");
    } else {
        printf("\n[Aviso] No se encontró ninguna mascota con el nombre '%s'.\n", busqueda);
    }

    /* 4. Verificación final: Se muestra el arreglo completo para comprobar los cambios en memoria */
    imprimirCatalogo(clinica, MAX_PACIENTES);

    return 0;
}