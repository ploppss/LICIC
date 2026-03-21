inventario = {
    "Aguacates": 34,
    "Jalapeños": 8,
    "Manzanas": 9
}

print("Productos disponibles:")

for producto in inventario:
    print(f"{producto}")

nombre = input("Inserte algun producto disponible.>")

for producto in inventario:
    if nombre == producto:
        nuevoStock = input("Por favor inserte el nuevo stock del producto.>")
        nuevoStock = int(nuevoStock)
        inventario[producto] = nuevoStock
    
inventario["Tomates"] = 50

print("Nuevo producto agregado, lista actual:")

for producto in inventario:
    print(f"{producto}: {inventario[producto]}")

print("Productos con stock menor a 10:")
for producto in inventario:
    if inventario[producto] <= 10:
        print(f"{producto}: {inventario[producto]}")