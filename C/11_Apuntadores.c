// #include <stdio.h>

// -----------------------------Apuntadores en C-----------------------------------//
// Un apuntador (puntero) es una variable que almacena la dirección de memoria de otra variable (número o letra). 
// Se utilizan para manipular directamente la memoria y para pasar grandes estructuras de datos a funciones sin necesidad de copiarlas.
// El operador '&' se usa para obtener la dirección de una variable, y el operador '*' se usa para acceder al valor al que apunta un apuntador.
// Uso de apuntadores para modificar el valor de una variable dentro de una función:

// Ejemplo de apuntadores inicial:
// int main (){
//     int numero = 10;
//     int *puntero = &numero;

//     printf("Valor de numero: %d\n", numero);
//     printf("Dirección de memoria de numero: %p\n", &numero);
//     printf("Valor del puntero: %p\n", puntero);
//     printf("Valor al que apunta el puntero: %d\n", *puntero);
//     printf("Espacio físico de 'puntero': %zu bytes\n", sizeof(puntero)); 

//     // %p es el especificador de formato para imprimir direcciones de memoria en C.
  

//     return 0;    
// }

// Imagina que tienes un videojuego y quieres crear una función que sume puntos al puntaje del jugador.
// Para hacer esto, puedes usar un apuntador para pasar la dirección de la variable que almacena el puntaje del jugador a la función.

// Ejemplo de apuntadores en C:
// void agregarPuntos(int *puntaje) {
//     // el valor original que está en la dirección de memoria.
//     *puntaje += 50; 
//     printf("Dentro de la función, el nuevo puntaje es: %d\n", *puntaje);
// }

// // Función principal
// int main() {    
//     int puntajeJugador = 100;
//     printf("Puntaje de jugador inicial: %d\n", puntajeJugador);
    
//     // La llamada ahora coincide con el nombre de la función definida.
//     agregarPuntos(&puntajeJugador); 
    
//     printf("Puntaje después de la función: %d\n", puntajeJugador); 

//     return 0;     
// }
