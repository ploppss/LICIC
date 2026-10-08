//-----------------------------------Variables en C---------------------------------------------//
// Una variable es un espacio en memoria que se utiliza para almacenar datos que pueden cambiar durante la
// ejecución del programa. Cada variable tiene un nombre (identificador) y un tipo de dato asociado.
// Existen diferentes tipos de variables según el tipo de dato que almacenan, como int, float, char, etc.
// Además, las variables pueden ser de diferentes tipos según su duración y alcance, como variables locales, globales y estáticas.
// Las variables deben ser declaradas antes de usarse, especificando su tipo y nombre.
// Finalmente, las variables pueden ser inicializadas al momento de su declaración o en cualquier otro punto del programa antes de su uso.

//  ----------------------------------Variables globales en C---------------------------------------------//
// Son variables declaradas fuera de cualquier función, accesibles desde cualquier parte del archivo.
// Mantienen su valor durante toda la ejecución del programa.
// Además, si se desea que una variable global sea accesible desde otros archivos, se puede usar la palabra clave 'extern' en su declaración en esos archivos.

// Ejemplo de variable global
// #include <stdio.h>
// int variableGlobal = 100; // Todas las funciones la pueden usar
// void funcionEjemplo() {
//     printf("Dentro de la función, variableGlobal: %d\n", variableGlobal);
//     variableGlobal += 50; // Modificamos su valor
// }
// int main() {
//     printf("Antes de llamar a la función, variableGlobal: %d\n", variableGlobal);
//     funcionEjemplo();
//     printf("Después de llamar a la función, variableGlobal: %d\n", variableGlobal);
//     return 0;
// }

// ----------------------------------Variables locales en C---------------------------------------------//
// Son variables declaradas dentro de una función, accesibles solo dentro de esa función.
// Se crean cuando la función es llamada y se destruyen cuando la función termina su ejecución.
// No pueden ser accedidas desde otras funciones.

// Ejemplo de variable local
// #include <stdio.h>
// void funcionEjemplo() {
//     int variableLocal = 50; // Solo esta función la puede usar
//     printf("Dentro de la función, variableLocal: %d\n", variableLocal);
//     variableLocal += 20; // Modificamos su valor
//     printf("Después de modificar, variableLocal: %d\n", variableLocal);
// }
// int main() {
//     funcionEjemplo();
//     // La siguiente línea generaría un error de compilación porque variableLocal no es accesible aquí.
//     // printf("En main, variableLocal: %d\n", variableLocal);
//     return 0;
// }

//---------------------------------Variables estáticas en C---------------------------------------------//
// Son variables locales a una función, pero mantienen su valor entre llamadas a la función.
// Se declaran con la palabra clave 'static'.
// Su alcance es local a la función donde se declaran, pero su duración es toda la ejecución del programa.
// En este sentido, pueden considerarse como una mezcla entre variables locales y globales.
// Pero nunca podran ser accedidas mediante extern desde otro archivo, ya que su alcance es local o dentro del script donde se declaran, aunque su duración sea global o de todo el programa.
// Ejemplo de variable estática 

// #include <stdio.h>
// void funcionEjemplo() {
//     static int contadorLlamadas = 0; // Mantiene su valor entre llamadas
//     contadorLlamadas++;
//     printf("La función ha sido llamada %d veces\n", contadorLlamadas);
// }

// void funcionEjemplo2() {
//     int contadorLlamadas = 0; // Mantiene su valor entre llamadas
//     contadorLlamadas++;
//     printf("La función 2 ha sido llamada %d veces\n", contadorLlamadas);
// }
// int main() {
//     funcionEjemplo(); // Primera llamada|
//     funcionEjemplo(); // Segunda llamada
//     funcionEjemplo(); // Tercera llamada
//     funcionEjemplo2(); // Llamada a la segunda función
//     funcionEjemplo2(); // Segunda llamada a la segunda función
//     funcionEjemplo2(); // Tercera llamada a la segunda función
//     return 0;
// }

//----------------------------------Alcance de las variables en C---------------------------------------------//
// El alcance de una variable determina dónde puede ser accedida dentro del código.
// 1. Variables globales: declaradas fuera de cualquier función, accesibles desde cualquier parte del archivo.
// 2. Variables locales: declaradas dentro de una función, accesibles solo dentro de esa función.
// 3. Variables estáticas: mantienen su valor entre llamadas a funciones, pero su alcance
//    es local a la función donde se declaran.
// Ejemplo de alcance de variables en C

// #include <stdio.h>
// int variableGlobal = 10; // Variable global
// void funcionEjemplo() {
//     int variableLocal = 20; // Variable local
//     static int variableEstatica = 30; // Variable estática
//     variableEstatica++;
//     printf("Dentro de la función:\n");
//     printf("Variable global: %d\n", variableGlobal); // Acceso a variable global
//     printf("Variable local: %d\n", variableLocal);   // Acceso a variable local
//     printf("Variable estática: %d\n", variableEstatica); // Acceso a variable estática
// }
// int main() {
//     funcionEjemplo();
//     return 0;
// }
