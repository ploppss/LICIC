calificacion = input("Por favor, inserte el puntaje de calificacion obtenido.>")
calificacion = int(calificacion)

if calificacion >= 90 and calificacion <= 100:
    print("Su calificacion es A-Excelente")
elif calificacion < 90 and calificacion >= 80:
    print("Su calificacion es B-Notable")
elif calificacion < 80 and calificacion >= 70:
    print("Su calificacion es C-Suficiente")
elif calificacion <70 and calificacion > 0:
    print("Su calificacion  es F-Reprobado")
else:
    print("Por favor inserte un valor valido.")

###################
##LOGICA MEJORADA##
###################
    
# if calificacion > 100 or calificacion < 0:
#     print("Por favor inserte un valor valido entre 0 y 100.")
# elif calificacion >= 90:  Ya sabemos que es <= 100 por el if anterior
#     print("Su calificacion es A-Excelente")
# elif calificacion >= 80:  Ya sabemos que es < 90
#     print("Su calificacion es B-Notable")
# elif calificacion >= 70:  Ya sabemos que es < 80
#     print("Su calificacion es C-Suficiente")
# else:  Si llegó aquí, es automáticamente < 70
#     print("Su calificacion es F-Reprobado")