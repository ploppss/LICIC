from models.Alumno import Alumno  
from utils.elegir_opcion import elegir_opcion
        
lista = []
exit = False
while not exit:

    print(f"MENÚ DE REGISTRO DE ALUMNOS")

    print(f"1. Registrar un alumno\n",
          "2. Mostrar los datos de un alumno\n",
          "3. Mostrar a todos los alumnos\n",
          "4. Salir\n")
    opcion = int(input("Por favor elija una opción.>"))
    elegir_opcion(opcion, lista)
    if opcion == 4:
        exit = False