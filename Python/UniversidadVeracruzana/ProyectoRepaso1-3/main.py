from Models.Clase import Clase

salir = False
while not salir:
    
    print(f"===MENÚ DE MODICIACIÓN DE CADENAS===")
    print(f"1. Calcular la longitud")
    print(f"2. Convertir a mayúsculas")
    print(f"3. Extraer una subacadena (slicing)")
    print(f"0. Salir del menú")
    
    cadena = input(f"Por favor inserte la cadena que desea manipular.>")

    instancia = Clase(cadena)

    opcion = int(input(f"Por favor escoja una opción del menú.>"))
    
    match opcion:
        case 1:
            print(f"La longitud de su cadena es de {instancia.longitud()} caracteres")
        case 2:
            print(f"La cadena pasada a mayúsculas es: {instancia.a_mayusculas()}")
        case 3:
            inicio = int(input(f"Por favor inserte desde que posición de la cadena desea empezar a extraer la subcadena.>"))
            fin = int(input(f"Por favor inserte hasta que posición de la cadena desea extraer.>"))
            paso = int(input(f"Por favor inserte el paso con el que se extraerán los caracteres.>"))
            
            print(f"Su subcadena resultante es: {instancia.subcadena(inicio, fin, paso)}")
        case 0:
            salir = True