"""
Un postulante a un empleo, realiza una prueba de capacitación, se obtuvo 
la  siguiente  información:  cantidad  total  de  preguntas  que  se  le  realizaron  y  la   
cantidad de preguntas que contestó correctamente. Se pide realizar un programa en 
Python  que  ingrese  los  dos  datos  por  teclado  e  informe  el  nivel  de  este  según  el 
porcentaje de respuestas correctas que ha obtenido, y sabiendo que: 
Nivel máximo:  Porcentaje>=90%. 
Nivel medio:  Porcentaje>=75% y <90%. 
Nivel regular:  Porcentaje>=50% y <75%. 
Fuera de nivel:  Porcentaje<50%. 
"""

print("Bienvenido al menú para calcular su desempeño en el examen.")

preguntas_totales = int(input("Por favor inserte el número total de preguntas que se aplicaron.>"))
preguntas_correctas = int(input("Por favor inserte el número de preguntas que contestó correctamente.>"))

porcentaje_preguntas = (preguntas_correctas * 100) // preguntas_totales

if porcentaje_preguntas >= 90:
    print(f"Se ha obtenido un nivel máximo, de {porcentaje_preguntas}%.")
else:
    if porcentaje_preguntas >= 75:
        print(f"Se ha obtenido un nivel medio, de {porcentaje_preguntas}%.")
    else:
        if porcentaje_preguntas >= 50:
            print(f"Se ha obtenido un nivel regular, de {porcentaje_preguntas}%.")
        else:
            print(f"Se ha obtenido un porcentaje fuera de nivel, de {porcentaje_preguntas}%.")