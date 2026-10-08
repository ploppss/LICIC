#include <stdio.h>

// -----------------------------Apuntadores en C-----------------------------------//
// Un apuntador (puntero) es una variable que almacena la dirección de memoria de otra variable (número o letra). 
// Se utilizan para manipular directamente la memoria y para pasar grandes estructuras de datos a funciones sin necesidad de copiarlas.
// El operador '&' se usa para obtener la dirección de una variable, y el operador '*' se usa para acceder al valor al que apunta un apuntador.
// Uso de apuntadores para modificar el valor de una variable dentro de una función:


// Imagina que tienes un videojuego y quieres crear una función que sume puntos al puntaje del jugador.
// Para hacer esto, puedes usar un apuntador para pasar la dirección de la variable que almacena el puntaje del jugador a la función.


// // Ejemplo de apuntadores en C:
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

// Que pasa cuando no se tiene un apuntador y se pasa el valor directamente a la función.
// Simplemente el puntaje no se modifica, ya que la función recibe una copia del valor y no la dirección de memoria de la variable original.
// Se puede poner la variable como statica para que conserve su valor entre llamadas a la función. El problema es que NO ESCALA.
// EL PROBLEMA CON STATIC: Un solo contador para todos:

// void agregarPuntosConStatic() {
//     // La variable no se muere, PERO es única y compartida para quien llame a la función.
//     static int puntajeStatic = 100; 
//     puntajeStatic += 50;
//     printf(" -> El contador static ahora dice: %d\n", puntajeStatic);
// }

// // -------------------------------------------------------------------------
// // 2. LA SOLUCIÓN CON APUNTADORES: Un contador para cada quien
// // -------------------------------------------------------------------------
// void agregarPuntos(int *puntaje) {
//     // Va a la coordenada exacta que le pases y le suma 50 a ESE jugador.
//     *puntaje += 50; 
// }

// int main() {    
//     printf("=== ESCENARIO 1: Usando STATIC (Falla con 2 jugadores) ===\n");
//     // Jugador 1 gana 50 puntos
//     printf("Anoto el Jugador 1!");
//     agregarPuntosConStatic(); // Imprime 150
    
//     // Jugador 2 gana 50 puntos
//     printf("Anoto el Jugador 2!");
//     agregarPuntosConStatic(); // Imprime 200 (¡Error! Le sumo los puntos del Jugador 1)
    
//     printf("\n(Problema: El static revolvio el dinero de ambos porque solo hay una 'alcancia').\n\n");

//     // -------------------------------------------------------------------------

//     printf("=== ESCENARIO 2: Usando APUNTADORES (Solucion a escala) ===\n");
//     // Creamos dos variables independientes en el main
//     int puntajeJugador1 = 100;
//     int puntajeJugador2 = 100;
    
//     // Le pasamos las COORDENADAS exactas de cada quien
//     printf("Anoto el Jugador 1!\n");
//     agregarPuntos(&puntajeJugador1); 
    
//     printf("Anoto el Jugador 2!\n");
//     agregarPuntos(&puntajeJugador2); 

//     // Imprimimos para verificar
//     printf(" -> Puntaje final Jugador 1: %d\n", puntajeJugador1); // Imprime 150
//     printf(" -> Puntaje final Jugador 2: %d\n", puntajeJugador2); // Imprime 150
    
//     printf("\n(Exito: Gracias a los apuntadores, cada jugador mantiene sus puntos intactos).\n");

//     return 0;    
// }

// -----------------------------Arreglos en C-----------------------------------//
// Un arreglo (array) es una colección de elementos del mismo tipo almacenados en ubicaciones de memoria contiguas (uno al lado del otro).
// Se accede a los elementos del arreglo mediante un índice, que comienza en 0.
// Los arreglos son útiles para almacenar listas de datos, como números o caracteres.
// Finalmente, los arreglos en C tienen un tamaño fijo que debe ser definido al momento de su declaración.

