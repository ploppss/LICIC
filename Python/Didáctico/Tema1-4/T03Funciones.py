# Definición de la función:
def calcular_area_rectangulo(base, altura):
    """
    Calcula el área de un rectángulo.

    Args:
        base (int/float): La longitud de la base del rectángulo.
        altura (int/float): La altura del rectángulo.

    Returns:
        float: El valor del área calculado (base * altura).
    """
    area = base * altura
    return area

# 1. Llamada a la función con valores directos
area1 = calcular_area_rectangulo(10, 5)
print(f"El área del rectángulo A es: {area1}")

# 2. Reutilización con diferentes parámetros
largo = 8
ancho = 3
area2 = calcular_area_rectangulo(largo, ancho)
print(f"El área del rectángulo B es: {area2}")
# Nota: la variable 'area' dentro de la función es LOCAL y no existe fuera.

print(calcular_area_rectangulo) # Esta linea es para imprimir la docstring de la funcion llamada durante el programa.