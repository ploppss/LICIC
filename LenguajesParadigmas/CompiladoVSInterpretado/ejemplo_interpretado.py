print('Hola, mundo desde Python!')


# --- INSTRUCCIONES DE INSTALACIÓN Y CONFIGURACIÓN ---
# 1. Instala Python desde: https://www.python.org/downloads/
# 2. Ejecuta el instalador. En la primera ventana, ASEGÚRATE de marcar la casilla 
#    "Add python.exe to PATH". Luego haz clic en "Install Now".
# 3. Verifica la instalación en la terminal con: python --version (o python3 --version en Linux/macOS)
# 4. Instala la extensión oficial de Python de Microsoft en Visual Studio Code (VS Code).


# --- CÓMO EJECUTAR EN LA TERMINAL DE VS CODE ---
# 1. Asegúrate de estar en el directorio donde se encuentra tu archivo.
#    Usa el comando 'cd'. Ejemplo: cd C:\Users\TuUsuario\Desktop
# 2. Ejecuta el script con:
#    python ejemplo_Interpretado.py  (o python3 ejemplo_Interpretado.py en Linux/macOS)
# 3. Salida esperada: 
#    Hola, mundo desde Python!


# --- BUENAS PRÁCTICAS EN CIBERSEGURIDAD: ENTORNOS VIRTUALES (venv) ---
# En desarrollo profesional, nunca trabajes sobre la instalación global de Python.
# Usa entornos virtuales para aislar las dependencias de tus proyectos y evitar vulnerabilidades:
#
# • Crear el entorno virtual: 
#   python -m venv nombre_del_entorno
#
# • Activar el entorno virtual: 
#   - En Windows (cmd/PowerShell): nombre_del_entorno\Scripts\activate
#   - En macOS / Linux: source nombre_del_entorno/bin/activate
# • Desactivar el entorno virtual:
#   deactivate
#
# • Nota avanzada: Puedes especificar una versión exacta si tienes varias instaladas:
#   python -m venv --python=C:\Ruta\A\Tu\Python\Python\python.exe nombre_del_entorno