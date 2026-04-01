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
        if pos <= 0:
            print(f"ERROR. Por favor inserte una posición mayor a 0")
            return
        pos -= 1 # Esta linea sirve para que el usuario pueda insertar la posicion de manera natural y no tengo que insertar 0
        if pos == 0:
            self.insertar_inicio(valor)
        else:
            i = 0
            iterador = self.head
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
        if pos <= 0:
            print(f"ERROR. Por favor inserte una posición mayor a 0")
            return
        pos -= 1 # Línea para que el usuario pueda insertar la posición natural
        if pos == 0: # Si se desea borrar al primer elemento simplemente se reasigna el valor de la cabeza
            temp = self.head
            self.head = self.head.ptr
            del temp
        else:
            i = 0
            iterador = self.head
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
        
        i = 0
        iterador = self.head
        
        while iterador is not None:
            print(f"({i}){iterador.valor}", end="->")
            iterador = iterador.ptr
            i += 1

        print("None")
        