// Ejemplo de arreglos con enteros en C:
// int main() {
//     int numeros[] = {10, 20, 30, 40, 50};    // Declaración e inicialización de un arreglo de enteros
    
//     // Acceso a elementos individuales del arreglo
//     printf("Elemento del arreglo No.3: %d\n", numeros[2]); // Acceso al tercer elemento (índice 2)

//     // Acceso a los elementos del arreglo mediante índices
//     for (int i = 0; i < 5; i++) {
//         printf("Elemento en el índice %d: %d\n", i, numeros[i]);
//     }

//     // Modificación de un elemento del arreglo
//     numeros[1] = 25; // Cambiando el segundo elemento (índice 1)
//     printf("Después de la modificación, elemento No.2: %d\n", numeros[1]);
    

//     return 0;

// }

// ----------------------------- 1. Arreglos de Cadenas en C -----------------------------//
// Como C no tiene el tipo "string", un arreglo de palabras se crea como un 
// arreglo de apuntadores (char *). Cada índice guarda la coordenada de una palabra.
// Se usa asterisco (*) para indicar que es un apuntador a char, es decir, a una cadena de caracteres.

// int main() {
//     // Declaramos un arreglo con 4 palabras
//     char *animales[] = {"perro", "gato", "cotorro", "leon"}; 
    
//     // Calculamos cuántos elementos tiene automáticamente
//     int numAnimales = sizeof(animales) / sizeof(animales[0]);



//     printf("--- Lista Original ---\n");
//     for (int i = 0; i < numAnimales; i++) {
//         printf("Índice %d: %s\n", i, animales[i]);
//     }

//     // Modificación directa usando el índice
//     printf("\nCambiando 'leon' por 'tigre' en el índice 3...\n");
    
//     // OJO: No estamos borrando letras, solo le decimos al índice 3 
//     // que ahora apunte a la nueva coordenada donde vive la palabra "tigre".
//     animales[3] = "tigre"; 

//     printf("Después del cambio, el índice 3 es: %s\n", animales[3]);

//     return 0;
// }


// ----------------------------- 2. Arreglos y Apuntadores -----------------------------//
// Ahora vamos a modificar ese mismo arreglo con apuntadores.
// Usaremos un "Doble Apuntador" (char **) para viajar a la coordenada exacta del arreglo.

// int main() {
//     char *animales[] = {"perro", "gato", "cotorro", "tigre"}; 
    
//     printf("Animal en el índice 3: %s\n", animales[3]);

//     // Declaramos un doble apuntador. 
//     // Lleva dos '**' porque va a apuntar a un elemento que ya es un apuntador (char *).
//     char **punteroAnimal;

//     // Le pasamos las coordenadas (&) del índice 3 del arreglo
//     punteroAnimal = &animales[3];
//     printf("\nEl puntero viajo a las coordenadas de animales [3]: %s\n", animales[3]);
    
//     // Modificamos el valor usando la "llave maestra" (*)
//     printf("Cambiando el valor a 'pez' usando solo el puntero...\n");
//     *punteroAnimal = "pez";
    
//     // Comprobamos que el arreglo original sí cambió
//     printf("\nComprobacion final. El índice 3 ahora es: %s\n", animales[3]);

//     return 0;
// }


// Con y sin doble apuntador. La diferencia es que el primero no cambia el valor original, mientras que el segundo sí lo hace.
// La función intentoFallido recibe un apuntador a char, pero no puede modificar el valor original del arreglo de cadenas.
// La función cambioExitoso recibe un doble apuntador a char, lo que le permite modificar el valor original del arreglo de cadenas.
// void intentoFallido(char *animal) {
//     animal = "pez"; 
// }
// void cambioExitoso(char **animal) {
//     *animal = "pez"; 
// }
// int main() {
//     char *animales[] = {"perro", "gato", "cotorro", "tigre"}; 

//     printf("Original: %s\n", animales[3]);

//     // Intentamos cambiarlo sin el '&' ni el '**'
//     intentoFallido(animales[3]);
//     printf("Despues del intento fallido: %s\n", animales[3]); // Sigue diciendo "tigre"

