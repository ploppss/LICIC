class Persona:
    def __init__(self, nombre, edad, profesion):
        self.nombre = nombre
        self.edad = edad
        self.profesion = profesion
        
    def presentarse(self):
        print(f"Hola, soy {self.nombre} y tengo {self.edad} años, además soy {self.profesion}")
    
    def CumplirAnios(self):
        self.edad+=1
        

alguien = Persona("Juan", 31, "Programador")

alguien.presentarse()

alguien.CumplirAnios()

alguien.presentarse()