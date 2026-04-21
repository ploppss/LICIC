from Models.Pila import Pila
"""
Escribe un programa en Python que lea una expresión en notación infija y la traduzca a 
notación posfija. Ejemplo expresión infija: 5+6*7 a expresión postfija 567*+  
"""

expresion = input(f"Inserte su expresión infija (5+6*7).>")

stack = Pila()
lista = []

num1 = 0
num2 = 0

for caracter in expresion:
    if caracter.isnumeric():
        lista.append(caracter)
    if caracter in ['+', '-', '*', 'x', '/']:
        while not stack.verificar_vacio():
            if caracter in ['*', 'x', '/']:
                if stack.peek() in ['*', 'x', '/']:
                    lista.append(stack.pop())
                else:
                    break 
            else:
                lista.append(stack.pop())       
        stack.push(caracter)
    
while not stack.verificar_vacio():
    lista.append(stack.pop())
        
resultado = "".join(lista)

print(resultado)