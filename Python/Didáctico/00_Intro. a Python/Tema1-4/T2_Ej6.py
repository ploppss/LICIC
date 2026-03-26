PIN = "1234"

intentos = 1

while intentos < 4:
    pinIntentado = input("Por favor inserte el PIN de 4 digitos.>")
    
    if pinIntentado == PIN:
        print("PIN aceptado, acceso concedido")
        break
    elif intentos == 2:
        print("Este es su ultimo intento.")
    else:
        print("PIN incorrecto, por favor vuelva a intentarlo")
    intentos += 1