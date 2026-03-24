class Animal:
    # Dentro de una clase padre se declaran todos los atributos y métodos en común de todas las clases hijas
    # Dentro de una clase padre no podemos declarar atributos o métodos específicos
    def __init__(self, especie):
        self.especie = especie
    
    def comer(self):
        print(f"Estoy comiendo . . .") 
    
    def dormir(self):
        print(f"Estoy durmiendo . . .")
    
    def moverse(self):
        #print(f"Me estoy moviendo . . .")
        raise NotImplementedError ("Cada animal debe implementar su movimiento")
        # Con la linea anterior nos aseguramos de que si las clases hijas utilizan estos métodos FORZOSAMENTE los tenga que sobreescribir
    def emitir_sonido(self):
        #print(f"Estoy emitiendo un sonido . . .") 
        raise NotImplementedError ("Cada animal debe implementar su sonido")
        # Con la linea anterior nos aseguramos de que si las clases hijas utilizan estos métodos FORZOSAMENTE los tenga que sobreescribir
    
    # Por ejemplo casi la totalidad de los animales, comen, duermen, se mueven y emiten algun sonido, salvo excepciones
    