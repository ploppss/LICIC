from Models.Cola import Cola

queue = Cola()

queue.enqueue(50)
queue.enqueue(40)
queue.enqueue(30)
queue.enqueue(20)
queue.enqueue(10)

queue.imprimir_lista()

print(f"El primervalor que se insertó a la cola es {queue.dequeue()}")

print(f"El nuevo primer valor de la cola es {queue.peek_end()}")

print(f"El último elemento que se insertó en la cola es {queue.peek_front()}")

print(f"El último elemento de la cola que se insertó es {queue.del_end()}")

queue.imprimir_lista()

print(queue.find_value(20))

print(queue.find_value(200))

queue.enqueue(60)
queue.enqueue(70)
queue.enqueue(90)
queue.enqueue(200)
queue.enqueue(150)

queue.imprimir_lista()

print(queue.find_major())

queue.clear()
queue2 = Cola()

queue.enqueue(10)
queue.enqueue(30)
queue.enqueue(50)

queue2.enqueue(20)
queue2.enqueue(40)
queue2.enqueue(60)

queue = queue.intercalar(queue2)

queue.imprimir_lista()

queue.invertir()
print("")

queue.imprimir_lista()
print()
queue.enqueue(10)
queue.enqueue(30)
queue.enqueue(50)

queue.imprimir_lista()
print()
queue.eliminar_duplicados()
queue.imprimir_lista()