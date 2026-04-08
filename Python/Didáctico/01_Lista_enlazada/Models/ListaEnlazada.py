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
                                  
    def imprimir_lista(self):
        
        i = 1
        iterador = self.__head
        
        while iterador is not None:
            print(f"Posición:[{i}]--VALOR:[{iterador.valor}]", end="===>")
            iterador = iterador.ptr
            i += 1

        print("None")    
        
    def imprimir_lista_direcciones(self):
        
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
        else:
            print(f"Actualmente la lista NO esta vacía.")
            
    def imprimir_longitud(self):
        i = 0
        iterador = self.__head
        while iterador is not None:
            iterador = iterador.ptr
            i += 1
        print(f"El tamaño de la lista es de {i} elementos")