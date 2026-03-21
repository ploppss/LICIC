import aritmetica

try:
    num1 = input("Por favor inserte el primer número a operar.>")
    num1 = float(num1)

    num2 = input("Por favor inserte el segundo número (en su caso, divisor) a operar.>")
    num2 = float(num2)

    resultado1 = aritmetica.sumar(num1, num2)

    resultado2 = aritmetica.restar(num1, num2)

    resultado3 = aritmetica.multiplicar(num1, num2)
    
    resultado4 = aritmetica.dividir(num1, num2)
    
    print(f"El resultado de la suma de los 2 números es: {resultado1}")

    print(f"El resultado de restar el segundo número al primero es: {resultado2}")

    print(f"El resultado de multiplicar los números es: {resultado3}")
    
    print(f"El resultado de dividir el primer número entre el segundo es: {resultado4}")
    
    with open("historial.txt", 'a') as archivo:
        archivo.write(f"Registro de Operación: \n")
        archivo.write(f"Suma: {num1} + {num2} = {resultado1}\n")
        archivo.write(f"Resta: {num1} - {num2} = {resultado2}\n")
        archivo.write(f"Multiplicación: {num1} * {num2} = {resultado3}\n")
        archivo.write(f"División: {num1} / {num2} = {resultado4}\n")

    print("Proceso de calculo exitoso")
    
except ValueError: 
    print("ERROR. Por favor solo inserte números y punto decimal.")
except ZeroDivisionError:
    print("ERROR. Por favor, no inserte como divisor un 0, la división entre 0 es imposible")
except Exception as e:
    print("ERROR. Ocurrió un error inesperado.")
finally:
    print("El proceso de calculo ha culminado.")
