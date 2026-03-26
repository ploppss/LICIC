edad = 17
licencia = True

# Operadores relacionales y logicos
if edad >= 18 and licencia == True:
    print("Acceso concedido: Usted es mayor de edad y tiene licencia.")# La identacion es muy importante
elif edad>= 18 and not licencia:
        print("Acceso parcial: Es mayor de edad, pero necesita obtener su licencia.")# Si el if es falso se ejecuta el ciclo elif
else:
    print("Acceso denegado: Usted es menor de edad y no cumple los requisitos")# Si ninguno de los anteriores fue verdadero se ejecutara el bloque else
    
contador = 1
while contador <= 5:
    print(f"Iteración {contador}")
    contador +=1 # Es vital cambiar la condición para evitar un bucle infinito
    
# Uso común con la función range()
for i in range(5): # range(5) genera 0, 1, 2, 3, 4
    print(f"Número: {i}")

# Iterando sobre una secuencia (string)
nombre = "Python"
for letra in nombre:
    print(f"Letra: {letra}")
    