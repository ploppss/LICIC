from Models.ListaEnlazada import ListaEnlazada

lista = ListaEnlazada()

lista.verificar_vacio()
lista.insertar_final(10)
lista.insertar_final(20)
lista.insertar_final(30)
lista.insertar_final(40)
lista.insertar_inicio(80)
lista.verificar_vacio()

lista.imprimir_longitud()

lista.imprimir_lista()

lista.imprimir_lista_direcciones()

lista.buscar_nodo_valor(80)
lista.buscar_nodo_valor(40)