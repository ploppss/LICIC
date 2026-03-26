edad = int(input("Ingrese su edad: "))
estado_civil = input("Ingrese su estado civil (soltero/casado/otro): ").lower() # Es importante normalizar la entrada, esto convierte la cadena en SOLO minusculas

if edad >= 21 and estado_civil == "casado":
    print("Acceso total.")
elif edad >= 21: # Si es >= 21 y no está casado (por el if fallido)
    print("Acceso limitado.")
else: # Si la edad es menor de 21
    print("Acceso denegado.")