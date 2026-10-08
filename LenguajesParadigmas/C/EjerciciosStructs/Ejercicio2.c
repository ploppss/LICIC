//-------------------------- EJERCICIO 2-----------------------------//
//El veterinario está contento con el registro básico, pero ahora necesita añadir una funcionalidad crucial: 
//saber si cada mascota está al día con sus vacunas

#include <stdio.h>
#include <stddef.h>
//Definir el "molde" para los datos de cada paciente.
//Se define fuera de main() para que sea accesible globalmente si se necesitaran funciones.
struct Mascota {
    char nombre[50];
    char tipo[20];
    int edad;
    int vacunado;            // Nuevo campo: 1 para SI, 0 para NO. 
    char *estado_vacunacion; // Nuevo campo: Un apuntador para el texto descriptivo.
};

//Crear una función que determine el estado de vacunación.
//Recibe un APUNTADOR a la mascota para poder MODIFICAR su estado.
void verificarVacunacion(struct Mascota *ptr_mascota) { // *p_mascota es un apuntador a una struct Mascota
    if (ptr_mascota->vacunado == 1) {
        // Si el dato 'vacunado' es 1, apuntamos 'estado_vacunacion' al texto "Vacunado".
        ptr_mascota->estado_vacunacion = "Vacunado";
    } else {
        // Si no, apuntamos al texto que indica que se requiere la vacuna.
        ptr_mascota->estado_vacunacion = "Requiere Vacuna";
    }
}

int main() {
    // Crear una colección (un arreglo) de 3 mascotas e inicializarla con datos.
    // Cada par de llaves {} internas representa una ficha (una struct).
    struct Mascota mis_pacientes[3] = {
        {"Firulais", "Perro", 5, 1, NULL},       // SÍ está vacunado
        {"Mishi", "Gato", 2, 0, NULL},       // NO está vacunado
        {"Piolin", "Canario", 1, 1, NULL}    // SÍ está vacunado
    };

    int num_mascotas = sizeof(mis_pacientes) / sizeof(mis_pacientes[0]);

    // Usar un bucle 'for' para recorrer nuestro archivero de fichas.
    // El bucle irá desde el cajón 0 hasta el 2.
    printf("REGISTRO DE PACIENTES DE LA VETERINARIA\n\n");
    for (int i = 0; i < num_mascotas; i++) {
        // Antes de imprimir, llamamos a nuestra nueva función para que calcule el estado.
        // Le pasamos la dirección de la mascota actual en el arreglo: &mis_pacientes[i]
        verificarVacunacion(&mis_pacientes[i]);
        // Acceder e imprimir los datos de CADA mascota.
        // Se usa el índice [i] para seleccionar la ficha y el punto para el dato específico.
        printf("Ficha del Paciente %d\n", i + 1);
        printf("  Nombre: %s\n", mis_pacientes[i].nombre);
        printf("  Tipo:   %s\n", mis_pacientes[i].tipo);
        printf("  Edad:   %d años\n", mis_pacientes[i].edad);
        printf("  Estado: %s\n", mis_pacientes[i].estado_vacunacion); // Imprimimos el nuevo campo
    }

    return 0;
}