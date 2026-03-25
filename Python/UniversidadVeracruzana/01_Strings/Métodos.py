######################
### MÉTODO .SPLIT()###
######################

cadenas1 = "Hola mundo Python"
resultado = cadenas1.split()# ['Hola', 'mundo', 'Python']
print(resultado)# 

cadenas2 = "Manzana,pera,uva,piña"
resultado = cadenas2.split(",")
print(resultado)# ['Manzana', 'pera', 'uva', 'piña']

resultado = cadenas2.split(",", 2)# 
print(resultado)# ['Manzana', 'pera', 'uva,piña']

############################
### OPERADOR IN Y NOT IN ###
############################

cadena_principal = "Hola, Mundo!"
subcadena = "Mundo"

if subcadena in cadena_principal:
    print(f"'{subcadena}' SÍ está dentro de la cadena principal")
else: 
    print(f"'{subcadena}' NO está dentro de la cadena principal")
    
# Uso del operador not in
otra_subcadena = "Python"

if otra_subcadena not in cadena_principal:
    print(f"'{otra_subcadena} NO está dentro de la cadena principal")
else:
    print(f"'{otra_subcadena} SÍ está dentro de la cadena principal")

# El operador in y not in es sensible a MAYÚSCULAS Y minúsculas

###################
### MÉTODO FIND ###
###################

cadena_principal = "Hola mundo, hola Python"
pos= cadena_principal.find("hola")
print (pos)# La posición donde empieza la cadena es la número 12

pos = cadena_principal.find("hola", 11)
# Ahora empieza a buscar desde un índice antes de la coincidencia

####################
### MÉTODO INDEX ###
####################

texto = "Hola mundo"
pos = texto.index("mundo")
print(pos) # 5

texto = "banana"
pos = texto.index("a", 2, 6)
print(pos) # 3

texto = "Hola, Mundo"
#print(texto.index("Python"))  VALUE ERROR

# Método find e index hacen prácticamente lo mismo pero el método index lanza un error, y se tiene que manejar con una excepcion y un try.