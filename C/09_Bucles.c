// En C tenemos los siguientes bucles: for, while y do-while.
// For se utiliza cuando sabemos cuántas veces queremos que se ejecute el bucle, 
// mientras que while y do-while se utilizan cuando no sabemos cuántas veces se ejecutará el bucle, 
// pero sí sabemos la condición que debe cumplirse para que se ejecute.
// La diferencia entre while y do-while es que do-while se ejecuta al menos una vez, 
// mientras que while puede no ejecutarse nunca si la condición es falsa desde el inicio.

// Bucle for se ejecuta un numero determinado de veces
// Si la condicion es falsa desde el inicio, no se ejecuta ninguna vez
// for (inicializacion; condicion; incremento/decremento)

// #include <stdio.h>
// int main() {
//     printf("Bucle for:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("i = %d\n", i);
//     }
//     return 0; 
// }

// Bucle while, se ejecuta mientras la condicion sea verdadera
// Si la condicion es falsa desde el inicio, no se ejecuta ninguna vez
// while (condicion) {mientras la condicion sea verdadera}
// la diferencia con for es que no se inicializa, incrementa o decrementa, sino que se utiliza una variable externa para controlar la ejecución.

// #include <stdio.h>
// int main() {
//     printf("\nBucle while:\n");
//     int j = 4;
//     while (j < 5) {
//         printf("j = %d\n", j);
//         j++;
//     }
//     return 0;
// }

// Bucle do-while se ejecuta al menos una vez, y luego mientras la condicion sea verdadera
// Si la condicion es falsa desde el inicio, se ejecuta una vez
// do {hacer esto} while (condicion) {mientras la condicion sea verdadera}

// #include <stdio.h>
// int main() {
//     printf("\nBucle do-while:\n");
//     int k = 6;
//     do {
//         printf("k = %d\n", k);
//         k++;
//     } while (k < 5);
//     return 0;
// }
