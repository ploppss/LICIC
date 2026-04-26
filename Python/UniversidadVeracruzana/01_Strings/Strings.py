mi_string = "¡Hola 😁!"
print(mi_string)
# Salida: ¡Hola!

print ("La variable es de tipo:", type(mi_string))
# Salida <class 'str'>, la función type devuelve el tipo de variable que se nombra

print ("Número de caracteres:", len(mi_string))
# Salida: 6, la función len devuelve la longitud de la cadena que se nombra

for i, letra in enumerate(mi_string):
    # Salida simple
    # print(i, "->", letra, " ", ord(letra), " ", hex(ord(letra)))
    # Salida con formato al inicio de los parentesis tiene una f
    print(f"{i} -> {letra}, valor decimal: {ord(letra)}, valor hexadecimal: {hex(ord(letra))}") # Su valor hexadecimal simplemente nos sirve para encontrarlo dentro de la tabla unicode
# Indexar cadena, elemento de la cadena, saca su valor unicode en decimal, convierte el valor unicode a hexadecimalD
# 3 -> l 108 0x61

# VALORES UNICODE Y FORMATOS
print(" ")
print(f"===VALORES UNICODE Y FORMATOS===")
print(" ")

for letra, in mi_string:
    codigo = ord(letra)
    
    # Unicode tiene distintos planos:
    # Si el caracter esta dentro del plano multilingue básico (BMP), su valor es menor o igual a 0xFFFF y se representa con  \uXXXX
    # en cambio si no se representa con BMP quiere decir que es mayor y se representa con \uXXXXXXXX
    
    if codigo <= 0xFFFF: # Unicode requiere de una diagonal invertida al inicio para estar representado, \u00a1
        print(f"{letra} -> Representación con formato Unicode: u+ {codigo:04x}, Representación en python \\u{codigo:04x}") # Los caracteres que lleguen a este bloque solo necesitan 2 bytes o 4 digitos hexadecimales para ser representados.
    else:
        print(f"{letra} -> Representacion con formato Unicode: U+ {codigo:06x}, Representación en python \\u{codigo:08x}") # Los caracteres que lleguen a este bloque necesitan 4 bytes o 8 digitos hexadecimales para ser representados.
        # Si su representacion necesita mas de 4 digitos hexadecimales, la 'u' del formato ahora tiene que ser mayúscula como se ve en el else
        
# CODIFICACIÓN Y DECODIFICACIÓN
print(" ")
print(f"===CODIFICACIÓN Y DECODIFICACIÓN===")
print(" ")

mi_string = "¡Hola!"
bytes_codificados = mi_string.encode('utf-8')
print(bytes_codificados)
# Salida: b'\xc2\xa1Hola!'
# A diferencia del valor hexadecimal cuando utilizamos el método encode, realmente obtenemos la representación real del caracter '¡'
texto_decodificado = bytes_codificados.decode ('utf-8')
print(texto_decodificado)
#Salida: ¡Hola!

ranchero = '🤠'
mapache = '🐺' 

ranchero_encode = ranchero.encode('utf-8')
mapache_encode = mapache.encode('utf-8')

print(f"La representación del emoji {ranchero} en hexadecimal es: {ranchero_encode}")
print(f"La representación del emoji {mapache} en hexadecimal es: {mapache_encode}")
print(f"Los bytes que ocupa el emoji del ranchero son: {len(ranchero_encode)}")
print(f"Los bytes que ocupa el emoji del mapache son: {len(mapache_encode)}")

