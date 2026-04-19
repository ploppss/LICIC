from Models.Nodo import Nodo

class Pila:
    """
    Estructura de datos llamada Pila en la que solo se puede acceder al top.
    """

    def __init__(self):
        self.__top = None
        self.__size = 0
    
    def verificar_vacio(self):
        """
            Verifica si la pila está vacía o no.
        Returns:
            _bool_: Retorna un booleano para utilizarse dentro de condicionales.
        """
        if self.__top is None:
            return True
        else:
            return False
    
    def push(self, dato):
        """
            Inserta un elemento a la pila, como su concepto lo determina solo inserta al inicio.
        Args:
            dato: Dato o valor que se le asigna al nuevo nodo.
        """
        if self.__top is None:
            nuevo_nodo = Nodo(dato)
            self.__top = nuevo_nodo
            self.__size += 1
        else:
            nuevo_nodo = Nodo(dato)
            nuevo_nodo.ptr = self.__top
            self.__top = nuevo_nodo
            self.__size += 1
    
    def peek(self):
        """
            Devuelve el valor cima o tope de la lista.
        Returns:
            dato: Devuelve el dato que contiene el elemento tope o cima de la lista.
        """
        if self.verificar_vacio():
            #print(f"Actualmente la pila esta vacía.")
            return
        else:
            return self.__top.dato

    def pop(self):
        """
            Método para eliminar elementos de la cima (top) como lo determina el concepto de pila.
        Returns: 
            dato: Devuelve el dato que estaba en la cima o tope antes de eliminarlo.
        """
        if self.verificar_vacio():
            #print(f"Actualmente la pila esta vacía.")
            return
        
        dato = self.__top.dato
        
        self.__top = self.__top.ptr
        self.__size -= 1
        
        return dato
        
    def get_elemento(self):
        pass

    def imprimir_lista(self):
        
        if self.verificar_vacio():
            print(f"Actualmente la pila esta vacía.")
            return
        
        iterador = self.__top
        i = 1
        
        while iterador is not None:
            print(f"Elemento número {i} de la pila, {iterador.dato}")
            iterador = iterador.ptr
            i += 1
            
    def clear(self):
        
        if self.verificar_vacio():
            print(f"Actualmente la pila esta vacía.")
            return
        else:
            self.__top = None
            
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
    
    def concat(self, Pila2):

        pila_temp = Pila()
        
        while not Pila2.verificar_vacio():
            pila_temp.push(Pila2.pop())
        
        while not pila_temp.verificar_vacio():
            self.push(pila_temp.pop())
            
        return self
    
    def encontrar_mayor(self):
        
        if self.verificar_vacio():
            print(f"Actualmente la pila esta vacía.")
        
        pila_temp = Pila()
        mayor = 0
        
        while not self.verificar_vacio():
            dato = self.pop()
            
            if dato > mayor:
                mayor = dato
                
            pila_temp.push(dato)
        
        while not pila_temp.verificar_vacio():
            self.push(pila_temp.pop())
        
        return mayor

    def invertir(self):
        
        pila_temp1 = Pila()
        pila_temp2 = Pila()
        
        while not self.verificar_vacio():
            pila_temp1.push(self.pop())
            
        while not pila_temp1.verificar_vacio():
            pila_temp2.push(pila_temp1.pop())
            
        while not pila_temp2.verificar_vacio():
            self.push(pila_temp2.pop())

