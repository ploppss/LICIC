############################
### SEGMENTACIÓN-SLICING ###
############################

mi_cadena = "Hola Mundo"
# Inicia en el primer caracter y llega hasta el indice 4
print(mi_cadena[0:4]) # Hola

# Empieza en el caracter indexado con 5 y llega hasta el final
print(mi_cadena[5:]) # Mundo

# Desde el inicio hasta el índice 3
print(mi_cadena[:4]) # Hola

# Toma caracteres de 2 en 2
print(mi_cadena[::2]) # Hl ud

# Obtiene los últimos 5 caracteres: "Mundo"
print(mi_cadena[-5:])# Mundo

# Invierte la cadena
print(mi_cadena[::-1])# odnuM aloH
