def potencia(base, expo):
    if expo == 0: return 1
    else: return base * (potencia(base, expo-1))
    
print(potencia(2, 0))
print(potencia(2, 1))
print(potencia(2, 2))
print(potencia(2, 3))
print(potencia(2, 4))
print(potencia(2, 5))