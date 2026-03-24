from Models.Animal import Animal

class Abeja(Animal):
    def __init__(self, nombre):
        
        super().__init__("Insecto")
        
        self.nombre = nombre
        
    def picar(self):
        print(f"Soy {self.nombre} y estoy picando . . .")
        
    #################################
    ### SOBREESCRITURA DE MÉTODOS ###
    #################################

    # POLIMORFISMO DINÁMICO
    
    def moverse(self):
        print(f"Me estoy moviendo volando . . .")
        
    def emitir_sonido(self):
        print(f"Zzzzzzz")