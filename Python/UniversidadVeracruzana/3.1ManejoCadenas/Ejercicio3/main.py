palabras = input("Por favor inserte varias palabras separadas por comas ejemplo:(gato,perro,vaca).>")

lista = palabras.split(",")

palabras_unidas = "-".join(lista)

print(f"Cantidad de palabras insertadas: {len(lista)}")

print(f"Primer elemento de la lista: {lista[0]}")

print(f"Último elemento de la lista: {lista[-1]}")

print(f"Palabras de nuevo unidas: {palabras_unidas}")