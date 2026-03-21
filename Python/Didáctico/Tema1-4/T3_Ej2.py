
def calcular_factorial(numero):
    if numero == 0 or numero == 1:
        return 1
    else:
        return numero * calcular_factorial(numero - 1)

def calcular_suma_recursiva(numero):
    if numero == 0:
        return 0
    else:
        return numero + calcular_suma_recursiva(numero -1)
    
num = input("Inserte un numero para calcular su factorial.>")
num = int(num)

resultado = calcular_factorial(num)
resultado2 = calcular_suma_recursiva(num)
print(f"El factorial del número que inserto es: {resultado}")
print(f"El resultado de la suma del 0 hasta el numero que insertó es {resultado2}")