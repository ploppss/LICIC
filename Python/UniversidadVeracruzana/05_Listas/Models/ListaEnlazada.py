from Models.Nodo import Nodo

class ListaEnlazada:
    """
    Lista enlazada simple
    """

    def __init__(self):
        self.__head = None # Privatizacion del atributo head
    
    def insertar_inicio(self, valor):
        """
            Este método inserta siempre un nuevo nodo con el valor que se le pase al inicio de la lista
        Args:
            valor (_type_): Cualquier valor que se le desee asignar al nuevo nodo
        """
        nuevo_nodo = Nodo(valor)
        nuevo_nodo.ptr = self.__head
        self.__head = nuevo_nodo
        
    def insertar_final(self, valor):
        """
            Este método se encarga de recorrer la lista enlazada para llegar al final e insertar un nuevo elemento, evalua si la lista esta vacía y si esta vacía
            llama al método insertar_inicio.
        Args:
            valor (_type_): Cualquier valor que se le desee asignar al nuevo nodo
        """
        if self.__head is None:
            self.insertar_inicio(valor)
        else:
            nuevo_nodo = Nodo(valor)
            iterador = self.__head
            while iterador.ptr is not None:
                iterador = iterador.ptr
            iterador.ptr = nuevo_nodo
              
    def insertar_indexado(self, valor, pos):
        """
            Este método inserta un nuevo nodo en una posición deseada, primero se le pasa el valor que se inserta y luego la posicion donde se desea insertar
            si la posicion es 0 se llama al método insertar_inicio, si la posicion que se le pasa es mayor a uno el método procede a buscar la posición con un iterador (i)
            y un ciclo while
        Args:
            valor (_type_): El valor que se le da al nuevo nodo
            pos (_type_): La posición en la que se desea insertar
        """
        if pos <= 0:
            print(f"ERROR. Por favor inserte una posición mayor a 0")
            return
        pos -= 1 # Esta linea sirve para que el usuario pueda insertar la posicion de manera natural y no tengo que insertar 0
        if pos == 0:
            self.insertar_inicio(valor)
        else:
            i = 0
            iterador = self.__head
            while i < pos - 1 and iterador is not None:
                iterador = iterador.ptr
                i += 1 
            if i == pos-1 and iterador is not None: # Validadión de seguridad para verificar que iterador se quedo en el nodo anterior a la posición deseada
                nuevo_nodo = Nodo(valor)
                nuevo_nodo.ptr = iterador.ptr
                iterador.ptr = nuevo_nodo
            else:
                print(f"ERROR. Posición fuera de alcance, el tamaño de la lista es de {i} elementos")
                      
    def eliminar_indexado(self, pos):
        """
            Este método solo necesita recibir una posicion para eliminar el nodo de esa posición, si recibe la primera posición entra a un bloque if donde guarda la 
            dirección donde apunta la cabeza en una referencia temporal, luego a la cabeza se le asigna la referencia que guarda el nodo al que apuntaba la cabeza.
            Para finalizar se borra la referencia que apuntaba al antiguo primer nodo y Python lo borra de la memoria RAM.

        Args:
            pos (_type_): La posicion del nodo que se desea eliminar
        """
        if pos <= 0:
            print(f"ERROR. Por favor inserte una posición mayor a 0")
            return
        pos -= 1 # Línea para que el usuario pueda insertar la posición natural
        if pos == 0: # Si se desea borrar al primer elemento simplemente se reasigna el valor de la cabeza
            temp = self.__head
            self.__head = self.__head.ptr
            del temp
        else:
            i = 0
            iterador = self.__head
            while i < pos - 1 and iterador is not None:
                iterador = iterador.ptr
                i += 1
            if iterador is None or iterador.ptr is None:
                print(f"ERROR. Posición fuera de alcance, el tamaño de la lista es de {i} elementos")
            else:
                temp = iterador.ptr
                iterador.ptr = temp.ptr
                del temp
                print(f"Elemento en la posición {pos+1} eliminado correctamente")
                return
      
    def eliminar_nodo_valor(self, valor):
        if self.verificar_vacio():
            return
        iterador = self.__head
        if iterador.valor == valor:
            temp = iterador
            self.__head = iterador.ptr
            del temp
            return
        while iterador is not None:
            if iterador.ptr is None:
                print(f"ERROR. No se encontró el valor dentro de la lista.")
                return
            nodo_evaluado = iterador.ptr
            if nodo_evaluado.valor == valor:
                temp = nodo_evaluado
                iterador.ptr = nodo_evaluado.ptr
                del temp
                print(f"Elemento con valor {valor} eliminado correctamente")
                return
            else: 
                iterador = iterador.ptr
                            
    def imprimir_lista(self):
        """
            Imprime la lista ya indexada y con los valores de cada nodo.
        """
        if self.verificar_vacio():
            return
        
        i = 1
        iterador = self.__head
        
        while iterador is not None:
            print(f"Posición:[{i}]--VALOR:[{iterador.valor}]", end="===>")
            iterador = iterador.ptr
            i += 1
        print("None")
    
    def get_nodo_valor(self, valor):
        """
            Busca y obtiene la posición del nodo que contiene el valor buscado.
            Además imprime la posición y valor del nodo del que se obtuvo el valor.
        Args:
            valor (_type_): Valor a obtener de la lista
        """
        if self.verificar_vacio():
            return
        else:
            iterador = self.__head
            i = 0
            while iterador is not None:
                if iterador.valor == valor:
                    print(f"Elemento encontrado en la posición {i+1}, valor: {iterador.valor}")
                    break
                else:
                    iterador = iterador.ptr
                    i += 1 
            if iterador is None:
                print(f"ERROR. Elemento no encontrado, por favor corrobore el valor que desea buscar.")
                print(f"Los elementos dentro de la lista son:")
                self.imprimir_lista()
            
    def get_nodo_indice(self, posicion):
        if self.verificar_vacio():
            return
        else:
            if posicion <= 0:
                print(f"ERROR. Por favor inserta una posición válida mayor a 0.")
                return
            iterador = self.__head
            i = 1
            while iterador is not None:
                if i == posicion:
                    print(f"El elemento en la posicion {i} tiene como valor {iterador.valor}")
                    break
                else:
                    iterador = iterador.ptr
                    i += 1
            if iterador is None:
                print(f"ERROR. Por favor inserte un valor menor a {i}")
        
    def imprimir_lista_direcciones(self):
        if self.verificar_vacio():
            return
        
        i = 1
        iterador = self.__head
        
        while iterador is not None:
            
            if iterador.ptr is not None:
                dir = hex(id(iterador))
                dir2 = hex(id(iterador.ptr))
            else:
                dir = hex(id(iterador))
                dir2 = "None"
                
            print(f"Posición:[{i}]--Dirección actual:[{dir}]--VALOR:[{iterador.valor}]--Dirección siguiente:[{dir2}]")
            iterador = iterador.ptr
            i += 1

        print("None")
        
    def verificar_vacio(self):
        if self.__head is None:
            print(f"La lista actualmente esta vacía.")
            return True
        else:
            return False
           
    def imprimir_longitud(self):
        if self.verificar_vacio():
            return
        
        i = 0
        iterador = self.__head
        while iterador is not None:
            iterador = iterador.ptr
            i += 1
        print(f"El tamaño de la lista es de {i} elementos")
    
    def get_longitud(self):
        if self.verificar_vacio():
            return
    
        i = 0
        iterador = self.__head
    
        while iterador is not None:
            iterador = iterador.ptr
            i += 1
        return i
        
    def vaciar_lista(self):
        if self.verificar_vacio():
            return
        
        self.__head = None
        print(f"La lista se vació correctamente")

    ###############################     
    ### MÉTODOS COMPLEMENTARIOS ###
    ###############################
    
    def eliminar_final(self):
        """
            Elimina siempre el último nodo de la lista.
        """
        if self.verificar_vacio():
            return
        
        iterador = self.__head
        iterador2 = self.__head.ptr
        
        while iterador2.ptr is not None:
            iterador = iterador.ptr
            iterador2 = iterador2.ptr
        
        if iterador2.ptr is None:
            iterador.ptr = None
            print(f"El último elemento de la lista fue eliminado correctamente.")
            
    def reemplazar_nodo(self, valor, pos):
        """
            Reemplaza el nodo COMPLETO de la lista 
        Args:
            valor (_type_): Valor que se le asigna al nuevo nodo.
            pos (_type_): Posicion del nodo que se va a reemplazar.
        """
        if self.verificar_vacio():
            return
        
        pos -= 1 # Línea para que el usuario pueda insertar la posición natural del nodo a reemplazar
        
        iterador = self.__head
        iterador2 = self.__head.ptr
        i = 0
        
        if pos == 0:
            nuevo_nodo = Nodo(valor)
            nuevo_nodo.ptr = iterador2
            self.__head = nuevo_nodo
        

        while iterador2.ptr is not None and i < pos - 1:
            iterador = iterador.ptr
            iterador2 = iterador2.ptr
            i += 1

        nuevo_nodo = Nodo(valor)
        nuevo_nodo.ptr = iterador2.ptr
        iterador.ptr = nuevo_nodo
        
        print(f"Nodo reemplazado correctamente.")
    
    def get_sublista(self, inicio, fin):
        """
            El método devuelve una lista de Python con los elementos dentro del rango de inicio y fin que se pasaron como parametros
        Args:
            inicio (_type_): Inicio INCLUSIVO de la nueva sublista 
            fin (_type_): Fin INCLUSIvO de la nueva sublista
        """
        if self.verificar_vacio():
            return
        if inicio < 1 or fin > self.get_longitud():
            print(f"El inicio es menor a 1 o el fin esta fuera de la longitud de la lista inserte valores entre 1 y {self.get_longitud()}")
            return
        
        sublista = []
        
        inicio -= 1
        fin -= 1
        
        iterador = self.__head
        i = 0
        
        while iterador is not None:
            if i == inicio:
                iterador2 = iterador
                while iterador2 is not None and i <= fin:
                    sublista.append(iterador2.valor)
                    iterador2 = iterador2.ptr
                    i += 1
            iterador = iterador.ptr
            i += 1
            
        return sublista
    
    def ordenar_ascendente(self):
        if self.verificar_vacio():
            return
        if self.__head.ptr == None:
            print(f"La lista consta de un solo elemento, por lo que ya esta ordenada.")
        hay_intercambio = True
        
        while hay_intercambio:
            iterador = self.__head
            iterador2 = self.__head.ptr
            hay_intercambio = False
        
            while iterador2 is not None:
                if iterador.valor > iterador2.valor:
                    iterador.valor, iterador2.valor = iterador2.valor, iterador.valor
                    hay_intercambio = True
                iterador = iterador.ptr
                iterador2 = iterador2.ptr
        print(f"Lista ordenada correctamente de manera ascendente.")
            
    
    def ordenar_descendente(self):
        if self.verificar_vacio():
            return
        if self.__head.ptr == None:
            print(f"La lista consta de un solo elemento, por lo que ya esta ordenada.")
        hay_intercambio = True
        
        while hay_intercambio:
            iterador = self.__head
            iterador2 = self.__head.ptr
            hay_intercambio = False
        
            while iterador2 is not None:
                if iterador.valor < iterador2.valor:
                    iterador.valor, iterador2.valor = iterador2.valor, iterador.valor
                    hay_intercambio = True
                iterador = iterador.ptr
                iterador2 = iterador2.ptr
        print(f"Lista ordenada correctamente de manera descendente.")
    