"""
    Crea la función analizador_texo(cadena) que realice:

    Limpieza: Elimina espacios en los extremos (simulando un "trim").
    Transformación: Cambia espacios internos por asteriscos.
    Conteo: Cuenta las "a" y "A".
    Retorno: Debe devolver los dos resultados así: return texto_procesado, conteo_vocal.
"""

def analizador_texto(cadena):
    cadena_trim = cadena.strip()
    lista = cadena_trim.split()
    nueva_cadena = "*".join(lista)
    
    i = 0
    
    for letra in nueva_cadena:
        if letra.lower() == 'a':
            i += 1
            
    return nueva_cadena, i