//     // Lo cambiamos con el doble apuntador
//     cambioExitoso(&animales[3]);
//     printf("Despues del cambio exitoso: %s\n", animales[3]);  // Ahora si dice "pez"

//     return 0;
// }


// -----------------------------Cadenas en C-----------------------------------//
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

//     // Acceso a caracteres individuales de la cadena
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
//     char copia[30]; // Un nuevo arreglo para guardar la copia
//     strcpy(copia, "Adios!");
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

// -----------------------------Arreglos y estructuras en C-----------------------------------//

// Arreglos de estructuras (objetos) en C 
// strct es una palabra clave en C que se utiliza para definir estructuras, 
// que son tipos de datos personalizados que pueden contener múltiples variables de diferentes tipos bajo un mismo nombre.
// Imagina que quieres representar a varias personas, cada una con un nombre y una edad.
// Puedes definir una estructura llamada Persona y luego crear un arreglo de estas estructuras para almacenar información 
// sobre varias personas.

// Ejemplo de arreglos de estructuras en C:
// int main() {
//     struct Persona {               // Definición de una estructura para representar una persona
//         char nombre[50];          // Campo para el nombre, 50 caracteres como máximo de longitud
//         int edad;                 // Campo para la edad,
//     };


//     struct Persona personas[3] = { // Declaración e inicialización de un arreglo de estructuras
//         {"Alice", 30},            // Primer objeto Persona
//         {"Bob", 25},              // Segundo objeto Persona
//         {"Charlie", 35}           // Tercer objeto Persona
//     };

//    // Acceso a los elementos del arreglo de estructuras
//     for (int i = 0; i < 3; i++) {
//         printf("Persona %d: Nombre: %s, Edad: %d\n", i + 1, personas[i].nombre, personas[i].edad);
//     }
// return 0;
// }
    


// ------------------------- Array de estructuras con apuntadores en C ---------------------------//
// Anidar arreglos y estructuras en C
// Una estructura puede contener otros arreglos, lo que permite crear estructuras más complejas.
// Imagina que quieres guardar la ficha de un alumno. 
// El alumno tiene datos personales, pero también tiene una lista de materias en las que está inscrito. 
// Cada materia, a su vez, tiene su propio nombre y número de créditos.


// #include <stdlib.h> // Permite realizar operaciones de memoria dinámica, como conversion de tipos y gestión de memoria, entre otras cosas más.
// #include <string.h> // Permite manipular cadenas de caracteres y realizar operaciones como copiar, concatenar y comparar cadenas.

// // 1. Primero, definimos la estructura más simple: la Materia
// struct Materia {
//     char nombre[50];
//     int creditos;
// };

// // 2. Ahora, definimos la estructura principal que USA la anterior
// struct Alumno {
//     char *nombreCompleto; // Usaremos un apuntador para el nombre, el cual asignaremos memoria dinámica
//     // la memoria dinámica es útil cuando no sabemos de antemano cuántos datos vamos a necesitar almacenar
//     int id;
//     int numMaterias;      // Para saber cuántas materias cursa
//     struct Materia materias[5]; // Un ARREGLO de ESTRUCTURAS anidado (5 materias máximo)
// };

// // 3. Una función para imprimir la ficha (recibe un apuntador a la struct)
// // Aqui le pasamos la DIRECCIÓN de la estructura en donde están los datos del alumno, como nombre, id y materias

// void imprimirFichaAlumno(const struct Alumno *alumno) {
//     printf("\n--- Ficha del Alumno ---\n"); 
//     printf("ID: %d\n", alumno->id); // Usamos el operador de acceso '->' para acceder a los campos de la estructura a través del apuntador
//     printf("Nombre: %s\n", alumno->nombreCompleto); // El nombre es un apuntador, pero se imprime igual que una cadena normal
    
