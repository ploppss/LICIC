from Models.Animal import Animal
# Cuanddo una clase solo tiene  UNA clase padre se llama herencia simple
# Si hereda de varias clases es herencia múltiple
class Perro(Animal):
    def __init__(self, raza, nombre, edad):
        
        super().__init__("Mamífero") # El método super le pasa el parámetro al constructor de la clase Animal
        # Por lo que al inicializar  el constructor de la clase Perro también se inicializa la clase Animal
        self.raza = raza
        self.nombre = nombre
        self.edad = edad
        
    def morder(self):
        print(f"Estoy mordiendo . . .")
    # En este caso NO todos los animales muerden como los perros
    
    def cazar(self):
        print(f"Soy {self.nombre} y estoy cazando . . .")
        
    #################################
    ### SOBREESCRITURA DE MÉTODOS ###
    #################################

    # POLIMORFISMO DINÁMICO
    
    def moverse(self):
        print(f"Me estoy moviendo en mis 4 patas . . .")
        
    def emitir_sonido(self):
        print(f"Guau!!!")