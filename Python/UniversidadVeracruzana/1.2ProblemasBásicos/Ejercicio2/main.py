"""
De un operario se conoce su sueldo y los años de antigüedad. Se pide 
Escribe un programa en Python que lea los datos de entrada e informe: 
a)  Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, 
otorgarle. un aumento del 20 %, mostrar el sueldo a pagar. 
b)  Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle 
un aumento de 5 %. 
c)  Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios. 
"""

print("Bienvenido al menú para calcular su sueldo")

sueldo = float(input("Inserte su sueldo actual por favor.>"))
antiguedad = int(input("Inserte su antigüedad en años por favor.>"))

if sueldo < 500 and antiguedad >= 10:
    print(f"Se le ha otorgado un aumento del 20% a su sueldo actual, su nuevo sueldo es de ${sueldo * 1.2}")

if sueldo >= 500:
    print(f"Su sueldo permanece igual, de ${sueldo}")