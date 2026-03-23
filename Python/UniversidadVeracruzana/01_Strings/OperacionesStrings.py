texto = "Hola ¿cómo estan?"
# Longitud
print(len(texto))
print("\n")
# Indexar
print(texto[0]) # H
print(texto[4]) # Espacio en blanco
print (texto[16]) # ?

# Los índices negativos empiezan de atrás hacia adelante, el -1 representa la ultima posición de la cadena y sigue decreciendo hasta el número de caracteres de la cadena.
# Por ejemplo, la longitud de la cadena es 17 por lo tanto -17 es el índice 0, o sea la 'H'
print(texto[-1]) # ?
print(texto[-2]) # n
print (texto[-17]) # H
print("\n")

# Recorrer cadenas
print (range(len(texto))) # La función range da un rango

# Indexa e imprime los caracteres de la cadena texto
for i in range(len(texto)):
    print (f"Caracter número: {i} -> {texto[i]}")
    
# Imprime los caracteres separados por '-'    
for i in range(len(texto)):
    print(f"{texto[i]}", end="-")
    
print("\n")
print("Eso es todo.")

#########################################
### CONCATENCIÓN Y FORMATEO DE CADENAS###
#########################################

# Concatenación clásica
texto1 = "Hola"
texto2 = "Mundo"
resultado1 = texto1 + " " + texto2
print(resultado1) # Hola Mundo

# Concatenación y formateo de cadenas
texto3 = "Hola"
texto4 = "Mundo en Python"
numAlumnos = 16
resultado2 = texto3 + " " + texto2 + ", tengo " + str(numAlumnos) + " alumnos."
print(resultado2) # Hola Mundo en Python, tengo 16 alumnos.

# Concatenación con operador
texto1 += texto2
print(texto1) # HolaMundo

# Multiplicación de cadenas
mensaje = "Despierten..."
print(mensaje*3) # Despierten...Despierten...Despierten...

# Utilizando una lista para imprimir las cadenas
frutas = ["Pera", "Manzana", "Uva"]
print(frutas) # ['Pera', 'Manzana', 'Uva']

for fruta in frutas:
    print(fruta, end = " ") # Pera Manzana Uva

print("\n")

# Método join de manera manual
f = ""
for fruta in frutas:    # Pera
    print(fruta)        # Manzana
    f += fruta + " "    # Uva
print(f) # Pera Manzana Uva

print("\n")

# Método .join()
print(", ".join(frutas)) # Pera, Manzana, Uva

################
### FORMATEO ###
################

nombre = "José Alberto Gómez García"
edad = 18
cadenaFormato1 = f"Mi nombre es {nombre}, y tengo {edad} años."
print(cadenaFormato1) # Mi nombre es José Alberto Gómez García, y tengo 18 años.

# Con el método .format()
cadenaFormato2 = "Mi nombre es {}, y tengo {} años.".format(nombre, edad)
print(cadenaFormato2) # Mi nombre es José Alberto Gómez García, y tengo 18 años.

