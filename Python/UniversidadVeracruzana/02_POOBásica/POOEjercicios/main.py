
from models.Alumno import Alumno  

def elegir_opcion(opcion, lista):    
    match opcion:
        case 1:
            print("\n")
            print(f"Inserte los datos del alumno.")

            nombre = input("Nombre.>")
            edad = int(input("Edad.>"))
            carrera = input("Carrera.>")

            a1 = Alumno(nombre, edad, carrera)

            lista.append(a1)
            return
        case 2:
            pos = int(input(f"Por favor inserte el número de alumno que desea mostrar.>"))
            alum = lista[pos-1]
            alum.mostrar_datos()
            print("\n")
            return
        case 3:
            for alumno in lista:
                alumno.mostrar_datos()  
                print("\n")
            return 
        case 4:
            print(f"Saliendo del menú. . .")
            
            
            
            
lista = []
exit = True
while exit is not False:

    print(f"MENÚ DE REGISTRO DE ALUMNOS")

    print(f"1. Registrar un alumno\n",
          "2. Mostrar los datos de un alumno\n",
          "3. Mostrar a todos los alumnos\n",
          "4. Salir\n")
    opcion = int(input("Por favor elija una opción.>"))
    elegir_opcion(opcion, lista)
    if opcion == 4:
        exit = False
    
        
    
    