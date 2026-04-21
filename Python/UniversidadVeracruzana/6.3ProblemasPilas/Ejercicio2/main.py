from Models.Pila import Pila
"""
     Escribe  un  programa  en  Python  que  lea  una  expresión  y  evalué  si  es  una  expresión 
    posfija. Ejemplo 59 + 2 x 65 x +
"""

cadena = input("Por favor inserte una expresion matemática postfija ejemplo: 59 + 2 x 65 x +.>")
lista = []
stack = Pila()
cadena = cadena.replace(" ", "")
resultado = 0

print(cadena)
for caracter in cadena:
    lista.append(caracter)

print(lista)

for caracter in lista:
    if caracter.isnumeric():
        stack.push(int(caracter)) 
    
    elif caracter in ['+', '-', '*', 'x', '/']:
        dato2 = stack.pop()
        dato1 = stack.pop()
        
        if caracter == '+':
            resultado = dato1 + dato2
        elif caracter == '-':
            resultado = dato1 - dato2
        elif caracter == '*' or caracter == 'x':
            resultado = dato1 * dato2
        elif caracter == '/':
            resultado = dato1 / dato2
            
        stack.push(resultado) 
    
print(stack.peek())