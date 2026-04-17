from Models.Pila import Pila

stack = Pila()

stack.push(40)
stack.push(30)
stack.push(20)
stack.push(10)

print(f"Primer elemento de la lista {stack.peek()}")

stack.imprimir_lista()

print(f"Eliminando cima de la lista: {stack.pop()}")

print(f"La lista está vacía?, {stack.verificar_vacio()}")

print(f"Tamaño de la pila {stack.size}")

stack.push(10)

stack2 = Pila()

stack2.push("D")
stack2.push("C")
stack2.push("B")
stack2.push("A")

stack2.imprimir_lista()

print()

nuevo_stack = stack.concat(stack2)

nuevo_stack.imprimir_lista()

stack = Pila()

stack.push(11)
stack.push(15)
stack.push(20)
stack.push(10)
stack.push(5)

print(f"El elemento mayor de la nueva pila es: {stack.encontrar_mayor()}")

stack.imprimir_lista()

print(f"Inviertendo la pila . . .")
stack.invertir()

stack.imprimir_lista()