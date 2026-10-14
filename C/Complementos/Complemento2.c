#include <stdio.h>
#include <string.h>

/* LÓGICA DE ESTRUCTURAS ANIDADAS:
 * Modela relaciones de composición directa en memoria.
 * Los bytes de FechaIngreso quedan contiguos dentro de Producto.
 */
typedef struct {
    int dia;
    int mes;
    int anio;
} FechaIngreso;

typedef struct {
    int codigo;
    char descripcion[40];
    float precio;
    int existencias;
    FechaIngreso fecha; // Struct anidado
} Producto;

/* LÓGICA DE BÚSQUEDA DEL MÁXIMO RETORNANDO DIRECCIÓN:
 * Inicializamos asumiendo que el primer elemento es el mayor.
 * Comparamos secuencialmente; si encontramos uno más caro, actualizamos
 * el puntero de referencia 'masCaro' hacia la dirección de ese nuevo elemento (&arr[i]).
 * Retornar el puntero (en vez de un índice o una copia) permite leer o modificar
 * el objeto ganador directamente en main sin buscarlo de nuevo.
 */
Producto* obtenerProductoMasCaro(Producto arr[], int total) {
    if (total <= 0) return NULL;

    Producto *masCaro = &arr[0]; // Apuntador al primer elemento

    for (int i = 1; i < total; i++) {
        if (arr[i].precio > masCaro->precio) {
            masCaro = &arr[i]; // Cambiamos el puntero para que apunte al nuevo máximo
        }
    }
    return masCaro;
}

/* LÓGICA DE ACUMULADOR Y CÁLCULO DE PROMEDIO:
 * Recorremos el arreglo sumando el costo total del inventario.
 * Calculamos el valor promedio por unidad en stock.
 */
float calcularValorInventario(const Producto *arr, int total) {
    float valorTotal = 0.0f;
    for (int i = 0; i < total; i++) {
        // Acceso anidado y multiplicación de campos
        valorTotal += (arr[i].precio * (float)arr[i].existencias);
    }
    return valorTotal;
}

/* LÓGICA DE SWAP (INTERCAMBIO) MEDIANTE PUNTEROS:
 * Al recibir las direcciones de memoria de dos estructuras completas,
 * copiamos byte a byte el contenido usando una variable auxiliar temporal.
 * Esto es la base para ordenar un arreglo de structs.
 */
void intercambiarProductos(Producto *a, Producto *b) {
    Producto temporal = *a; // Copia todo el contenido de la estructura 'a'
    *a = *b;                // Sobrescribe 'a' con los datos de 'b'
    *b = temporal;          // Pone el contenido original de 'a' en 'b'
}

/* LÓGICA DE FILTRADO CONDICIONAL POR CRITERIO MÚLTIPLE:
 * Recorre el lote e identifica productos con bajo stock (<= umbral).
 * Accede a los campos del struct anidado con la sintaxis 'ptr->fecha.campo'.
 */
void alertarStockCritico(const Producto *arr, int total, int umbral) {
    printf("\n>>> REPORTE: PRODUCTOS CON STOCK CRÍTICO (<= %d unidades) <<<\n", umbral);
    int alertas = 0;
    for (int i = 0; i < total; i++) {
        if (arr[i].existencias <= umbral) {
            printf("[ALERTA] Codigo: %d | %s | Stock: %d | Ingreso: %02d/%02d/%d\n",
                   arr[i].codigo,
                   arr[i].descripcion,
                   arr[i].existencias,
                   arr[i].fecha.dia,
                   arr[i].fecha.mes,
                   arr[i].fecha.anio);
            alertas++;
        }
    }
    if (alertas == 0) {
        printf("Todo el inventario supera el umbral de seguridad.\n");
    }
}

int main(void) {
    // Inicialización estática con llaves anidadas {{...}} para el struct interno
    Producto catalogo[] = {
        {101, "Monitor 24 Pulgadas", 3500.50f, 4,  {15, 1, 2026}},
        {102, "Teclado Mecanico",     1200.00f, 15, {20, 2, 2026}},
        {103, "Mouse Inalambrico",     450.00f, 2,  {5,  3, 2026}},
        {104, "Laptop 16GB RAM",     18500.00f, 3,  {10, 3, 2026}},
        {105, "Cable HDMI 2.0",        150.00f, 25, {1,  4, 2026}}
    };

    /* LÓGICA DE CÁLCULO DE TAMAÑO DINÁMICO:
     * sizeof(catalogo) obtiene los bytes totales del arreglo en memoria.
     * sizeof(catalogo[0]) obtiene los bytes de un solo elemento (struct Producto).
     * La división da el número exacto de elementos sin escribir números mágicos.
     */
    int cantidad = sizeof(catalogo) / sizeof(catalogo[0]);

    printf("Total de productos en catalogo: %d\n", cantidad);

    // 1. Obtener y manipular el elemento máximo mediante puntero
    Producto *productoTop = obtenerProductoMasCaro(catalogo, cantidad);
    if (productoTop != NULL) {
        printf("\nProducto mas caro registrado: %s ($%.2f)\n", 
               productoTop->descripcion, productoTop->precio);

        /* Modificación directa por puntero:
         * Aplicamos un 10% de descuento directo en el arreglo original
         */
        productoTop->precio *= 0.90f;
        printf("Nuevo precio con 10%% de descuento aplicado: $%.2f\n", productoTop->precio);
    }

    // 2. Acumuladores y reportes
    float valorTotalInventario = calcularValorInventario(catalogo, cantidad);
    printf("\nValor total del inventario: $%.2f MXN\n", valorTotalInventario);

    // 3. Filtrado por umbral (ej. 5 piezas o menos)
    alertarStockCritico(catalogo, cantidad, 5);

    // 4. Intercambio de posiciones (Swap)
    // Intercambiamos el primer producto (índice 0) con el último (índice cantidad - 1)
    printf("\n--- Intercambiando producto inicial con el final en memoria ---\n");
    intercambiarProductos(&catalogo[0], &catalogo[cantidad - 1]);

    printf("Nueva posicion 0: %s (Codigo: %d)\n", catalogo[0].descripcion, catalogo[0].codigo);
    printf("Nueva ultima posicion: %s (Codigo: %d)\n", catalogo[cantidad - 1].descripcion, catalogo[cantidad - 1].codigo);

    return 0;
}