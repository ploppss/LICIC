lado1 = input("Por favor inserte el primer lado de su triangulo.>")
lado1 = int(lado1)
lado2 = input("Por favor inserte el segundo lado de su triangulo.>")
lado2 = int(lado2)
lado3 = input("Por favor inserte el tercer lado de su triangulo.>")
lado3 = int(lado3)

if (lado1 + lado2) > lado3 and (lado1 + lado3) > lado2 and (lado3 + lado2) > lado1:
    if lado1 == lado2 and lado2 == lado3:
        print("Los valores que inserto corresponden a un triangulo equilatero.")
    if (lado1 == lado2 and lado2 != lado3) or (lado2 == lado3 and lado2 != lado1) or (lado3 == lado1 and lado3 != lado2):
        print("Los valores que inserto corresponden a un triangulo isosceles.")
    elif (lado1 != lado2) and (lado2 != lado3):
        print ("Los valores que inserto corresponden a un triangulo escaleno.")
else:
    print("Por favor inserte valores validos, los valores que inserto anteriormente no son validos.")

###################
##LOGICA MEJORADA##
###################
    
    # 1. Validación de Existencia
#if (lado1 + lado2) > lado3 and (lado1 + lado3) > lado2 and (lado2 + lado3) > lado1:
    
    # 2. Clasificación (Usando la lógica de cascada)
#   if lado1 == lado2 and lado2 == lado3:
#        print("Equilátero.") # El más estricto
    
    # Si llega aquí, NO es equilátero. Por lo tanto, el Isósceles solo necesita
    # verificar si *al menos* dos son iguales.
#   elif lado1 == lado2 or lado1 == lado3 or lado2 == lado3:
#        print("Isósceles.") 
        
    # Si llega aquí, NO fue equilátero ni isósceles. Por lo tanto, es escaleno.
#   else: 
#        print("Escaleno.")
        
#else:
#   print("Error: No es un triángulo válido.")