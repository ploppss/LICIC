//-------------------------- EJERCICIO 1-----------------------------//

//El veterinario del barrio quiere un sistema simple para llevar un registro de sus pacientes. 
//Necesita almacenar el nombre, el tipo de animal (ej. "Perro", "Gato") y la edad de cada mascota. 
//Tu tarea es crear un programa que almacene los datos de 3 mascotas en un arreglo y luego muestre la ficha de cada una en pantalla.

#include <stdio.h>
//Definir el "molde" para los datos de cada paciente.
//Se define fuera de main() para que sea accesible globalmente si se necesitaran funciones.
struct Mascota {
    char nombre[50];
    char tipo[20];
    int edad;
};

int main() {
    // Crear una colección (un arreglo) de 3 mascotas e inicializarla con datos.
    // Cada par de llaves {} internas representa una ficha (una struct).
    struct Mascota mis_pacientes[3] = {
        {"Firulais", "Perro", 5},       // Ficha en el cajón 0
        {"Mishi", "Gato", 2},       // Ficha en el cajón 1
        {"Piolin", "Canario", 1}    // Ficha en el cajón 2
    };

    // Usar un bucle 'for' para recorrer nuestro archivero de fichas.
    // El bucle irá desde el cajón 0 hasta el 2.
    printf("REGISTRO DE PACIENTES DE LA VETERINARIA\n\n");
    for (int i = 0; i < 3; i++) {
        // Acceder e imprimir los datos de CADA mascota.
        // Se usa el índice [i] para seleccionar la ficha y el punto para el dato específico.
        printf("Ficha del Paciente %d\n", i + 1);
        printf("  Nombre: %s\n", mis_pacientes[i].nombre);
        printf("  Tipo:   %s\n", mis_pacientes[i].tipo);
        printf("  Edad:   %d años\n", mis_pacientes[i].edad);
    }

    return 0;
}