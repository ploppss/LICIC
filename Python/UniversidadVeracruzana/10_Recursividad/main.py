# Imprimir arreglo recursivo
def imprimir(A, N):
    if N != 0: # Caso Base
        imprimir(A, N-1) # Caso Recursivo
        print(f"A[{N-1}] = {A[N-1]}")
        
def sumar (A, N, T):
    if N > 0:
        T = T + A[N-1]
        print(T)
        sumar(A, N-1, T)
    
A = [10, 20, 30, 40, 50]

imprimir(A, len(A))

print(sumar(A, len(A), 0))