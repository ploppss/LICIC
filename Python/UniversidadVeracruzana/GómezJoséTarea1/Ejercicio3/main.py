"""
Una aerolínea necesita un programa que le permita calcular el precio de 
los boletos de avión y el tiempo de viaje para viajeros frecuentes considerando las 
siguientes reglas: 
a)  El valor normal por km recorrido es de $ 4.50 pesos, pero cuando la distancia 
del viaje es mayor o igual a 500km el precio del km baja a $ 3.50 pesos. 
b)  Los aviones de la aerolínea viajan a una velocidad promedio de 650 km/h, 
para viajes de más de 900km los pilotos tienen autorizado entrar a velocidad 
crucero de 850 km/h.  
"""

print("Bienvenido al menú para calcular el costo y tiempo de su vuelo.")

distancia = float(input("Por favor inserte la distancia en kilómetros que desea recorrer.>"))

precio_km = 4.5
velocidad = 650

if distancia >= 500:
    precio_km = 3.5
    
if distancia > 900:
    velocidad = 850

precio_total = precio_km * distancia
horas = distancia // velocidad

minutos = (distancia / velocidad - horas) * 60

if horas == 1:
    print(f"El precio de su viaje es de ${precio_total}, el tiempo de vuelo es de aproximádamente {int(horas)} hora y {int(minutos)} minutos")
else:
    print(f"El precio de su viaje es de ${precio_total}, el tiempo de vuelo es de aproximádamente {int(horas)} horas y {int(minutos)} minutos")