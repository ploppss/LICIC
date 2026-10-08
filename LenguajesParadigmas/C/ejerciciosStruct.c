// //-------------------------- EJERCICIO 1-----------------------------//

// //El veterinario del barrio quiere un sistema simple para llevar un registro de sus pacientes. 
// //Necesita almacenar el nombre, el tipo de animal (ej. "Perro", "Gato") y la edad de cada mascota. 
// //Tu tarea es crear un programa que almacene los datos de 3 mascotas en un arreglo y luego muestre la ficha de cada una en pantalla.

// #include <stdio.h>
// //Definir el "molde" para los datos de cada paciente.
// //Se define fuera de main() para que sea accesible globalmente si se necesitaran funciones.
// struct Mascota {
//     char nombre[50];
//     char tipo[20];
//     int edad;
// };

// int main() {
//     // Crear una colección (un arreglo) de 3 mascotas e inicializarla con datos.
//     // Cada par de llaves {} internas representa una ficha (una struct).
//     struct Mascota mis_pacientes[3] = {
//         {"Firulais", "Perro", 5},       // Ficha en el cajón 0
//         {"Mishi", "Gato", 2},       // Ficha en el cajón 1
//         {"Piolin", "Canario", 1}    // Ficha en el cajón 2
//     };

//     // Usar un bucle 'for' para recorrer nuestro archivero de fichas.
//     // El bucle irá desde el cajón 0 hasta el 2.
//     printf("REGISTRO DE PACIENTES DE LA VETERINARIA\n\n");
//     for (int i = 0; i < 3; i++) {
//         // Acceder e imprimir los datos de CADA mascota.
//         // Se usa el índice [i] para seleccionar la ficha y el punto para el dato específico.
//         printf("Ficha del Paciente %d\n", i + 1);
//         printf("  Nombre: %s\n", mis_pacientes[i].nombre);
//         printf("  Tipo:   %s\n", mis_pacientes[i].tipo);
//         printf("  Edad:   %d años\n", mis_pacientes[i].edad);
//     }

//     return 0;
// }



// //-------------------------- EJERCICIO 2-----------------------------//
// //El veterinario está contento con el registro básico, pero ahora necesita añadir una funcionalidad crucial: 
// //saber si cada mascota está al día con sus vacunas

// #include <stdio.h>
// //Definir el "molde" para los datos de cada paciente.
// //Se define fuera de main() para que sea accesible globalmente si se necesitaran funciones.
// struct Mascota {
//     char nombre[50];
//     char tipo[20];
//     int edad;
//     int vacunado;            // Nuevo campo: 1 para SI, 0 para NO. 
//     char *estado_vacunacion; // Nuevo campo: Un apuntador para el texto descriptivo.
// };

// //Crear una función que determine el estado de vacunación.
// //Recibe un APUNTADOR a la mascota para poder MODIFICAR su estado.
// void verificarVacunacion(struct Mascota *p_mascota) { // *p_mascota es un apuntador a una struct Mascota
//     if (p_mascota->vacunado == 1) {
//         // Si el dato 'vacunado' es 1, apuntamos 'estado_vacunacion' al texto "Vacunado".
//         p_mascota->estado_vacunacion = "Vacunado";
//     } else {
//         // Si no, apuntamos al texto que indica que se requiere la vacuna.
//         p_mascota->estado_vacunacion = "Requiere Vacuna";
//     }
// }

// int main() {
//     // Crear una colección (un arreglo) de 3 mascotas e inicializarla con datos.
//     // Cada par de llaves {} internas representa una ficha (una struct).
//     struct Mascota mis_pacientes[3] = {
//         {"Firulais", "Perro", 5, 1, NULL},       // SÍ está vacunado
//         {"Mishi", "Gato", 2, 0, NULL},       // NO está vacunado
//         {"Piolin", "Canario", 1, 1, NULL}    // SÍ está vacunado
//     };

//     int num_mascotas = sizeof(mis_pacientes) / sizeof(mis_pacientes[0]);

//     // Usar un bucle 'for' para recorrer nuestro archivero de fichas.
//     // El bucle irá desde el cajón 0 hasta el 2.
//     printf("REGISTRO DE PACIENTES DE LA VETERINARIA\n\n");
//     for (int i = 0; i < num_mascotas; i++) {
//         // Antes de imprimir, llamamos a nuestra nueva función para que calcule el estado.
//         // Le pasamos la dirección de la mascota actual en el arreglo: &mis_pacientes[i]
//         verificarVacunacion(&mis_pacientes[i]);
//         // Acceder e imprimir los datos de CADA mascota.
//         // Se usa el índice [i] para seleccionar la ficha y el punto para el dato específico.
//         printf("Ficha del Paciente %d\n", i + 1);
//         printf("  Nombre: %s\n", mis_pacientes[i].nombre);
//         printf("  Tipo:   %s\n", mis_pacientes[i].tipo);
//         printf("  Edad:   %d años\n", mis_pacientes[i].edad);
//         printf("  Estado: %s\n", mis_pacientes[i].estado_vacunacion); // Imprimimos el nuevo campo
//     }

//     return 0;
// }

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


