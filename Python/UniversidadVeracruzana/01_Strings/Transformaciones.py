### TRANSFORMACIONES DE STRINGS ###
texto = "Hola Mundo"

# Todo en mayúsculas
print(texto.upper())# HOLA MUNDO
# Todo en minúsculas
print(texto.lower())# hola mundo
# La primera letra de cada palabra será mayúsculas
print(texto.title())# Hola Mundo
# Convierte la primera letra en mayúscula y solo esa
print(texto.capitalize())# Hola mundo
# Invierte mayúsculas y minúsculas
print(texto.swapcase())# hOLA mUNDO

# Transformaciones para recortar
texto = "   Python   "
# Elimina los espacios al inicio y al final
print(texto.strip()) # "Python"
# Elimina los espacios a la izquierda
print(texto.lstrip())# "Python   "
# Elimina solo los espacios a la derecha
print(texto.rstrip())# "   Python"
# También se pueden eliminar caracteres específicos
print("...Hola...".strip("."))# "Hola"



# Transformaciones para reemplazar subcadenas
texto = "Me gusta Java"

print(texto.replace("Java", "Python"))# Me gusta Python

# Transformaciones para división y unión
texto = "uno dos tres"
lista = texto.split()
nuevo = "-".join(lista)
print(nuevo)# uno-dos-tres

# Transformaciones para justificación y alineación de texto
texto = "Python"

print(texto.center(10, "-"))# "--Python--" → Lo centra
print(texto.ljust(10, "."))# "Python...." → A la izquierda
print(texto.rjust(10, "."))# "....Python" → A la derecha

# Transformaciones para verificación de contenido
texto = "12345"

print(texto.isdigit())# True → Solo dígitos
print(texto.isalpha())# True → Solo letras
print("Hola".isalpha())# True → Solo letras 
print("Hola123".isalnum())# True → Letras y números
print("python".islower())# True → Solo minúsculas
print("PYTHON".isupper())# True → Solo mayúsculas