matricula = input("Inserte la matrícula del estudiante.>")
nombre = input("Inserte el nombre del estudiante.>")
promedio = float(input("Inserte el promedio del estudiante.>"))

with open("estudiantes.dat", "wb") as archivo:
    archivo.write(f"{matricula},{nombre},{promedio}\n".encode())

opcion = input("¿Desea agregar otro estudiante? (s/n) > ").strip().lower()

while opcion == "s":
    matricula = input("Inserte la matrícula del estudiante.>")
    nombre = input("Inserte el nombre del estudiante.>")
    promedio = float(input("Inserte el promedio del estudiante.>"))
    
    with open("estudiantes.dat", "ab") as archivo:
        archivo.write(f"{matricula},{nombre},{promedio}\n".encode())
    
    opcion = input("¿Desea agregar otro estudiante?(s/n).> ").lower()

with open("estudiantes.dat", "rb") as archivo:
    contenido = archivo.read().decode()
    registros = contenido.strip().split("\n")
    
    print("Registros de estudiantes:")
    for registro in registros:
        matricula, nombre, promedio = registro.split(",")
        print(f"Matrícula: {matricula}, Nombre: {nombre}, Promedio: {promedio}")
