# Definición de funciones independientes para cada operación
def sumar(a, b):
    return a + b

def restar(a, b):
    return a - b

def multiplicar(a, b):
    return a * b

def dividir(a, b):
    # Validación para evitar dividir entre 0
    if b == 0:
        return "Error: No se puede dividir entre cero."
    return a / b

def potenciar(base, exponente):
    return base ** exponente

# Función principal que simula la calculadora
def calculadora(n1, n2, *, operacion="suma", usuario="Invitado"):
    print(f"---Cálculo para: {usuario}---")
    
    # Uso de las funciones independientes para cada operación
    if operacion == "suma":
        res = sumar(n1, n2)
    elif operacion == "resta":
        res = restar(n1, n2)
    elif operacion == "multiplicacion":
        res = multiplicar(n1, n2)
    elif operacion == "division":
        res = dividir(n1, n2)
    elif operacion == "potencia":
        res = potenciar(n1, n2)
    else:
        return "Operación no válida."

    return f"El resultado de la {operacion} es: {res}"

print(calculadora(24, 2))
print(calculadora(24, 2, operacion="resta", usuario="Juan"))
print(calculadora(24, 2, operacion="multiplicacion", usuario="Gustavo"))
print(calculadora(24, 2, operacion="division", usuario="José"))
print(calculadora(10, 2, operacion="potencia", usuario="Álvaro"))