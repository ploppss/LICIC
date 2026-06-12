contador_lineas = 0
contador_palabras = 0
contador_caracteres = 0 

with open("texto.txt", "r") as archivo:
    for linea in archivo:
        contador_lineas += 1
        contador_palabras += len(linea.split())
        contador_caracteres += len(linea)

print(f"Líneas: {contador_lineas}")
print(f"Palabras: {contador_palabras}")
print(f"Caracteres: {contador_caracteres}")