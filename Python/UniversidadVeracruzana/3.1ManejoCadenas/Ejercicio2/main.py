frase = " Python es divertido "
lista = frase.strip()
frase2 = "".join(lista)
frase2 = frase2.upper()

print(f"Original: \"{frase}\" ")

print(f"Transformada: \"{frase2[::-1]}\" ")