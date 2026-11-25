<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <title>Carga Ansiosa (Eager Loading)</title>
    <style>body { font-family: sans-serif; }</style>
</head>
<body>
    <h1>Catálogo de Productos (Carga Ansiosa)</h1>
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

    // --- Lógica Ansiosa ---
    function obtenerTodosLosProductos(array $db): array {
        echo "<p><strong>(Conectando a la BD y trayendo TODOS los registros a memoria...)</strong></p>";
        // Simula una consulta como: SELECT * FROM productos
        $resultados = [];
        foreach ($db as $fila) {
            $resultados[] = $fila; // Agrega cada fila al arreglo de resultados.
        }
        return $resultados;
    }

    // Se obtienen TODOS los productos y se guardan en $productos.
    $productos = obtenerTodosLosProductos($database);

    echo "<ul>";
    // Ahora, recorremos el arreglo que ya está en memoria.
    foreach ($productos as $producto) {
        echo "<li>ID: " . $producto['id'] . " - " . $producto['nombre'] . "</li>";
    }
    echo "</ul>";
    ?>
</body>
</html>


<!-- En terminal: php -S localhost:8000 
     En navegador: http://localhost:8000/ansioso.php -->
