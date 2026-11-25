<!DOCTYPE html>
<html lang="es">

<head>
    <meta charset="UTF-8">
    <title>Carga Perezosa (Lazy Loading)</title>
    <style>
        body {
            font-family: sans-serif;
        }
    </style>
</head>

<body>
    <h1>Catálogo de Productos (Carga Perezosa)</h1>
    <?php
    // --- Base de Datos Simulada ---
    $database = [
        ["id" => 1, "nombre" => "Laptop"],
        ["id" => 2, "nombre" => "Teclado"],
        ["id" => 3, "nombre" => "Monitor"],
        ["id" => 4, "nombre" => "Mouse"],
        ["id" => 5, "nombre" => "Webcam"],
        ["id" => 6, "nombre" => "Impresora"],
        ["id" => 7, "nombre" => "Escáner"],
        ["id" => 8, "nombre" => "Altavoces"],
        ["id" => 9, "nombre" => "Micrófono"],
        ["id" => 10, "nombre" => "Router"]
    ];

    // --- Lógica Perezosa (usando un generador) ---
    function obtenerProductosUnoPorUno(array $db): \Generator
    {
        // El bucle no se ejecuta hasta que se le pide el primer valor.
        foreach ($db as $fila) {
            // Este mensaje se mostrará cada vez que el bucle principal pida un nuevo producto.
            echo "<p><em>(Consultando y trayendo solo el producto ID: " . $fila['id'] . ")</em></p>";

            // 'yield' pausa la función, entrega el valor actual ($fila) y espera.
            // Continuará desde aquí la próxima vez que se le pida otro valor.
            yield $fila;
        }
    }

    // En esta línea, NO se ha consultado la base de datos todavía.
    // Solo se ha preparado el generador para cuando se necesite.
    $productos = obtenerProductosUnoPorUno($database);

    echo "<ul>";
    // La consulta a la "BD" ocurre DENTRO de este bucle, un registro a la vez.
    foreach ($productos as $producto) {
        // Al pedir un $producto, la función obtenerProductosUnoPorUno se reanuda y hace un 'yield'.
        echo "<li>ID: " . $producto['id'] . " - " . $producto['nombre'] . "</li>";
    }
    echo "</ul>";
    ?>
</body>

</html>

<!-- En terminal: php -S localhost:8000 
     En navegador: http://localhost:8000/perezoso.php -->