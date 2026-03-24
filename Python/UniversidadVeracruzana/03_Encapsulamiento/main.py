from Models.Ejemplo import Ejemplo

obj = Ejemplo()

# Acceso a los atributos de la clase Ejemplo

# Acceso al atributo y función públicos CORRECTO
print(obj.publico) 
obj.funcion_publica()

print("\n")

# Acceso al atributo y función protegidos INCORRECTO
print(obj._protegido) # Empieza con un guión bajo
obj._funcion_protegida()
# A los atributos y métodos protegidos solo pueden acceder el mismo archivo donde esta la clase
# y los archivos que esten en el mismo paquete, en este caso los archivos dentro de Models.

# Acceso al atributo y función privados MARCA UN ERROR (ATTRIBUTE ERROR)
#print(obj.__privado) 
#obj.__funcion_privada()
# A los atributos y metodos privados solo se puede acceder a ellos dentro de la misma clase

print("\n")

# Acceso al atributo privado MALA PRÁCTICA
print(obj._Ejemplo__privado) # name mangling
obj._Ejemplo__funcion_privada() # name mangling
# Se puede acceder pero rompe el encapsulamiento

print("\n")

#########################
### GETTERS Y SETTERS ###
#########################

# Se accede como FUNCIONES
print(obj.get_privado()) # Imprime el valor

obj.set_privado(10) # Cambia el valor al atributo

print(obj.get_privado()) # Imprime el valor ya cambiado

print ("\n")

#####################################
### GETTERS, SETTERS Y DECORADORES###
#####################################

# Se accede como atributo NO como funciones
print(obj.privado) # Imprime el atributo

obj.privado = 50 # Modifica el atributo

print(obj.privado) # Imprime el atributo ya modificado