# Formas de declarar un diccionario

# CON LLAVES
d1 = {"Nombre":"Sara",
      "Edad":27,
      "Documento": 14079}

# CON CONSTRUCTOR Y SIGNO "="
d3 = dict(Nombre = "Sara", Edad = 27, Documento = 14079)

# CON CONSTRUCTOR Y PARÉNTESIS
d2 = dict(# Entre paréntesis
        [# Dentro de los paréntesis corchetes
            ("Nombre", "Sara"),# Cada par key-value debe estar entre paréntesis
            ("Edad",27),# Los elementos del par se separan por una coma
            ("Documento", 14079)# Cada par entre paréntesis tambien se separa por una coma
        ]
    )

# Acceso a los elementos
print("---Acceso a los elementos--")

print(d1["Nombre"])
print(d2["Edad"])
print(d3.get("Documento")) # También se puede acceder al elemento con la función get
print()

# Actualización de elementos
print("---Actualización de elementos---")

d1["Nombre"] = "Laura"
d1["Direccion"] = "Avenida Siempre Viva" # Se intenta modificar un valor de una llave que no existe, como no encuentra la llave la añade

print(d1)
print()

# Imprimir los elementos
print("---Impresión de claves---")
for x in d1:
    print(x)
print()

print("---Impresión de claves---")
for x in d1:
    print(d1[x])
print()

print("---Impresión de pares clave-valor---")
# print(d1.items()) Imprime los pares pero se ve feo

# SALIDA CON FORMATO BONITO
for k, v in d1.items():
    print(f"{k}:{v}")

print()

# Diccionarios adnidados
print("---Diccionarios Anidados---")

anidado1 = {"a": 1, "b": 2}
anidado2 = {"c": 3, "d": 4}

dic_anidado = {"Anidado1": anidado1, "Anidado2": anidado2}

print(dic_anidado)
print()

# Obtención de claves inexistentes
dic = {"a": 1, "b": 2, "c": 3, "d": 4}
print(dic.get("z", "El elemento con la clave no existe")) # Si no se le pasa el segundo parametro a la función simplemente devuelve None
print()

# Convertir diccionario a lista de Python
# Devuelve una lista de pares (clave, valor)
it = dic.items()

print(list(it)) # A partir de aqui ya se puede indexar
print(list(it)[0]) # Primer elemento ('a', 1)
print(list(it)[1])
print(list(it)[2])

print(list(it)[0][0]) # Imprime la 'a'
print(list(it)[0][1]) # Imprime el 1