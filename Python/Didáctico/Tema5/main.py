import Python.Didáctico.Tema6.T06OrganizaciondeCodigo.aritmetica as aritmetica

num1 = input("Por favor inserte el primer número a operar.>")
num1 = float(num1)

num2 = input("Por favor inserte el segundo número a operar.>")
num2 = float(num2)

resultado1 = aritmetica.sumar(num1, num2)

resultado2 = aritmetica.restar(num1, num2)

resultado3 = aritmetica.multiplicar(num1, num2)

print(f"El resultado de la suma de los 2 números es: {resultado1}")

print(f"El resultado de restar el segundo número al primero es: {resultado2}")

print(f"El resultado de multiplicar los números es: {resultado3}")

from Python.Didáctico.Tema6.T06OrganizaciondeCodigo.aritmetica import multiplicar

x = 50

y = 90

print(f"El resultado de multiplicar {x} * {y} es: {multiplicar(x, y)}")
