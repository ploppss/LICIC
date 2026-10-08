// //-------------------------- EJERCICIO 3-----------------------------//
// Modificar registros específicos
// El veterinario quiere poder actualizar la información de una mascota específica en su registro.
// Necesita una función que pueda cambiar la edad y el estado de vacunación de una mascota dada su posición en el arreglo.
// Firulais acaba de cumplir años, por lo que su edad debe cambiar de 5 a 6. 
// Además, como ya pasó un año, su vacuna anual ha expirado y su estado debe cambiar de "Vacunado" a "Requiere Vacuna".
// Finalmente, sus dueños decidieron darle su apellido y ahora se llama "Firulais Gómez".

// Puntos clave:
// Se debe hacer uso de la biblioteca <string.h> para manipular cadenas de caracteres.
// Específicamente la función strcpy() para modificar arreglos de caracteres.
// Crear una función que reciba un apuntador a una struct Mascota, un nuevo nombre, una nueva edad y un nuevo estado de vacunación.
// La función debe actualizar nobre, edad y estado de vacunación de la mascota
// En main(), llamar a esta función para actualizar los datos de Firulais y luego imprimir la ficha actualizada.
#include <stdio.h>
#include <string.h> // Necesario para la función strcpy()

// Constante global para definir el tamaño de la lista de pacientes
const int NUMERO_PACIENTES = 3;

// Definición de la estructura para representar a una mascota
struct mascota {
  char nombre[50];          // Arreglo de caracteres con capacidad de hasta 49 letras
  char tipo[20];            // Tipo de animal (Perro, Gato, etc.)
  int edad;                 // Edad en años
  int vacunado;             // 1 representa 'true' (vacunado), 0 representa 'false' (no vacunado)
  char *estadoVacunacion;   // Puntero a cadena de texto 
};

// Función que actualiza el texto de estado según el valor entero de 'vacunado'
// Recibe un apuntador a la mascota para modificar directamente el registro original
void verificarVacuna(struct mascota *ptr) {
  if (ptr == NULL) return;

  if (ptr->vacunado == 1) {
    ptr->estadoVacunacion = "Vacunado";
  } else {
    ptr->estadoVacunacion = "Requiere Vacuna";
  }
}

// Función para modificar Pacientes 
// Recibe:
// 1. Un puntero a la estructura mascota a modificar (struct mascota *ptr)
// 2. Una cadena de texto con el nuevo nombre (const char *nuevoNombre)
// 3. Un entero con la nueva edad (int nuevaEdad)
// 4. Un entero con el nuevo estado de vacunación (int nuevoVacunado: 1 o 0)
void modificarRegistro(struct mascota *ptr, const char *nuevoNombre, int nuevaEdad, int nuevoVacunado) {
  // Validación de seguridad para evitar desreferenciar un puntero nulo
  if (ptr == NULL) return;

  // En C los arreglos de caracteres no aceptan asignación directa '='.
  // Usamos strcpy() para copiar la cadena al buffer 'ptr->nombre'.
  strcpy(ptr->nombre, nuevoNombre);

  // Modificamos directamente los valores en la memoria a la que apunta ptr
  ptr->edad = nuevaEdad;
  ptr->vacunado = nuevoVacunado;

  // Actualizamos el texto descriptivo ('Vacunado' o 'Requiere Vacuna')
  verificarVacuna(ptr);
}

// Función auxiliar para imprimir las fichas completas del arreglo
void imprimirPacientes(struct mascota pacientes[NUMERO_PACIENTES]) {
  for (int i = 0; i < NUMERO_PACIENTES; i++) {
    // Nos aseguramos de que el texto de vacunación esté sincronizado antes de imprimir
    verificarVacuna(&pacientes[i]);

    printf("Ficha del paciente número %d\n", i + 1);
    printf("  Nombre: %s\n", pacientes[i].nombre);
    printf("  Tipo: %s\n", pacientes[i].tipo);
    printf("  Edad: %d años\n", pacientes[i].edad);
    printf("  Estado de Vacunación: %s\n", pacientes[i].estadoVacunacion);
    printf("----------------------------------------\n");
  }
}

int main() {
  // Inicialización del arreglo con 3 mascotas registradas
  struct mascota pacientes[3] = {
    {"Firulais", "Perro", 5, 1, NULL},
    {"Mishi", "Gato", 2, 0, NULL},
    {"Piolin", "Canario", 1, 1, NULL}
  };

  printf("=== REGISTROS INICIALES ===\n");
  imprimirPacientes(pacientes);

  // Requerimientos del ejercicio para Firulais (índice 0):
  // 1. Ahora se llama "Firulais Gómez"
  // 2. Cumplió años: cambia de 5 a 6
  // 3. Su vacuna anual expiró: cambia a 0 ("Requiere Vacuna")
  // Le pasamos la dirección de memoria de la primera mascota usando '&pacientes[0]'
  modificarRegistro(&pacientes[0], "Firulais Gómez", 6, 0);

  // Imprimir ficha actualizada de Firulais
  printf("\n=== FICHA ACTUALIZADA DE FIRULAIS ===\n");
  printf("Nombre: %s\n", pacientes[0].nombre);
  printf("Tipo: %s\n", pacientes[0].tipo);
  printf("Edad: %d años\n", pacientes[0].edad);
  printf("Estado de Vacunación: %s\n", pacientes[0].estadoVacunacion);

  return 0;
}
