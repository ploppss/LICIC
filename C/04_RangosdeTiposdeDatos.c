// Estos rangos pueden variar según la implementación del compilador y la arquitectura del sistema.
// Sirven para saber los límites de los valores que se pueden almacenar en cada tipo de dato y para evitar errores de desbordamiento o pérdida de datos.
// Ejemplo de rangos de tipos de datos en C
// #include <stdio.h> 
// int main() {
//     // MODIFICADOR: unsigned char
//     // RANGO: 0 a 255
//     unsigned char edadPersona = 25;

//     printf("La edad guardada correctamente es: %d años.\n", edadPersona);

//     // ¿Qué pasa si intentamos romper el rango metiendo un número negativo?
//     // Como es 'unsigned' (sin signo), la máquina se confunde y da la vuelta al rango.
//     unsigned char edadInvalida = -1;

//     printf("¡Cuidado! Intentamos guardar -1 y la máquina leyó: %d\n", edadInvalida);

//     return 0;
// }

// Nota: Los rangos pueden variar según la implementación del compilador y la arquitectura del sistema.