from Models.Pila import Pila

stack = Pila()

stack.push(40)
stack.push(30)
stack.push(20)
stack.push(10)

print(f"Primer elemento de la lista {stack.peek()}")

stack.imprimir_lista()

print(f"cima de la lista: {stack.pop()}")

print(f"La lista está vacía?, {stack.verificar_vacio()}")

print(f"Tamaño de la pila {stack.size}")