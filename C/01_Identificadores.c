// 1. Deben comenzar con una letra (a-z, A-Z) o un guion bajo (_).                                                   
// 2. Pueden contener letras, números (0-9) y guiones bajos                                                          
// 3. No pueden ser palabras reservadas del lenguaje C (como int, return, if, etc.)                                  
// 4. Son sensibles a mayúsculas y minúsculas (edad, Edad y EDAD son variables diferentes)                           
                                                                                                                     
// Ejemplo de identificadores válidos e inválidos: 
// #include <stdio.h>                                                                  
// int main() {                                                                                                     
//     int mi_edad;      // Correcto                                                                                
//     int nombreEstudiante; // Correcto                                                                            
//     int _dia_1;       // Correcto                                                                                
//     int 1_dia;        // Incorrecto: no puede iniciar con un numero                                              
//     int for;          // Incorrecto: `for` es una palabra reservada                                              
// }