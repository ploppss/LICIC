class HashMap:
    
    def __init__(self, init_size = 8, load_factor = 0.75):
        self.__size = init_size # Tamaño inicial para la tabla hash
        self.__load_factor = load_factor # Factor de carga, si se alcanza el 75% de la capacidad total de la tabla hash se el tamaño se duplica
        self.__count = 0 # Contador para llevar la cuenta de cuantos elementos se han insertado
        self.__buckets = [None] * self.__size # Arreglo de buckets, donde se almacenaran las tuplas, o listas de tuplas si se da alguna colisión
        
        print(f"Buckets: {self.__buckets}")
        print(f"Tamaño del HashMap: {self.__size}")
    
    ########################
    ### MÉTODOS PRIVADOS ###
    ########################
    
    def __hash_function(self, key):
        """ El método recibe una cadena, para posteriormente calcular su hash con la función nativa de Pyhton, 
        le aplica la operación módulo (%) y retorna el resultado de todo el procedimiento para indexar 
        un nuevo par dentro del arreglo buckets.

        Args:
            key (string): Es el elemento llave del par llave-valor que se desee insertar.

        Returns:
            int: Índice que ocupara el nuevo par dntro del arreglo buckets.
        """
        nuevo_hash = hash(key) # Calcula el hash de la llave
        indice = nuevo_hash % self.__size # Le aplica la operación modulo para calcular el índice
        
        return indice # Retorna el índice que la llave debe ocupar
    
    
    def __rehash(self):
        """El método duplica la capacidad actual del hashmap haciendo un rehash de todos los elementos que estan
        en el arreglo actual para pasarlos al nuevo arreglo buckets.
        """
        # Se guarda el antiguo arreglo de buckets
        old_buckets = self.__buckets 
        # Se duplica el tamaño inicial del Hash Map
        self.__size = self.__size * 2 
        # Se vuelve a crear una nueva de lista buckets con el nuevo tamaño
        self.__buckets = [None] * self.__size
        # La cuenta se resetea a cero
        self.__count = 0
        
        for bucket in old_buckets: # Para cada elemento en la antigua lista buckets
            
            if bucket is not None: # Si el bucket no es None
                for k, v in bucket: # Para cada par en el bucket
                    self.put(k, v) # Ponerlo dentro de la nueva lista buckets.
        
    #######################
    ### MÉTODOS BASICOS ###
    #######################
    
    def put(self, key, value):
        """Agrega una tupla a una lista dentro de la lista self.buckets, valida que la llave no este duplicada
        si esta duplicada, actualiza el valor de la llave que se le dio.
        Verifica el factor de carga y si la capacidad actual del arreglo sef.buckets está ocupada en un 75% o más
        el método llama al método rehash para reubicar cada par de llave-elemento.
            
        Args:
            key (string): El elemento llave del par llave-valor, normalmente es una string
            value (type): El elemento valor del par llave-valor
        """
        index = self.__hash_function(key) # Genera un índice para el nuevo par
        
        # Verifica si la llave ya existe, si así es, actualiza el valor de la llave
        for i, (k, v) in enumerate(self.__buckets[index]):
            if k == key:
                self.__buckets[index][i] = (key, value)
                return 
            
        # Línea de depuración
        print(f"Llave: {key}, Hash: {hash(key)}, Índice: {index}")
            
        if self.__buckets[index] is None: # Si la ubicación está vacía se crea una nueva sublista
            self.__buckets[index] = []
        
        self.__buckets[index].append((key, value)) # Se añade la tupla a la lista creada anteriormente
        self.__count += 1 # Se incrementa el contador para llevar el registro del tamaño
        
        # Verifica el factor de carga
        load = self.__cont / self.__size 
        
        if load >= self.__load_factor:
            self.__rehash()
                 
    def get(self, key):
        """Obtiene el valor de una llave mediante la llave, si no encuentra la llave devuelve None.

        Args:
            key (string): La llave que se va a buscar para obtener el valor que se desea

        Returns:
            value: Valor que corresponde a la llave buscada
            None: Si no encuentra la llave, devuelve None
        """
        index = self.__hash_function(key) # Calcula el índice donde está la llave
        bucket = self.__buckets[index] # Guarda la lista que esta dentro de la posicion buckets
        
        if bucket is not None:# Si la posición no es None
            for k, v in bucket: # Para cada par k, v en el bucket
                if k == key: # Si k es igual a la llave
                    return v # Retorna v, el valor de la llave
        return None # Si no encontro la llave retorna None
                
    def remove(self, key):
        """Borra el par llave-valor mediante una llave

        Args:
            key (string): La llave del par que se desea borrar

        Returns:
            Bool: Si encontró el par y lo borro devuelve True, si no devuelve False
        """
        index = self.__hash_function(key) # Calcula el índice donde está la llave
        bucket = self.__buckets[index]# Guarda la lista que está dentro de la posición buckets
        
        if bucket is not None: # Si la posición no es None
            for i, (k, v) in enumerate(bucket): # Para i y cada par k, v en la bucket enumerada
                if k == key: # Si k es igual a la llave
                    del self.__buckets[index][i] # Borra la posición i de la bucket
                    self.__count -= 1 # Decrementa la cuenta
                    return True # Devuelve verdadero porque si encontró que borrar
        return False # Devuelve falso por que no encontró que borrar
    
    def print_hash(self):
        """Imprime la lista buckets
        """
        print(self.__buckets)
        
    ###############################
    ### MÉTODOS COMPLEMENTARIAS ###
    ###############################
    
    def set_default(self, key, value=None):
        """Inserta un nuevo par llave valor, si no se le da un valor se le asigna None

        Args:
            key (string): Parámetro obligatorio para agregar el par
            value (optional): El valor que se desea asignar a la llave. El default es None.

        Returns:
            Valor: Si la llave existe retorna el valor actual, si no existe retorna el valor que se le insertó
        """
        index = self.__hash_function(key) # Genera un índice para el nuevo par
        bucket = self.__buckets[index]
        
        # Verifica si la llave ya existe, si así es, devuelve el valor de la llave
        if bucket is not None:
            for i, (k, v) in enumerate(self.__buckets[index]):
                if k == key:
                    return v
            
        if self.__buckets[index] is None: # Si la ubicación está vacía se crea una nueva sublista
            self.__buckets[index] = []
            
        self.__buckets[index].append((key, value)) # Se añade la tupla a la lista creada anteriormente
        self.__count += 1 # Se incrementa el contador para llevar el registro del tamaño
        
        # Verifica el factor de carga
        load = self.__cont / self.__size 
        if load >= self.__load_factor:
            self.__rehash()
            
            return value # Retorna el valor insertado si es que no existía la llave
        
    def internal_structure(self):
        """Para cada elemento dentro de la lista buckets imprimir el elemento (el elemento es otra lista).
        """
        for i in self.__buckets:
            print(i)
    
    def __str__(self):
        
        partes = [] #  Se declara un nuevo arreglo para guardar cada par de Llave-Valor
        
        for bucket in self.__buckets: # Para cada bucket en buckets
            if bucket is None: # Si la bucket es None, se ignora
                continue
            else:
                for (k, v) in bucket: # Para cada tupla Llave-Valor en la lista de la bucket
                    par = f"{k!r}: {v!r}" # Se declara una cadena utilizando !t y ":"
                    partes.append(par) # Se añade el par a la lista partes
        
        contenido = ", ".join(partes) # Se juntan todos los elementos de la lista partes separados por comas
        
        return "{" + contenido + "}" # Retorna el contenido entre llaves
        