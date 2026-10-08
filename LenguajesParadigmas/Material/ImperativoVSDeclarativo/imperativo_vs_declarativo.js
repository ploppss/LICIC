// Ejemplo equivalente en estilo imperativo:
const numeros = [1, 2, 3, 4, 10];
const duplicados = [];

for (let i = 0; i < numeros.length; i++) {
    duplicados.push(numeros[i] * 2);
}

console.log(duplicados); // [2, 4, 6, 8, 10]
// Este código utiliza un enfoque imperativo para duplicar los números en un array. 
// Se declara un array vacío y se usa un bucle for para iterar sobre cada número,
// duplicarlo y agregarlo al nuevo array.
// Aunque es funcional, este enfoque puede ser más verboso y menos claro que un enfoque declarativo.


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Ejemplo equivalente en estilo declarativo:
const numerosDeclarativo = [1, 2, 3, 4, 5];
const duplicadosDeclarativo = numerosDeclarativo.map(num => num * 2);

console.log(duplicadosDeclarativo); // [2, 4, 6, 8, 10]
// Este código utiliza el método map para lograr el mismo resultado de manera más concisa y clara.
// El enfoque declarativo se centra en el "qué" (duplicar los números)
// en lugar del "cómo" (iterar y empujar en un array).
// Esto mejora la legibilidad y mantenibilidad del código.


// El paradigma declarativo se apoya en abstracciones (métodos o funciones previamente establecidos como .map())
// que ya contienen la lógica compleja del "cómo" hacer las cosas.


// Para correr node, primero deben instalarlo desde https://nodejs.org/es/download/ y luego ejecutar el siguiente comando en la terminal:
// node imperativo_vs_declarativo.js
