
from LinkedList import LinkedList
from Node import Node

class HashMap:
    
    def __init__(self, capacidad):
        self.capacity = capacidad
        self.array = [None] * capacidad
        self.size = 0
    
    def get_key(self, llave):
        nuevo_hash = hash(llave)
        key = nuevo_hash % self.capacity
        return key

    def put(self, llave, valor):
        
        if self.array[llave] is None:
            pass