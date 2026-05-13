
from LinkedList import LinkedList
from NodeHash import NodeHash

class HashMap:
    
    def __init__(self, capacidad):
        self.capacity = capacidad
        self.array = [None] * capacidad
        self.size = 0
    
    def get_key(self, llave):
        
        nuevo_hash = hash(llave)
        n_hash = nuevo_hash % self.capacity
        return n_hash

    def put(self, llave, valor):
        n_hash = self.get_key(llave)
        
        if self.array[n_hash] is None:
            self.array[n_hash] = LinkedList()
            self.array[n_hash].insert_first(llave, valor)
        else:
            
            fue_actualizado = self.array[n_hash].update_if_exists(llave, valor)
            
            if not fue_actualizado:
                self.array[n_hash].insert_end(llave, valor)
            
    def get(self, llave):
        n_hash = self.get_key(llave)
        if self.array[n_hash] is None:
            return None
        else:
            return self.array[n_hash].get_value_key(llave)
        
    def del_key(self, llave):
        n_hash = self.get_key(llave)
        if self.array[n_hash] is None:
            return None
        else:
            dato = self.array[n_hash].del_value_key(llave)
            if dato is not None:
                if self.array[n_hash].is_empty():
                    self.array[n_hash] = None
            return dato