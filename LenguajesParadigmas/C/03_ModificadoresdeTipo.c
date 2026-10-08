// Estos sirven para modificar el tamaño o el rango de los tipos de datos básicos. Se usan poco en la práctica,
// pero son importantes para optimizar el uso de memoria y para trabajar con valores específicos.
// Los modificadores más comunes son:
// 1. short: para enteros de menor tamaño
// 2. long: para enteros de mayor tamaño
// 3. unsigned: para enteros sin signo (solo valores positivos)
// 4. long long: para enteros de tamaño aún mayor
// 5. long double: para números de punto flotante de mayor precisión
// 6  signed: para enteros con signo (valores positivos y negativos, es el predeterminado), ASCII es un conjunto de caracteres que representa texto en computadoras y otros dispositivos. Cada carácter tiene un valor numérico asociado (código ASCII) que va de 0 a 127.

// Ejemplo de uso de modificadores de tipo
// #include <stdio.h> 
// int main() {
//     short int numeroCorto = 32767;          // Rango: -32768 a 32.767
//     long int numeroLargo = 2147483647;      // Rango: -2.147.483.648 a 2.147.483.647
//     unsigned int numeroSinSigno = 4294967295; // Rango: 0 a 4.294.967.295
//     long long int numeroMuyLargo = 9223372036854775807;  // Rango: -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807
//     printf("Numero corto: %d\n", numeroCorto);
//     printf("Numero largo: %ld\n", numeroLargo);
//     printf("Numero sin signo: %u\n", numeroSinSigno);
//     printf("Numero muy largo: %lld\n", numeroMuyLargo);

//     return 0;
// }