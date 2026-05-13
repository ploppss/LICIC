from .Node import Node

class BinaryTree:
    
    def __init__(self):
        self.__root = None
        
    def comparer_inserter(self, nodo_actual, dato):
        if dato == nodo_actual.data:
            print(f"ERROR. Valor ya existente dentro del arbol binario")
            print(f"Por favor inserte un dato nuevo")
            return
        elif dato < nodo_actual.data:
            if nodo_actual.Lptr is None:
                nuevo_nodo = Node(dato)
                nodo_actual.Lptr = nuevo_nodo
                return
            else:
                self.comparer_inserter(nodo_actual.Lptr, dato)
        elif dato > nodo_actual.data:
            if nodo_actual.Rptr is None:
                nuevo_nodo = Node(dato)
                nodo_actual.Rptr = nuevo_nodo
                return
            else:
                self.comparer_inserter(nodo_actual.Rptr, dato)
            
    def insert(self, dato):
        if self.__root is None:
            nuevo_nodo = Node(dato)
            self.__root = nuevo_nodo
        else: 
            self.comparer_inserter(self.__root, dato)
    
    # Método Recursivo avanzado
    def __inserter(self, nodo_actual, dato):
        if nodo_actual is None:
            return Node(dato)
        
        if dato < nodo_actual.data:
            nodo_actual.Lptr = self.__inserter(nodo_actual.Lptr, dato)
        elif dato > nodo_actual.data:
            nodo_actual.Rptr = self.__inserter(nodo_actual.Rptr, dato)

        return nodo_actual 
    
    def find_menor(self, nodo_actual):
        
        if nodo_actual is None:
            return None
        
        if nodo_actual.Lptr is None:
            return nodo_actual.data
        
        else:
            return self.find_menor(nodo_actual.Lptr)
            
    def print_order(self):
      print(self.find_menor(self.__root))