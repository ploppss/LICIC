from Models.Nodo import Nodo

class ArbolBinario:
    
    def __init__(self):
        self.__root = None
        self.__size = 0
        
    def insertar(self, dato):
        self.__root = self.__insertardor(self.__root, dato)
    
    def __insertardor(self, nodo_actual, dato):
        if nodo_actual is None:
            nuevo_nodo = Nodo(dato)
            print(f"Dato {dato} insertado ")
            return nuevo_nodo
        else:
            if dato < nodo_actual.dato:
                print(f"Dato {dato} a la izquierda de {nodo_actual.dato}")
                nodo_actual.Lptr = self.__insertardor(nodo_actual.Lptr, dato)
            elif dato > nodo_actual.dato:
                print(f"Dato {dato} a la derecha de {nodo_actual.dato}")
                nodo_actual.Rptr = self.__insertardor(nodo_actual.Rptr, dato)
            else:
                print(f"ERROR. Valor {dato} ya existente dentro del árbol.")
        return nodo_actual
    
    def buscar(self, dato):
        return self.__buscador(self.__root, dato)
    
    def __buscador(self, nodo_actual, dato):
        try:
            if nodo_actual is None:
                return False
            if nodo_actual.dato == dato:
                if nodo_actual == self.__root:
                    print(f"El dato está en el nodo raíz.")
                return True
            else:
                if dato < nodo_actual.dato:
                    print(f"Buscando {dato} a la izquierda de {nodo_actual.dato}")
                    return self.__buscador(nodo_actual.Lptr, dato)
                elif dato > nodo_actual.dato:
                    print(f"Buscando {dato} a la derecha de {nodo_actual.dato}")
                    return self.__buscador(nodo_actual.Rptr, dato)
        except AttributeError:
            return False
        
    def eliminar(self, valor):
        self.__root = self.__eliminar(self.__root, valor)
        
    def __buscar_sucesor(self, nodo):
        """ Función  auxiliar que sirve para ir al extremo izquierdo de un subárbol, recibe una
        referencia a un nodo el cual toma el rol de "raíz".

        Args:
            nodo (Referencia): Es la direccion del nodo que toma el rol de raíz a la hora de buscar
            el extremo izquierdo.
        Returns:
            Referencia: Devuelve la referencia al nodo que esta al extremo izquierdo del nodo "raíz".
        """
        actual = nodo
        while actual.Lptr is not None: # Mientras el Hijo Izquierdo no sea nulo
            actual = actual.Lptr       # Asignar a actual el valor de actual.Lptr
        return actual                  # Retorna Actual
    
    def __eliminar(self, nodo_actual, valor):
        """Método privado invocado por el metodo eliminar, busca un nodo y lo elimina reconectando sus nodos hijos.

        Args:
            nodo_actual (_type_): Siempre será la raíz del árbol
            valor (_type_): El valor que se desea eliminar del árbol

        Returns:
            Nodo: Retorna Nodos para reconectar el árbol de manera recursiva
        """
        # Caso Base: El árbol está vacío o el elemento no existe
        if nodo_actual is None:
            return nodo_actual
        
        # 1. Buscar el nodo a eliminar, igual que en el buscador
        if valor < nodo_actual.dato: # Si es menor
            nodo_actual.Lptr = self.__eliminar(nodo_actual.Lptr, valor) # Vamos a la izquierda
        elif valor > nodo_actual.dato: # Si es mayor
            nodo_actual.Rptr = self.__eliminar(nodo_actual.Rptr, valor) # Vamos a la derecha
            
        # nodo_actual.dato == valor EL NODO FUE ENCONTRADO
        else:
            # CASO 1 y CASO 2: Nodo con un solo hijo o sin hijos (Hoja)
            if nodo_actual.Lptr is None: # Si no hay izquierdo usamos el derecho
                temp = nodo_actual.Rptr  # Guardamos la direccion del Hijo Derecho
                nodo_actual = None       # Se elimina el nodo que contiene el dato a eliminar
                self.__size -= 1         
                return temp              # Retorna la dirección del Hijo Derecho y reconecta el árbol
            
            elif nodo_actual.Rptr is None: # Si no hay derecho usamos el izquierdo
                temp = nodo_actual.Lptr    # Guardamos la direccion del Hijo Izquierdo
                nodo_actual = None         # Se elimina el nodo que contiene el dato a eliminar
                self.__size -= 1
                return temp                # Retorna la dirección del Hijo Izquierdo y reconecta el árbol
            
            # CASO 3: Nodo con dos hijos
            # Buscamos el Sucesor InOrden (el menor del subárbol derecho)
            sucesor = self.__buscar_sucesor(nodo_actual.Rptr)
            
            # Copiamos el dato del sucesor al nodo actual
            nodo_actual.dato = sucesor.dato
            
            # Eliminamos el sucesor duplicado en el subárbol derecho
            nodo_actual.Rptr = self.__eliminar(nodo_actual.Rptr, sucesor.dato)
            
        return nodo_actual   

    def buscar_mayor(self):
        return self.__buscar_mayor(self.__root)
    
    def __buscar_mayor(self, nodo_actual):
        mayor = nodo_actual
        if mayor is not None:
            mayor = mayor.Rptr
        return mayor.dato
    
    def buscar_menor(self):
        return self.__buscar_menor(self.__root)
        
    def __buscar_menor(self, nodo_actual):
        menor = nodo_actual
        if menor is not None:
            menor = menor.Lptr
        return menor.dato
    
    #################
    ### PRE-ORDEN ###
    #################
        
    def preorden(self):
        self.__preorden(self.__root)
        
    def __preorden(self, nodo_actual):
        if nodo_actual is None:
            return
        # Imprimir la raiz
        print(f"{nodo_actual.dato}", end="->")
        # SubÁrbol izquierdo
        self.__preorden(nodo_actual.Lptr)
        # SubÁrbol derecho
        self.__preorden(nodo_actual.Rptr)
        
    ################
    ### IN-ORDEN ###
    ################
        
    def inorden(self):
        self.__inorden(self.__root)
        
    def __inorden(self, nodo_actual):
        if nodo_actual is None:
            return
        # SubÁrbol izquierdo
        self.__inorden(nodo_actual.Lptr)
        # Imprimir la raiz
        print(f"{nodo_actual.dato}", end="->")
        # SubÁrbol derecho
        self.__inorden(nodo_actual.Rptr)
    
    ##################
    ### POST-ORDEN ###
    ##################
        
    def postorden(self):
        self.__postorden(self.__root)
        
    def __postorden(self, nodo_actual):
        if nodo_actual is None:
            return
        # SubÁrbol izquierdo
        self.__postorden(nodo_actual.Lptr)
        # SubÁrbol derecho
        self.__postorden(nodo_actual.Rptr)
        # Imprimir la raiz
        print(f"{nodo_actual.dato}", end="->")
        
    ###############################
    ### MÉTODOS COMPLEMENTARIOS ###
    ###############################
    
    def imprimir_hojas(self):
        self.__imprimir_hojas(self.__root)
    
    def __imprimir_hojas(self, nodo_actual):
        if nodo_actual is None:
            return
        
        if nodo_actual.Lptr is None and nodo_actual.Rptr is None:
            print(f"Nodo hoja: {nodo_actual.dato}")
        else:
            self.__imprimir_hojas(nodo_actual.Lptr)
            self.__imprimir_hojas(nodo_actual.Rptr)
            
    def contar_hojas(self):
        return self.__contar_hojas(self.__root)
    
    def __contar_hojas(self, nodo_actual):
        if nodo_actual is None:
            return 0
        
        if nodo_actual.Lptr is None and nodo_actual.Rptr is None:
            return 1
        else:
            return self.__contar_hojas(nodo_actual.Lptr) + self.__contar_hojas(nodo_actual.Rptr)
        
    def menor_recursivo(self):
        return self.__menor_recursivo(self.__root)
    
    def __menor_recursivo(self, nodo_actual):
        if nodo_actual is None:
            return None
        
        if nodo_actual.Lptr is None:
            return nodo_actual.dato
        else:
            return self.__menor_recursivo(nodo_actual.Lptr)
        
    def calcular_altura(self):
        return self.__calcular_altura(self.__root)
    
    def __calcular_altura(self, nodo_actual):
        if nodo_actual is None:
            return 0
        else:
            sub_izquierdo = 1 + self.__calcular_altura(nodo_actual.Lptr)
            sub_derecho = 1 + self.__calcular_altura(nodo_actual.Rptr)
            
            if sub_derecho >= sub_izquierdo:
                return sub_derecho
            else:
                return sub_izquierdo