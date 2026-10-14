#include <stdio.h>

/* Definimos la estructura */
struct Estudiante {
    int matricula;
    int edad;
    float promedio;
};

/* Función que recibe la dirección de memoria (apuntador) para modificar los datos directamente */
void subir_promedio(struct Estudiante *ptr, float puntos_extra) {
    /* El operador '->' accede al miembro a través de la dirección de memoria */
    ptr->promedio += puntos_extra;
}

int main(void) {
    /* 1. Declarar e inicializar la variable */
    struct Estudiante alumno = {12345, 20, 8.5};

    /* 2. Acceso directo con el operador punto (.) */
    printf("Matricula: %d\n", alumno.matricula);
    printf("Promedio inicial: %.1f\n", alumno.promedio);

    /* 3. Pasamos la dirección en memoria con & */
    subir_promedio(&alumno, 1.0);

    /* 4. Comprobamos que el valor original cambió */
    printf("Promedio actualizado: %.1f\n", alumno.promedio);

    return 0;
}
