# Lista de diccionarios para almacenar todods los estudiantes y sus datos
registro_escolar = []

def calcular_promedio(calificaciones):
    
    if not calificaciones:
        return 0
    return sum(calificaciones) / len(calificaciones)

def determinar_estatus(promedio, minima_aprobatoria=6.0):
    return "Aprobado" if promedio >= minima_aprobatoria else "Reprobado"

def registrar_alumno(registro, nombre, calificaciones):
    """
    Esta función modifica directamente la lista 'registro_escolar' pasada por referencia ya que es un objeto mutable.
    """
    promedio = calcular_promedio(calificaciones)
    estatus = determinar_estatus(promedio)
    
    # Creamos el expediente del alumno
    expediente = {
        "Nombre": nombre,
        "Calificaciones": calificaciones,
        "Promedio": round(promedio, 2),
        "Estatus": estatus
    }
    
    # Añade un elemento a la lista registro_escolar causando un efecto colateral
    registro.append(expediente)
    print(f"---Alumno {nombre} registrado exitosamente.---")

def imprimir_reporte_general(db):
    print("\n")
    print("="*45)
    print(f"{'NOMBRE':<20} | {'PROMEDIO':<10} | {'ESTADO'}") # <20 y <10 sirven para alinear las varaibles a la derecha en un espacio de n caracteres
    print("-" * 45)
    for alumno in db:
        print(f"{alumno['Nombre']:<20} | {alumno['Promedio']:<10} | {alumno['Estatus']}")
    print("="*45)

    # Registro de alumnos utilizando paso de parámetros
    registrar_alumno(registro_escolar, "Pedro", [10, 9, 8])
    registrar_alumno(registro_escolar, "Luca", [5, 6, 4])
    registrar_alumno(registro_escolar, "Hebert", [7, 8, 7])
    
    # Mostrar el registro de alumnos completo
    imprimir_reporte_general(registro_escolar)