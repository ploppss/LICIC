from Models.Nodo import Nodo

class Cola:
    """
    Estructura de datos llamada Pila en la que solo se puede acceder al top.
    """

    def __init__(self):
        self.__front = None
        self.__end = None
        self.__size = 0
    
    def verificar_vacio(self):
        """
            Verifica si la cola está vacía o no.
        Returns:
            _bool_: Retorna un booleano para utilizarse dentro de condicionales.
        """
        if self.__front is None:
            print(f"Actualmente la cola esta vacía.")
            return True
        else:
            return False
    
    def enqueue(self, dato):
        """
            Inserta un elemento a la cola como su concepto lo indica siempre al final
        Args:
            dato: Dato o valor que se le asigna al nuevo nodo.
        """
        if self.__front is None:
            nuevo_nodo = Nodo(dato)
            self.__front = nuevo_nodo
            self.__size += 1
        else:
            iterador = self.__front
            while iterador.ptr is not None:
                iterador = iterador.ptr
            nuevo_nodo = Nodo(dato)
            iterador.ptr = nuevo_nodo
            self.__end = nuevo_nodo
            self.__size += 1
    
    def peek_front(self):
        """
            Devuelve el valor del frente de la cola, es decir, el primer elemento que se inserto
        Returns:
            dato: Devuelve el dato que contiene el primer elemento que se insertó en la cola.
        """
        if self.verificar_vacio():
            return
        else:
            return self.__front.dato
        
    def peek_end(self):
        """
            Devuelve el valor del final de la cola, es decir, el último elemento que se insertó
        Returns:
            dato: Devuelve el dato que contiene el último elemento que se insertó dentro de la lista.
        """
        if self.verificar_vacio():
            return
        else:
            return self.__front.dato

    def dequeue(self):
        """
            Método para eliminar el elemento del frente de la lista, es decir, el primer elemento que se inserto
        Returns: 
            dato: Devuelve el dato que estaba en la cima o tope antes de eliminarlo.
        """
        if self.verificar_vacio():
            return
        
        dato = self.__front.dato
        
        self.__front = self.__front.ptr
        self.__size -= 1
        
        return dato
        
    def get_elemento(self):
        pass

    def imprimir_lista(self):
        
        if self.verificar_vacio():
            return
        
        iterador = self.__front
        i = 1
        
        while iterador is not None:
            print(f"Elemento número {i} de la pila, {iterador.dato}")
            iterador = iterador.ptr
            i += 1
            
    def clear(self):
        
        if self.verificar_vacio():
            return
        else:
            self.__front = None
            self.__end = None
            
    @property
    def size(self):
        """
            Método getter que obtiene el tamaño de la lista
        Returns:
            int: Tamaño de la pila o cantidad de elementos que almacena
        """
        return self.__size
