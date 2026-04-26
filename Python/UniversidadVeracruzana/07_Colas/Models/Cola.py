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
            return self.__end.dato

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

    def imprimir_lista(self):
        
        if self.verificar_vacio():
            print(f"La cola actualmente está vacía")
            return
        
        iterador = self.__front
        i = 1
        
        while iterador is not None:
            print(f"Elemento número {i} de la cola, {iterador.dato}")
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

    ###############################
    ### MÉTODOS COMPLEMENTARIOS ###
    ###############################
    
    def peek_end2(self):
        """
            Devuelve el valor del final de la cola, es decir, el último elemento que se insertó
        Returns:
            dato: Devuelve el dato que contiene el último elemento que se insertó dentro de la lista.
        """
        if self.verificar_vacio():
            return
        else:
            return self.__end.dato
        
    def del_end(self):
        
        if self.verificar_vacio():
            return
        ant = self.__front
        act = self.__front.ptr
        
        while act is not None:
            if act.ptr is None:
                dato = act.dato
                ant.ptr = None
                return dato
            ant = ant.ptr
            act = act.ptr
            
    def find_value(self, valor):
        
        if self.verificar_vacio():
            return
        
        iterador = self.__front
        while iterador is not None:
            if iterador.dato == valor:
                return True
            iterador = iterador.ptr
        return False
    
    def find_major(self):
        
        if self.verificar_vacio():
            return
        
        iterador = self.__front
        mayor = 0
        
        while iterador is not None:
            if mayor < iterador.dato:
                mayor = iterador.dato
            iterador = iterador.ptr
        
        return mayor
    
    def intercalar(self, cola2):
        queue = Cola()
        
        while not self.verificar_vacio() or not cola2.verificar_vacio():
            queue.enqueue(self.dequeue())
            queue.enqueue(cola2.dequeue())
            
        return queue
    
    def invertir(self):
        
        if self.verificar_vacio():
            return
        
        lista = []
        
        while not self.verificar_vacio():
            lista.append(self.dequeue())
        
        while len(lista) > 0:
            self.enqueue(lista.pop())
            
    def eliminar_duplicados(self):
        if self.verificar_vacio():
            return

        iterador = self.__front
        while iterador is not None:
            evaluado = iterador.dato  
            ant = iterador
            act = iterador.ptr

            while act is not None:
                if act.dato == evaluado:
                    ant.ptr = act.ptr
                    act = ant.ptr 
                else:
                    ant = act
                    act = act.ptr
            
            iterador = iterador.ptr