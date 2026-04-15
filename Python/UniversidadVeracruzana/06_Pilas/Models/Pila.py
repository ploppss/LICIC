from Models.Nodo import Nodo

class Pila:
    """
    Estructura de datos llamada Pila en la que solo se puede acceder al top.
    """

    def __init__(self):
        self.__top = None
    
    def verificar_vacio(self):
        if self.top is None:
            print(f"Actualmente la pila esta vacía.")
            return True
        else:
            return False
    
    def push(self, dato):
        """
            Inserta un elemento a la pila, como su concepto lo determina solo inserta al inicio
        Args:
            dato (_type_): Dato o valor que se le asigna al nuevo nodo
        """
        if self.__top is None:
            nuevo_nodo = Nodo(dato)
            self.__top = nuevo_nodo
        else:
            nuevo_nodo = Nodo(dato)
            nuevo_nodo.ptr = self.__top
            self.__top = nuevo_nodo
    
    def pop(self):
        """
            Método para eliminar elementos de la cima (top) como lo determina el concepto de pila
        """
        if self.verificar_vacio():
            return
        
        self.__top = self.top.ptr
        
    def get_longitud(self):
        """
            Devuelve la longitud o tamaño de la lista
        """
        if self.verificar_vacio():
            return
        
        iterador = self.__top
        
        i = 0
        
        while iterador is not None:
            iterador = iterador.ptr
            i += 1
        
        return i
    
    def get_elemento(self):
        pass

    def imprimir_lista(self):
        
        if self.verificar_vacio():
            return
        
        iterador = self.__top
        i = 1
        
        while iterador is not None:
            print(f"Elemento número {i} de la lista")
            iterador = iterador.ptr
            i += 1
