# Funciones independientes para convertir unidades
def celsius_a_fahrenheit(c):
    return (c * 9/5) + 32

def km_a_millas(km):
    return km * 0.621371

def metros_a_pulgadas(m):
    return m * 39.3701

# Función principal que invoca a las funciones independientes, dependiendo de los argumentos que recibe
def conversor_universal(**unidades):
    """
    Recibe un número variable de argumentos. Dependiendo de la llave del valor utiliza cierta funcion
    """
    resultados = {}
    
    # Iteramos sobre los argumentos dinámicos 
    for clave, valor in unidades.items():
        if clave == "celsius":
            res = celsius_a_fahrenheit(valor)
            resultados["Fahrenheit"] = f"{res:.2f}°F"
            
        elif clave == "kilometros":
            res = km_a_millas(valor)
            resultados["Millas"] = f"{res:.2f} mi"
            
        elif clave == "metros":
            res = metros_a_pulgadas(valor)
            resultados["Pulgadas"] = f"{res:.2f} in"
            
    return resultados

# Invocación de la funcipon
print(conversor_universal(celsius= 0))

print(conversor_universal(celsius= 0, kilometros= 42.20))

print(conversor_universal(celsius= 0, kilometros= 42.20, metros= 3.05))