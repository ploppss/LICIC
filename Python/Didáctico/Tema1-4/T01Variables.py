# 1. Asignación y Tipos de Datos
nombre = "Jose"  # str
edad = 0              # int
pi = 3.14159           # float

# 2. Operación Aritmética

# El operador ** eleva un número a una potencia (ej: 5 al cubo)
potencia = 5 ** 3

# 4. Salida de Datos (Output)
print(f"Hola, {nombre}. Sabia que 5 al cubo es {potencia} y el valor de Pi es {pi}?")

# 3. Entrada de Datos (Input)
# La entrada SIEMPRE es str. Debe convertirse a int o float si se va a operar.
anioNacimiento = input("Inserte su año de nacimiento.>")
edad = 2025 - int(anioNacimiento) # Conversión de str a int

print(f"Su edad es de {edad} años")

# Hay que recordar que en Python tambien hay palabras reservedas por lo que no podemos nombrar a variables con esas palabras.
# Para nombrar una variables es necesario tener en cuenta que su nombre no puede empezar con numeros ni tener espacios.

