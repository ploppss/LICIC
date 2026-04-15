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
            print(f"Actualmente la pila esta vacía.")
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
            return
        
        dato = self.__top.dato
        
        self.__top = self.__top.ptr
        self.__size -= 1
        
        return dato
        
    def get_elemento(self):
        pass

    def imprimir_lista(self):
        
        if self.verificar_vacio():
            return
        
        iterador = self.__top
        i = 1
        
        while iterador is not None:
            print(f"Elemento número {i} de la pila, {iterador.dato}")
            iterador = iterador.ptr
            i += 1
            
    def clear(self):
        
        if self.verificar_vacio():
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
