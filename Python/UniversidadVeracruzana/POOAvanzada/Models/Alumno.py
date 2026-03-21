class Alumno:
    # Atributos de clase
    universidad = "UV"
    
    # Método constructor
    def __init__(self, nombre, edad, carrera):
        # Atributos de instancia
        self.nombre = nombre
        self.edad = edad
        self.carrera = carrera    
    
    # Métodos y funciones    
    def mostrar_datos(self):
        print(f"Nombre del alumno:{self.nombre}")
        print(f"Edad del alumno:{self.edad}")
        print(f"Carrera del alumno:{self.carrera}")
        print(f"Universidad del alumno:{Alumno.universidad}")
    pass