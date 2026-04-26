from Models.Pila import Pila
"""
    Escribe un programa en Python que lea una expresión  y evalué si tiene equilibrio de 
    símbolos. Los símbolos que los símbolos que deberá considerar son llaves, paréntesis y 
    corchetes. Ejemplo (2+[3-12]*{8/3}) 
"""

stack = Pila()
stack2 = Pila()

cadena = input("Por favor inserte una expresion matemática ejemplo: [{(51*29)/(81-44)}+24].>")
lista = []

for caracter in cadena:
    lista.append(caracter)
    
for caracter in lista:
    if caracter == '[' or  caracter == '{' or caracter == '(':
        stack.push(caracter)
    if caracter == ']' or caracter == '}' or caracter == ')':
        stack2.push(caracter)

stack2.invertir()

try:
    
    while not stack.verificar_vacio():
        if (stack.peek() + stack2.peek()) == "()":
            stack.pop()
            stack2.pop()
        if (stack.peek() + stack2.peek()) == "{}":
            stack.pop()
            stack2.pop()
        if (stack.peek() + stack2.peek()) == "[]":
            stack.pop()
            stack2.pop()
        
except TypeError:
    print("ERROR. Los símbolos no estan equilibrados1")
else:
    if stack.verificar_vacio() and stack2.verificar_vacio():
        print("La expresión está correctamente equilibrada")
    else:
        print("ERROR. Los símbolos no están equilibrados2")

