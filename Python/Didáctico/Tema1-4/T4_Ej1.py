tareasPendientes = ["Lavar trastes", "Pasear al perro", "Tender la cama"]

for tarea in tareasPendientes: 
    print(f"{tarea}")

tareaNueva = input("Inserte una nueva tarea.>")
tareasPendientes.append(tareaNueva)

print(f"Segunda tarea de la lista: {tareasPendientes[1]}")

for tarea in tareasPendientes: 
    print(f"{tarea}")
    
eliminarTarea = input("Desea eliminar la ultima tarea?(S/N)")

if eliminarTarea == 'S' or eliminarTarea == 's':
    tareasPendientes.pop()
else:
    print("La lista no se ha modificado")

for tarea in tareasPendientes: 
    print(f"{tarea}")
