"""
    Objetivo: Practicar manejo de estructuras y archivos binarios.
o Crear un archivo binario llamado "inventario.dat".
o Guardar código, nombre, precio y cantidad de productos.
o Leer todos los productos almacenados.
o Calcular el valor total del inventario.
o Fórmula: total = precio × cantidad
"""
# Crear el archivo binario y escribir productos
with open("inventario.dat", "wb") as archivo:
    while True:
        codigo = input("Inserte el código del producto (o 'salir' para terminar).>")
        if codigo.lower() == "salir":
            break
        nombre = input("Inserte el nombre del producto.>")
        precio = float(input("Inserte el precio del producto.>"))
        cantidad = int(input("Inserte la cantidad del producto.>"))
        
        producto = f"{codigo},{nombre},{precio},{cantidad}\n"
        archivo.write(producto.encode())

# Leer el archivo binario y calcular el valor total del inventario
total_inventario = 0.0
with open("inventario.dat", "rb") as archivo:
    contenido = archivo.read().decode()
    productos = contenido.strip().split("\n")
    
    print("Productos en el inventario:")
    for producto in productos:
        codigo, nombre, precio, cantidad = producto.split(",")
        precio = float(precio)
        cantidad = int(cantidad)
        valor_total_productos = precio * cantidad
        total_inventario += valor_total_productos
        print(f"Código: {codigo}, Nombre: {nombre}, Precio: {precio}, Cantidad: {cantidad}, Valor: {valor_total_productos}")

print(f"Valor total del inventario: {total_inventario}")