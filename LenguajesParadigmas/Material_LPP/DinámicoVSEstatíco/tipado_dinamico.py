# Tipado Dinámico fuerte 
# Al inicio, la variable apunta a un objeto de tipo entero.
variable = 100
print(f"Valor: {variable} + Tipo: {type(variable)}")

# Ahora, reasignamos la misma variable para que apunte a un objeto de tipo texto (str).
# Esto es totalmente válido en Python.
variable = "Hola Python"
print(f"Valor: {variable} + Tipo: {type(variable)}")


# Conviertes "25" a 25 y luego los sumas.
resultado = 25 + int("25")

# resultado = 25 + "25"  # Esto generará un error en Python, ya que no se puede sumar un entero y un string directamente.
# en este caso forzamos la conversión de "25" a entero usando int("25") para que la operación sea válida.
# Aunque posible en Python, no es recomendable hacer conversiones implícitas de tipos, ya que puede llevar a errores difíciles de detectar.



print(f"Resultado: {resultado} + Tipo:{type(resultado)}") # Salida: 50


# A partir de Python 3.5, sí se pueden escribir los tipos de forma explícita utilizando algo llamado Type Hints (Anotaciones de tipo). 
# Se ve así:
# edad: int = 25
# nombre: str = "Heber"
# Esto sirve para advertir a otros programadores (o a ti mismo en el futuro) 
# sobre qué tipo de datos se espera que tenga la variable, pero no impide que se le asigne un valor de otro tipo.