from Models.ListaEnlazada import ListaEnlazada

lista = ListaEnlazada()
# Se verifica si la lista esta vacia
lista.verificar_vacio()

# Llena la lista con valores iniciales
lista.insertar_final(10)
lista.insertar_final(20)
lista.insertar_final(30)
lista.insertar_final(40)
lista.insertar_inicio(80)

# Se verifica si la lista esta vacia
lista.verificar_vacio()

# Imprime la longitud
lista.imprimir_longitud()

# Imprime la lista
lista.imprimir_lista()

# Opción para imprimir las direcciones de los nodos
# lista.imprimir_lista_direcciones()

# Bsuca nodos por valor y por indexación
lista.get_nodo_indice(1)

lista.get_nodo_valor(30)

# Elimina nodos individuales
lista.eliminar_indexado(2)

lista.eliminar_nodo_valor(40)

# Imprime la lista
lista.imprimir_lista()

# Vacía la lista
lista.vaciar_lista()

# Verifica el vacío pero no imprime nada por que la lista se vació correctamente
lista.imprimir_lista()


###############################     
### MÉTODOS COMPLEMENTARIOS ###
###############################

# Llena la lista
lista.insertar_final(10)
lista.insertar_final(20)
lista.insertar_final(30)
lista.insertar_final(40)
lista.insertar_inicio(50)

# Imprime la lista
lista.imprimir_lista()

# Elimina al final
lista.eliminar_final()

# Imprime la lista
lista.imprimir_lista()

# Reemplaza el nodo completo
lista.reemplazar_nodo(100, 2)

# Imprime la lista
lista.imprimir_lista()

# Inserta nuevos elementos al final
lista.insertar_final(40)

# Imprime la lista
lista.imprimir_lista()

# Obtiene una nueva sublista a partir de la lista actual
print(f"Sublista de los elementos del 2 al 4 {lista.get_sublista(2, 4)}")

# Ordena la lista de manera ascendente
lista.ordenar_ascendente()

# Imprime la lista
lista.imprimir_lista()

# Ordena la lista de manera descendente
lista.ordenar_descendente()

# Imprime la lista
lista.imprimir_lista()