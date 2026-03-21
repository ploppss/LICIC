from models.Alumno import Alumno


# Creación de los objetos
a1 = Alumno("José Gómez", 18, "Cibersseguridad") # Instancia de la clase alumno

a2 = Alumno("Diego Rivas", 18, "Ciberseguridad")

# Acceso a los atributos
print(f"Datos de los alumnos:")

print("Alumno a1:")
print(a1.nombre)

print("Alumno a2:")
print(a2.nombre)

# Acceso a los métodos de los objetos
print(f"\nMétodos de los alumnos:")

a1.mostrar_datos()
print("\n")
a2.mostrar_datos()

# Reasignación de atributos de clase
Alumno.universidad = "ITX"

a1.mostrar_datos()
print("\n")
a2.mostrar_datos()

########################
### MENÚ INTERACTIVO ###
########################
Alumno.universidad = "Universidad Veracrunzana"

print("\n")
print(f"Inserte los datos del alumno")

nombre = input("Nombre.>")
edad = int(input("Edad.>"))
carrera = input("Carrera.>")

alumno1 = Alumno(nombre, edad, carrera)

print("\n")

alumno1.mostrar_datos()
