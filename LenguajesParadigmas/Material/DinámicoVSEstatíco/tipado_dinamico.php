<?php
// Tipado Dinámico débil

// No se declara el tipo. PHP infiere que es un entero.
$dato = 25;
echo "El dato es un numero: " . $dato . ", Tipo: " . gettype($dato) . "\n";

// Ahora, la misma variable puede contener un string. ¡Sin error!
$dato = "treinta años";
echo "Ahora el dato es un texto: " . $dato . ", Tipo: " . gettype($dato) . "\n";

$resultado = 25 + "25"; // PHP realiza coerción a número y suma
echo "El resultado de sumar 25 + '25' es: " . $resultado . ", Tipo: " . gettype($resultado) . "\n";

// Aqui vemos que la suma de un número y un string que representa un número da como resultado un número,
// ya que PHP convierte automáticamente el string "25" a un número antes de realizar la suma.
// la diferencia de javaScript es que en este caso, PHP realiza la conversión implícita del string "25" 
// a un número antes de realizar la suma.

// Aunque ambos son de tipado débil, interpretan los operadores de manera diferente, lo que ha dado dolores de cabeza históricos a los desarrolladores y ha abierto brechas de seguridad:
// En PHP (25 + "25"):
//      El operador + en PHP está diseñado exclusivamente para operaciones aritméticas.
//      Cuando PHP ve que intentas sumar un número con un texto que parece número, aplica coerción automática: convierte el texto "25" en el número 25 y realiza la suma, dando como resultado 50. (Para concatenar textos en PHP se usa el punto ., nunca el +).
// En JavaScript (25 + "25"):
//      En JavaScript, el operador + está sobrecargado (sirve tanto para sumar números como para concatenar textos).
//       Si mezclas un número y un texto con el +, JavaScript prefiere la concatenación y convierte el número en texto, dando como resultado "2525" (un string).
