// Una cadena es una secuencia de caracteres almacenados en un arreglo de tipo char.
// En C, las cadenas se representan como arreglos de caracteres terminados con un carácter nulo '\0'.
// Si no se pone el carácter nulo, la cadena no se reconoce correctamente y puede causar errores de memoria.
// Se pueden manipular cadenas utilizando funciones de la biblioteca estándar como strlen, strcpy, strcat, strcmp.
// Nunca debes manipular cadenas manualmente. Siempre usa la biblioteca <string.h>.
    //1. strlen(cadena): Devuelve la longitud de la cadena (sin contar \0).
    //2. strcpy(destino, origen): Copia una cadena. No puedes hacer destino = origen;.
    //3. strcat(destino, origen): Concatena (une) cadenas.
    //4. strcmp(cadena1, cadena2): Compara dos cadenas. Devuelve 0 si son iguales.

// Además, las cadenas pueden ser literales (definidas entre comillas dobles) o dinámicas (creadas en tiempo de ejecución).
// Finalmente, las cadenas en C no tienen un tamaño fijo, pero es importante asegurarse de que el arreglo tenga suficiente espacio para almacenar la cadena y el carácter nulo.


// Ejemplo de cadenas en C:
// #include <string.h> //Para manipular cadenas de caracteres y realizar operaciones como copiar, concatenar y comparar cadenas.
// int main() {
//     char saludo[] = "Hola, Mundo!"; // Declaración e inicialización de una cadena, // En memoria:
//                                    // H  o  l  a  ,     M  u  n  d  o  !  \0
//                                    // 0  1  2  3  4  5  6  7  8  9 10 11 
// // El carácter nulo '\0' indica el final de la cadena y es esencial para que las funciones de manipulación de cadenas funcionen correctamente.
// // \0 cuenta como indice 12, pero no se imprime. Por eso la longitud de la cadena es 12, pero el índice máximo es 11.
// // Acceso a caracteres individuales de la cadena
//     printf("Primer carácter: %c\n", saludo[0]); // Acceso al primer carácter

//     // Acceso a los caracteres de la cadena mediante índices
//     for (int i = 0; saludo[i] != '\0'; i++) {
//         printf("Carácter en el índice %d: %c\n", i, saludo[i]);
//     }

//     // Modificación de un carácter en la cadena
//     saludo[7] = 'C'; // Cambiando 'M' por 'C'
//     printf("Después de la modificación: %s\n", saludo);

//     // 1. strlen(): Obtener la longitud de la cadena
//     printf("1. strlen(): La longitud de '%s' es %zu.\n", saludo, strlen(saludo));

//     // 2. strcpy(): Copiar una cadena
//     char copia[30]; // Un nuevo arreglo para guardar la copia, 30 caracteres como máximo de longitud.
//     strcpy(copia, "Adios!");
//     printf("2. strcpy(): La cadena copiada en 'copia' es: %s\n", copia);
//     // otro ejemplo de copia de cadena 
//     strcpy(copia, saludo); // Copiamos el saludo original en copia
//     printf("2. strcpy(): La cadena copiada en 'copia' es: %s\n", copia);

//     // 3. strcat(): Concatenar (unir) cadenas
//     // Vamos a unir " Adios!" al final de "Hola, MCundo!"
//     strcat(saludo, copia); 
//     printf("3. strcat(): El saludo concatenado es: '%s'\n", saludo);

//     // 4. strcmp(): Comparar dos cadenas
//     char cadenaA[] = "Hola";
//     char cadenaB[] = "Hola";
//     char cadenaC[] = "Adios";

//     // 4. strcmp(): Comparar dos cadenas
//     printf("4. strcmp(): Comparando '%s' y '%s'.\n", cadenaA, cadenaB);
//     if (strcmp(cadenaA, cadenaB) == 0) {
//         printf("   Resultado: Las cadenas A y B son iguales.\n");
//     } else if (strcmp(cadenaA, cadenaC) == 0) {
//         // Este bloque nunca se ejecuta en este caso, ya que la primera condición es verdadera
//         printf("   Resultado: Las cadenas son A y C iguales.\n");
//     } else {
//         printf("   Resultado: Las cadenas son diferentes.\n");
//     }

                        
//     return 0;
// }
