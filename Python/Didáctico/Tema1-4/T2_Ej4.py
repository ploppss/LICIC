num = input("Inserte un numero para imprimir su tabla de multiplicar.>")
num = int(num)

i = 1

for i in range(10):
    print(f"{num} * {i} = {num*i}")
    i += 1
