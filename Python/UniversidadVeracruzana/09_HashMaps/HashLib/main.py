print(f"Hash de la función hash() nativa de Python")
print(hash("Hola")) # Python saca el hash de la cadena Hola de manera nativa
# El hash resultante cambia cada vez que se ejecuta el programa

################################
### CODIFICACIÓN CON HASHLIB ###
################################

import hashlib # Biblioteca para criptografia
# Los algoritmos de hashlib no funcionan con cadenas normales, solo con bytes
texto = "Hola".encode() # Convierte la cadena a bytes

"""
MD5
- Genera un hash de 128 bits
- Muy rápido
- No es seguro (alta probabilidad de colision)
- Uso: comprobar la integridad de archivos
"""

hash_obj = hashlib.md5(texto)
print(f"Hashlib: MD5")
print(hash_obj.hexdigest()) # La funcion hexdigest es para que imprima el hash correctamente

hash_obj2 = hashlib.sha1(texto)
print(f"Hashlib: SHA1")
print(hash_obj2.hexdigest())

hash_obj3 = hashlib.sha256(texto)
print(f"Hashlib: SHA256")
print(hash_obj3.hexdigest())

hash_obj4 = hashlib.sha512(texto)
print(f"Hashlib: SHA512")
print(hash_obj4.hexdigest())
