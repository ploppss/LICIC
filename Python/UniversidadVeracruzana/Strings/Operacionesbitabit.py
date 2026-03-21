# Queremos encender el tercer bit (de derecha a izquierda)
# El número 8 en binario es: 1000
valor = 8 

# Nuestra máscara para el tercer bit (posición 2, porque empezamos en 0)
# 2 elevado a la 2 es 4. En binario: 0100
mascara = 4 

# Aplicamos OR
resultado = valor | mascara

print(f"Original: {bin(valor)} ({valor})")
print(f"Máscara:  {bin(mascara).zfill(6)} ({mascara})")
print(f"Resultado: {bin(resultado)} ({resultado})")
# El resultado será 1100 (12 en decimal)