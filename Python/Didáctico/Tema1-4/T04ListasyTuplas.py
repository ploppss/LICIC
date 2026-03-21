###################
##     LISTA     ##
###################
# Creación de una Lista
paises = ["Mexico", "Colombia", "España", "Argentina"]

# Acceso y Mutación
print(f"El tercer país es: {paises[2]}") # Salida: España
paises[1] = "Chile" # Mutación
paises.append("Peru") # Añadir al final

# Iteración (Uso de for, el concepto que ya domina)
print("\nPaíses actualizados:")
for pais in paises:
    print(f"- {pais}")
    
###################
##  DICCIONARIO  ##
###################
# Creación de un Diccionario
usuario = {
    "nombre": "Alan Turing",
    "edad": 42,
    "ciudad": "Manchester",
    "lenguajes": ["Python", "C++", "Fortran"] # Un valor puede ser una lista
}

# Acceso y Mutación
print(f"La edad es: {usuario['edad']}")
usuario['edad'] = 43 # Mutación

# Añadir una nueva clave-valor
usuario["ocupacion"] = "Científico"

###################
##     SETS      ##
###################
colores_repetidos = ["rojo", "azul", "rojo", "verde", "azul"]

# Creación del Set (elimina duplicados automáticamente)
colores_unicos = set(colores_repetidos) 
print(colores_unicos) # Salida: {'rojo', 'azul', 'verde'} (orden no garantizado)

# Operación: Intersección (elementos comunes)
set1 = {1, 2, 3}
set2 = {3, 4, 5}
interseccion = set1.intersection(set2) 
print(interseccion) # Salida: {3}