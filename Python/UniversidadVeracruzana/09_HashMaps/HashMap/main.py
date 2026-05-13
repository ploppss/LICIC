from Models.HashMap import HashMap

hash_map = HashMap()

hash_map.put("Nombre", "Bart")
hash_map.put("Dirección", "Avenida Siempre Viva")
hash_map.put("Edad", "12")
hash_map.put("Papá", "Homero")
hash_map.put("Mamá", "Marge")

hash_map.get("Dirección")
hash_map.remove("Nombre")

hash_map.print_hash()
hash_map.internal_structure()

print(hash_map)