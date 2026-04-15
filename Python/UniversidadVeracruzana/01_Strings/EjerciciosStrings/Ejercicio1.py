"""
    Escribe un programa que solicite una cadena al usuario. La cadena debe representar un "Código de Alumno" con el siguiente formato:
    zzz-12345-XX (donde z son letras, 12345 son números y XX son letras mayúsculas).

    1. Valida que la cadena tenga exactamente 12 caracteres.
    2. Extrae los 3 primeros caracteres y verifica si son todos minúsculas.
    3. Extrae los 5 números centrales y verifica si son realmente dígitos.
    4. Invierte la cadena completa y muéstrala en pantalla.
"""

cadena = input(f"Por favor inserte su código de alumno con formato zzz-12345-XX .>")

caracteres_totales = False
caracteres_minusculas = False
numeros = False

if len(cadena) == 12:
    caracteres_totales = True
else:
    print(f"ERROR. El código de alumno que insertó no posee 12 caracteres.")
    
string_minus = cadena[0:3]
print(string_minus)
if string_minus.islower():
    caracteres_minusculas = True
else:
    print(f"ERROR. El código de alumno que insertó no contiene 3 minúsculas al inicio.")

numeros_ext = cadena[4:9]
print(numeros_ext)
if numeros_ext.isnumeric():
    numeros = True
else:
    print(f"ERROR. El código de alumno que insertó no contiene 5 números centrales.")
    
if caracteres_totales and caracteres_minusculas and numeros:
    print(f"Su código es correcto y se ha registrado correctamente")
    print(cadena[::-1])