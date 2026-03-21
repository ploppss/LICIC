class Persona:
    def __init__(self, nombre, edad, profesion):
        self.nombre = nombre
        self.edad = edad
        self.profesion = profesion
        
    def presentarse(self):
        print(f"Hola, soy {self.nombre} y tengo {self.edad} años, además soy {self.profesion}")
    
    def CumplirAnios(self):
        self.edad+=1
        
class Empleado(Persona): # Ponemos la clase padre entre paréntesis
    def __init__(self, nombre, edad, profesion, sueldo):
        # super() llama al constructor del padre para no repetir self.nombre = nombre
        super().__init__(nombre, edad, profesion)
        self.sueldo = sueldo

    def MostrarSueldo(self):
        print(f"Soy {self.nombre} y mi sueldo es de {self.sueldo} USD")
    
    def RegistrarEmpleado(self):
        with open ("nomina.txt", 'a') as nomina:
            nomina.write("Registro de empleado:\n")
            nomina.write(f"Nombre: {self.nombre}\n")
            nomina.write(f"Edad: {self.edad}\n")
            nomina.write(f"Profesión: {self.profesion}\n")
            nomina.write(f"Sueldo: {self.sueldo}\n")
            nomina.write("-" * 30)
            nomina.write("\n")
        
alguien = Persona("Juan", 31, "Programador")

alguien.presentarse()

alguien.CumplirAnios()

alguien.presentarse()

alguien2 = Empleado("Pepe", 24, "SysAdmin", 2500)

alguien2.presentarse()

alguien2.MostrarSueldo()

alguien2.RegistrarEmpleado()

alguien2.CumplirAnios()

alguien2.RegistrarEmpleado()
