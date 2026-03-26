from Models.Nodo import Nodo

class ListaEnlazada:
    """
    Lista enlazada simple
    """

    def __init__(self):
        self.head = None
    
    def insertar_final(self, valor):
        
        if self.head is None:
            self.head = nuevo_nodo
        else:
            nuevo_nodo = Nodo(valor)
            iterador = self.head
            while iterador.ptr is not None:
                iterador = iterador.ptr
            iterador.ptr = nuevo_nodo
  
    def insertar_inicio(self, valor):
        
        if self.head is None:
            self.insertar_final(valor)
        else:
            nuevo_nodo = Nodo(valor)
            nuevo_nodo.ptr = self.head
            self.head = nuevo_nodo
            
    def insertar_indexado(self, valor, pos):
        if pos == 0:
            self.insertar_inicio(valor)
        else:
            i = 0
            iterador = self.head
            while i < pos - 1 and iterador is not None:
                iterador = iterador.ptr
                i += 1 
            if i == pos-1: 
                nuevo_nodo = Nodo(valor)
                nuevo_nodo.ptr = iterador.ptr
                iterador.ptr = nuevo_nodo
            else:
                print(f"Posición fuera de alcance, el tamaño de la lista es de {i} elementos")
            

    def imprimir_lista(self):
        
        i = 0
        iterador = self.head
        
        while iterador is not None:
            print(f"({i}){iterador.valor}", end="->")
            iterador = iterador.ptr
            i += 1

        print("None")
        
