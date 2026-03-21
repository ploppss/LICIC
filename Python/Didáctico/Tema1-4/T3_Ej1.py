def generar_saludo(nombre, hora):
    """Genera un saludo a partir de nombre y hora (mañana, tarde, noche)"""
    if hora < 12:
        print(f"Buenos dias {nombre}. Bienvenid@ al sistema")
    elif hora < 18:
        print(f"Buenas tardes {nombre}. Bienvenid@ al sistema")
    else:
        print(f"Buenas noches {nombre}. Bienvenid@ al sistema")

nom = input("Por favor inserte su nombre.>")
hor = input("Por favor inserte la hora en formato de 24 horas.>")
hor = int(hor)

generar_saludo(nom, hor)    