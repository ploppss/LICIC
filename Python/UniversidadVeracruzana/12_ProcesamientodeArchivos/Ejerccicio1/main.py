nombre = input("Inserte el nombre del contacto.>")
telefono = input("Inserte el teléfono del contacto.>")

with open("contactos.txt", "w") as archivo:
    archivo.write(f"{nombre} - {telefono}\n")
    
opcion = input("¿Desea agregar otro contacto? (s/n) > ").strip().lower()

while opcion == "s":
    nombre = input("Inserte el nombre del contacto.>")
    telefono = input("Inserte el teléfono del contacto.>")
    
    with open("contactos.txt", "a") as archivo:
        archivo.write(f"{nombre} - {telefono}\n")
    
    opcion = input("¿Desea agregar otro contacto? (s/n) > ").strip().lower()