class Ejemplo:
    # CONSTRUCTOR
    def __init__(self):
        self.publico = "1. Público"
        self._protegido = "2. Protegido"
        self.__privado = 3
    
    # MÉTODOS
    def funcion_publica(self):
        print(f"Hola soy una función pública.")
        
    def _funcion_protegida(self):
        print(f"Hola soy una función protegida.")
        
    def __funcion_privada(self): 
        print(f"Hola soy una función privada.") 
    
#########################
### GETTERS Y SETTERS ###
#########################
    # Sirve para acceder a métodos privados y protegidos
    # Son tradicionales
    def get_privado(self): # GETTER
        return self.__privado
    
    def set_privado(self, valor): # SETTER
        # Se puede añadir una validación
        if int(valor) >= 0:
            self.__privado = int(valor)
        else:
            print(f"ERROR. El valor no es un número natural")
    
#####################################
### GETTERS, SETTERS Y DECORADORES###
#####################################

    @property # Es para leer
    def privado(self): # Método GETTER
        return self.__privado

    @privado.setter # Es para modificar el atributo
    def privado(self, valor): # Método SETTER
        if valor >= 0:
            self.__privado = int(valor)
        else:
            print(f"ERROR. El valor no es un número natural")
    