print("A continuacion se le pide insertar numeros para sumarlos")
print("Si quiere salir del menu por favor inserte un numero negativo")
suma = 0
num = 0
while num >= 0:
    num = input("Por favor inserte un numero para sumarlo.>")
    num = int(num)
    if num >= 0:
        suma+= num
    else:
        print (f"La suma total de los numeros es:{suma}")