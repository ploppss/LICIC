#!/bin/bash

# --- Función de Ayuda (-h o --help) ---
function mostrar_ayuda() {
    echo "Uso: $0 [ORIGEN] [DESTINO]"
    echo ""
    echo "Descripción:"
    echo "  Automatiza el respaldo comprimido (.zip) de un directorio."
    echo ""
    echo "Parámetros (Posicionales):"
    echo "  \$1 - Directorio de origen (el que quieres respaldar)."
    echo "  \$2 - Directorio de destino (donde se guardará el backup)."
    echo ""
    echo "Ejemplo:"
    echo "  $0 /home/usuario/documentos /home/usuario/backups"
}

# 1. Validar si se pidió ayuda
if [[ "$1" == "-h" || "$1" == "--help" ]]; then
    mostrar_ayuda
    exit 0
fi

# 2. Validar cantidad de parámetros (Requisito: Cantidad)
if [ "$#" -ne 2 ]; then
    echo "Error: Parámetros insuficientes o mal ordenados."
    echo "Ejecute '$0 --help' para ver las instrucciones."
    exit 1
fi

# Asignación de variables
ORIGEN=$1
DESTINO=$2
FECHA=$(date +%Y%m%d_%H%M%S)
NOMBRE_ARCHIVO="Backup_${FECHA}.zip"

# 3. Validar existencia de rutas (Manejo de errores)
if [ ! -d "$ORIGEN" ]; then
    echo "Error: La ruta de origen '$ORIGEN' no es un directorio válido."
    exit 1
fi

if [ ! -d "$DESTINO" ]; then
    echo "Error: La ruta de destino '$DESTINO' no es un directorio válido."
    exit 1
fi

# 4. Ejecución de la automatización
echo "-------------------------------------------"
echo "Generando archivo ZIP de: $ORIGEN"
echo "Destino: $DESTINO/$NOMBRE_ARCHIVO"
echo "-------------------------------------------"

# Comando zip: -r (recurse) para incluir subcarpetas, -q (quiet) para salida limpia
zip -rq "${DESTINO}/${NOMBRE_ARCHIVO}" "$ORIGEN"

# 5. Indicador de éxito/error
if [ $? -eq 0 ]; then
    echo "[OK] Respaldo completado con éxito."
    echo "Archivo: ${NOMBRE_ARCHIVO}"
else
    echo "[ERROR] Falló la creación del archivo ZIP."
    exit 1
fi
echo "-------------------------------------------"