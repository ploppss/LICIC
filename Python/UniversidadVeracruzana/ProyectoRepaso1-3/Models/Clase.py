class Clase:
    def __init__(self, texto_inicial):
        # Se guarda el texto como una lista para simular mutablidad
        self.datos = texto_inicial
    
    def __str__(self):
        
        return self.datos
    
    def longitud(self):
        
        i = 0
        
        for _ in self.datos:
            i += 1
            
        return i
    
    def a_mayusculas(self):
        
        reemplazo = ""
        
        for caracter in self.datos:
            
            codigo_ascii = ord(caracter)
            
            if codigo_ascii >= 97 and codigo_ascii <= 122:
                
                codigo_ascii -= 32
                reemplazo += chr(codigo_ascii)
            else:
                reemplazo += caracter
                
        return reemplazo
    
    def subcadena(self, inicio, fin, paso=1):
        
        subcadena = ""
        
        indice = inicio
        
        if paso > 0:
            while indice < fin and indice< self.longitud():
                
                caracter = self.datos[indice]
                subcadena += caracter
                
                indice += paso
        else:
            while indice > fin and indice >= 0:
                
                caracter = self.datos[indice]
                subcadena += caracter
                
                indice += paso
            
        return subcadena