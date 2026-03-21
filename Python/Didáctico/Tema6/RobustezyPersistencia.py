try:
    num = int(input("Ingrese un número: "))
    resultado = 100 / num
    
    # Guardar el resultado en un archivo
    archivo = open("log.txt", "a") # 'a' de append para no borrar lo anterior
    archivo.write(f"Resultado exitoso: {resultado}\n")
    archivo.close()
    
except ValueError:
    print("Error: Debe ingresar un número entero válido.")
except ZeroDivisionError:
    print("Error: No se puede dividir entre cero.")
except Exception as e:
    print(f"Ocurrió un error inesperado: {e}")
finally:
    print("Proceso de cálculo finalizado.") # Se ejecuta siempre     