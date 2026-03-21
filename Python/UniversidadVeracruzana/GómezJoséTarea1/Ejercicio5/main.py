"""
 Escribe un programa en Python que pida al usuario seleccionar una figura, 
las opciones son: 
•  Cuadrado 
•  Rectángulo 
•  Circulo 
•  Triangulo 
Una vez que el usuario seleccione una opción válida deberá preguntarle que desea 
calcular, las opciones son: 
•  Calcular el área 
•  Calcular el perímetro 
•  Calcular ambos 
Una  vez  seleccionada  la  segunda  opción  el  algoritmo  deberá  solicitar  los  datos 
necesarios para calcular el área o el perímetro o ambos y deberá mostrar el resultado 
de los cálculos. En caso de que el usuario no seleccione una opción válida en las 2 
preguntas iniciales, se le deberá mostrar un mensaje de error. 
"""
import funciones
salida = True

while salida:
    print("===BIENVENIDO AL MENÚ DE GEOMETRÍA===")
    print(
    "1. Cuadrado\n"
    "2. Rectángulo\n"
    "3. Círculo\n"
    "4. Triángulo\n"
    "5. Salir del menú."
    )
    figura = int(input("Por favor elija una opción del menú.>"))

    match figura:
        case 1:
            print("Ha elegido el cuadrado.")
            print("1. Calcular el área\n"
                "2. Calcular el perímetro\n"
                "3. Calcular ambos\n"
                "4. Volver al menú principal\n"
                )
            opcion = int(input("Por favor elija una opción.>"))
            match opcion:
                case 1:
                    lado = float(input("Por favor inserte la medida de un lado en cm.>"))
                    print(f"El área del cuadrado es: {funciones.area_cuadrado(lado)} cm².")
                case 2:
                    lado = float(input("Por favor inserte la medida de un lado en cm.>"))
                    print(f"El perímetro del cuadrado es: {funciones.perimetro_cuadrado(lado)} cm.")
                case 3:
                    lado = float(input("Por favor inserte la medida de un lado en cm.>"))
                    funciones.ambos_cuadrado(lado)
                case 4:
                    continue
        case 2:
            print("Ha elegido el rectángulo.")
            print("1. Calcular el área\n"
                "2. Calcular el perímetro\n"
                "3. Calcular ambos\n"
                "4. Volver al menú principal\n"
                )
            opcion = int(input("Por favor elija una opción.>"))
            match opcion:
                case 1:
                    base = float(input("Por favor inserte la medida de la base en cm.>"))
                    altura = float(input("Por favor inserte la medida de la altura en cm.>"))
                    print(f"El área del rectángulo es: {funciones.area_rect(base, altura)} cm².")
                case 2:
                    base = float(input("Por favor inserte la medida de la base en cm.>"))
                    altura = float(input("Por favor inserte la medida de la altura en cm.>"))   
                    print(f"El perímetro del rectángulo es: {funciones.perimetro_rect(base, altura)} cm.")
                case 3:
                    base = float(input("Por favor inserte la medida de la base en cm.>"))
                    altura = float(input("Por favor inserte la medida de la altura en cm.>"))
                    funciones.ambos_rect(base, altura)
                case 4:
                    continue
        case 3:
            print("Ha elegido el círculo.")
            print("1. Calcular el área\n"
                "2. Calcular el perímetro\n"
                "3. Calcular ambos\n"
                "4. Volver al menú principal\n"
                )
            opcion = int(input("Por favor elija una opción.>"))
            match opcion:
                case 1:
                    diametro = float(input("Por favor inserte la medida del diámetro en cm.>"))
                    radio = diametro / 2
                    print(f"El área del rectángulo es: {funciones.area_cir(radio)} cm².")
                case 2:
                    diametro = float(input("Por favor inserte la medida del diámetro en cm.>"))
                    radio = diametro / 2
                    print(f"El perímetro del rectángulo es: {funciones.perimetro_cir(diametro)} cm.")
                case 3:
                    diametro = float(input("Por favor inserte la medida del diámetro en cm.>"))
                    radio = diametro / 2
                    funciones.ambos_cir(radio, diametro)
                case 4:
                    continue
        case 4:
            print("Ha elegido el triángulo.")
            print("Designaremos el lado número 3 del triángulo como la base de éste.")
            print("1. Calcular el área\n"
                "2. Calcular el perímetro\n"
                "3. Calcular ambos\n"
                "4. Volver al menú principal\n"
                )
            opcion = int(input("Por favor elija una opción.>"))
            match opcion:
                case 1:
                    lado3 = float(input("Por favor inserte la medida del lado 3 (base) en cm.>"))
                    altura = float(input("Por favor inserte la medida de la altura en cm.>"))
                    print(f"El área del triángulo es: {funciones.area_tri(lado3, altura)} cm².")
                case 2:
                    lado1 = float(input("Por favor inserte la medida del lado 1 en cm.>"))
                    lado2 = float(input("Por favor inserte la medida del lado 2 en cm.>"))
                    lado3 = float(input("Por favor inserte la medida del lado 3 (base) en cm.>"))
                    print(f"El perímetro del triángulo es: {funciones.perimetro_tri(lado1, lado2, lado3)} cm.")
                case 3:
                    lado1 = float(input("Por favor inserte la medida del lado 1 en cm.>"))
                    lado2 = float(input("Por favor inserte la medida del lado 2 en cm.>"))
                    lado3 = float(input("Por favor inserte la medida del lado 3 (base) en cm.>"))
                    altura = float(input("Por favor inserte la medida de la altura en cm.>"))
                    funciones.ambos_tri(lado1, lado2, lado3, altura)
                case 4:
                    continue
        case 5:
            salida = False
            