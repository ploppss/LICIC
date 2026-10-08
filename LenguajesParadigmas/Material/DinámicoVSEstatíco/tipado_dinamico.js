//  Tipado Dinámico débil
// No se declara el tipo. JavaScript infiere que es un número (number).
let dato = 25;
console.log(`El dato es un numero: ${dato} y su tipo es: ${typeof dato}`);

// Ahora, la misma variable puede contener un string. ¡Sin error!
dato = "treinta años";
console.log(`Ahora el dato es un texto: ${dato} y su tipo es: ${typeof dato}`);


let resultado = 25 + "25";
console.log(`El resultado  sumar 25 + '25' es: ${resultado} y su tipo es: ${typeof resultado}`);

// tenemos core resultado como un string, ya que JavaScript convierte automáticamente el número 25 en un string y luego los concatena.
// En pocas palabras el tipado dinámico débil permite que las variables cambien de tipo
// y que se realicen conversiones implícitas entre tipos, lo que puede llevar a resultados inesperados si no se tiene cuidado.

// JavaScript no permite declarar el tipo de una variable, pero sí permite cambiar su tipo en tiempo de ejecución.