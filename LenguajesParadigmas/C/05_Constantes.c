// #include <stdio.h>
// int main() {
// const float PI = 3.14159;
// float radio = 5.766;
// float area = PI * radio * radio;

//     printf("El area de un circulo con radio %.f es %.f\n", radio, area);

//     // Esta línea generaría un error de compilación.
//     //PI = 3.14;
//     return 0;
// }

// Tambien tenemos #define para definir constantes, fuera del main y no llevan punto y coma (;) al final.
// #define PI 3.14159

// Creamos una constante con #define
// #include <stdio.h>
// #define IVA 0.16

// int main() {
//     // Creamos una constante con 'const'
//     const int PRECIO_TACO = 20;

//     // Creamos una variable normal
//     int cantidadTacos = 5;

//     // ACCESO: Para calcular el total, accedemos a ambas por su nombre
//     int subtotal = cantidadTacos * PRECIO_TACO;
//     float totalConIva = subtotal + (subtotal * IVA);

//     // ACCESO EN PRINTF: Se imprimen usando el mismo formato (%d, %f)
//     printf("Precio por taco: $%d\n", PRECIO_TACO); // Acceso a constante
//     printf("Cantidad comprada: %d\n", cantidadTacos); // Acceso a variable
//     printf("Total con IVA: $%.2f\n", totalConIva);

//     return 0;
// }