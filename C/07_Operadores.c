// 1. Aritméticos: +, -, *, /, % (módulo o residuo de una división,  es útil para saber si un número es par o impar)

// #include <stdio.h>
// int main() {

//     int suma = 5 + 3;                 // Suma
//     int resta = 5 - 3;                // Resta
//     int multiplicacion = 5 * 3;       // Multiplicación
//     int division = 5 / 3;             // División entera
//     int residuo = 5 % 3;              // Residuo de una división

//     printf("Suma: %d\n", suma);
//     printf("Resta: %d\n", resta);
//     printf("Multiplicación: %d\n", multiplicacion);
//     printf("División entera: %d\n", division);
//     printf("Residuo: %d\n", residuo);

//     return 0;
// }

// 2. De asignación: =, +=, -=, *=, /=
// #include <stdio.h>
// int main() {
//     int numero = 10;

//     numero += 5; // Es lo mismo que numero = numero + 5; Ahora numero vale 15
//     printf("El valor de numero es: %d\n", numero);
//     numero -= 2; // Es lo mismo que numero = numero - 2; Ahora numero vale 13
//     printf("El valor de numero es: %d\n", numero);
//     numero *= 3; // Es lo mismo que numero = numero * 3; Ahora numero vale 39
//     printf("El valor de numero es: %d\n", numero);
//     numero /= 4; // Es lo mismo que numero = numero / 4; Ahora numero vale 9
//     printf("El valor de numero es: %d\n", numero);
//     numero %= 4; // Es lo mismo que numero = numero % 4; Ahora numero vale 1
//     printf("El valor de numero es: %d\n", numero);

//     return 0;
// }

// 3. De comparación: ==, !=, >, <, >=, <=
// #include <stdio.h>
// int main() {
//     int a = 5;
//     int b = 10;
//     printf("a == b: %d\n", a == b);   // Igualdad
//     printf("a != b: %d\n", a != b);   // Desigualdad
//     printf("a > b: %d\n", a > b);     // Mayor
//     printf("a < b: %d\n", a < b);     // Menor
//     printf("a >= b: %d\n", a >= b);   // Mayor o igual
//     printf("a <= b: %d\n", a <= b);   // Menor o igual
//     return 0;
// }

// 4. Lógicos: &&, ||, !
// && (AND lógico) Devuelve verdadero solo si ambas condiciones son verdaderas.
// || (OR lógico) Devuelve verdadero si al menos una de las condiciones es verdadera.
// ! (NOT lógico) Invierte el resultado de una condición. Lo que era verdadero se vuelve falso, y viceversa.
// Tabla de verdad:
// A     B     A && B   A || B   !A     !B
// 0     0       0        0       1     1
// 0     1       0        1       1     0
// 1     0       0        1       0     1
// 1     1       1        1       0     0

// #include <stdio.h>
// int main() {
//     int x = 5;
//     int y = 10;
//     int z = 5;
//     printf("(x < y) && (x == z): %d\n", (x < y) && (x == z)); // AND lógico
//     printf("(x < y) || (x != z): %d\n", (x < y) || (x != z)); // OR lógico
//     printf("!(x == z): %d\n", !(x == z)); // NOT lógico
//     return 0;
// }

// 5. De incremento/decremento: ++, --
// ++ Incrementa el valor de una variable en 1.
// -- Decrementa el valor de una variable en 1.

// #include <stdio.h>
// int main() {
//     int contador = 5;
//     printf("Valor inicial: %d\n", contador);
//     contador++; // Incrementa en 1, es lo mismo que contador = contador + 1;
//     printf("Después de incrementar: %d\n", contador);
//     contador--; // Decrementa en 1, es lo mismo que contador = contador - 1;
//     printf("Después de decrementar: %d\n", contador);
//     return 0;
// }
