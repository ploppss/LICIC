data = [2, 5, 8, 1, 5, 9, 2, 7, 8, 8, 4, 3, 1]

def analizarDatos(list):
    list2 = set(list)
    duplicados = len(list) - len(list2)
    
    print(f"Nueva lista sin duplicados: {list2}")
    print(f"Número de duplicados: {duplicados}")

analizarDatos(data)