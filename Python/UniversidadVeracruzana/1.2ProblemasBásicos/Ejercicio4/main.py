"""
Una empresa de bienes raíces necesita automatizar el control de los días 
de vacaciones que le corresponden a cada personal dependiendo de la antigüedad 
que tienen en la empresa, debe apegarse a las siguientes reglas: 
Por días de vacaciones por años de antigüedad: 
•  1 años = 12 días 
•  2 años = 14 días 
•  3 años = 16 días 
•  4 años = 18 días 
•  5 años = 20 días 
•  De 6 a 10 años: 22 días 
•  De 11 a 15 años: 24 días 
•  De 16 años en adelante: 30 días. 
Además de los días de vacaciones al personal se le dará un bono de 10,000 por cada 
10 años trabajados, es decir: 
•  10 años = 10,000 pesos 
•  20 años = 20,000 pesos 
•  30 años = 30,000 pesos 
Escribe un programa en Python que permita calcular y mostrar los días de vacaciones 
y  el  bono  por  antigüedad,  teniendo  como  dato  de  entrada  el  año  de  ingreso  a  la 
empresa. 

"""
print("Bienvenido al menú para calcular sus días de vacaciones.")

antiguedad = int(input("Inserte su antigüedad en años.>"))
bono = 0
def dias_vacaciones(anios):
    match anios:
        case 1:
            return 12
        case 2:
            return 14
        case 3:
            return 16
        case 4:
            return 18
        case 5:
            return 20
        case n if 6<=n<=10:
            return 22
        case n if 11<=n<=15:
            return 24
        case _:
            return 30
        
if antiguedad >= 30:
    bono = 30000
else:
    if antiguedad >= 20:
        bono = 20000
    else:
        if antiguedad >= 10:
            bono = 10000
            
if bono == 0:
    print(f"De acuerdo a su antigüedad, le corresponden {dias_vacaciones(antiguedad)} días de vacaciones")
else:
    print(f"De acuerdo a su antigüedad, le corresponden {dias_vacaciones(antiguedad)} días de vacaciones y posee un bono extra anual de ${bono}")