//     printf("\nMaterias Inscritas (%d):\n", alumno->numMaterias); // Imprimimos el número de materias
//     printf("---------------------------\n");
//     for (int i = 0; i < alumno->numMaterias; i++) { // Recorremos solo las materias que el alumno está cursando
//         printf(" -> Materia: %s (%d créditos)\n", // Imprimimos el nombre y créditos de cada materia
//                alumno->materias[i].nombre, 
//                alumno->materias[i].creditos);
//     }
//     printf("---------------------------\n");
// }

// int main() {
    // // Creamos una variable de nuestro tipo Alumno
    // struct Alumno alumno1;

    // // --- Llenando los datos del Alumno ---
    
    // // Asignamos memoria dinámica para el nombre
    // alumno1.nombreCompleto = malloc(50 * sizeof(char)); // Malloc es una función de asignacion de memoria dínamica y reservamos espacio para 50 caracteres
    
    // // Copiamos el nombre en la memoria asignada con strcpy (la función strcpy copia una cadena en otra)
    // strcpy(alumno1.nombreCompleto, "Ana Sofia Garcia");
    
    // alumno1.id = 20251234;
    // alumno1.numMaterias = 3; // El alumno cursa 3 materias

    // // --- Llenando los datos del arreglo de materias anidado ---
    // strcpy(alumno1.materias[0].nombre, "Cálculo Diferencial");
    // alumno1.materias[0].creditos = 10;
    
    // strcpy(alumno1.materias[1].nombre, "Programación Estructurada");
    // alumno1.materias[1].creditos = 8;

    // strcpy(alumno1.materias[2].nombre, "Álgebra Lineal");
    // alumno1.materias[2].creditos = 8;
    
    // // Llamamos a la función para mostrar los datos
    // // Le pasamos la DIRECCIÓN de la estructura con el operador &
    // imprimirFichaAlumno(&alumno1);

    // // Liberamos la memoria que pedimos con malloc
    // free(alumno1.nombreCompleto); // free libera la memoria asignada dinámicamente para evitar fugas de memoria
    // }
    // return 0;


    // --- Ahora, vamos a crear y manejar varios alumnos usando un arreglo de estructuras ---

    // // Crear un arreglo de estructuras para varios alumnos 
    // struct Alumno listaDeAlumnos[2];

    // // Llenar los datos del PRIMER alumno (índice 0)
    // listaDeAlumnos[0].nombreCompleto = malloc(50 * sizeof(char));
    // strcpy(listaDeAlumnos[0].nombreCompleto, "Ana Sofía García");
    // listaDeAlumnos[0].id = 20251234;
    // listaDeAlumnos[0].numMaterias = 2;
    // strcpy(listaDeAlumnos[0].materias[0].nombre, "Cálculo Diferencial");
    // listaDeAlumnos[0].materias[0].creditos = 10;
    // strcpy(listaDeAlumnos[0].materias[1].nombre, "Programación Estructurada");
    // listaDeAlumnos[0].materias[1].creditos = 8;

    // // Llenar los datos del SEGUNDO alumno (índice 1)
    // listaDeAlumnos[1].nombreCompleto = malloc(50 * sizeof(char));
    // strcpy(listaDeAlumnos[1].nombreCompleto, "Carlos David Pérez");
    // listaDeAlumnos[1].id = 20255678;
    // listaDeAlumnos[1].numMaterias = 1;
    // strcpy(listaDeAlumnos[1].materias[0].nombre, "Álgebra Lineal");
    // listaDeAlumnos[1].materias[0].creditos = 8;
    
    // // Imprimir la lista completa usando un bucle
    // printf("\n\n=== MOSTRANDO LISTA COMPLETA DE ALUMNOS ===\n");
    // for (int i = 0; i < 2; i++) {
    //     imprimirFichaAlumno(&listaDeAlumnos[i]);
    // }

    // // Liberar la memoria de CADA alumno 
    // for (int i = 0; i < 2; i++) {
    //     free(listaDeAlumnos[i].nombreCompleto); // Liberamos cada nombre que pedimos con malloc


    // }
    // return 0;
// }


