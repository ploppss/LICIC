IVA = 0.16
precio = 0.00
precioFinal= 0.00
print("Esta dentro del menu para calcular el IVA de un producto.")
print("En este caso el IVA representa el 16% del precio total del producto.")

precio = input("Por favor inserte el precio del producto que desea comparar.>")

precioFinal = float(precio) + float(precio) * IVA 

print(f"El precio final de su producto es de ${precioFinal}")