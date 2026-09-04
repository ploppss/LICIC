#  Ejemplo equivalente en estilo imperativo:
numeros = [10, 21, 30, 43, 50, 68]
numeros_pares = [] 


for numero in numeros:
    # Se describe CÓMO verificar si el número es par.
    if numero % 2 == 0:
        # Se da la instrucción explícita de agregar el número si pasa la condición.
        numeros_pares.append(numero)
    else:
        # Si no es par, no se hace nada (se puede omitir el else).
        pass


print(numeros_pares) # [10, 30, 50, 68]


# //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#  Ejemplo equivalente en estilo declarativo:
numeros_declarativo = [10, 21, 30, 43, 50, 68]

# Se usa filter con una función anónima y lambda para describir QUÉ queremos (los números pares), sin detallar CÓMO hacerlo.
# Lambda es una función anónima que toma un número y devuelve True si es par, False si no lo es.
# filter devuelve un objeto especial, por eso lo convertimos a lista con list().
numeros_pares_filter = list(filter(lambda num: num % 2 == 0, numeros_declarativo))

print(numeros_pares_filter) # [10, 30, 50, 68]




