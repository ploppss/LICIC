# Imprimir arreglo recursivo
def imprimir(A, N):
    if N != 0: # Caso Base
        imprimir(A, N-1) # Caso Recursivo
        print(f"A[{N-1}] = {A[N-1]}")
    # Si la recursion no deja ninguna operación pendiente es recursión a la cola
    
def sumar(A, N):
    if N == 0:
        return 0
    else:
        return A[N-1] + sumar(A, N-1) # Si el return tiene una operación pendiente es recursión no a la cola
    
def factorial(N):
    if N == 0 or N == 1:
        return 1
    else:
        return N * factorial(N-1) # Si el return tiene una operación pendiente es recursión no a la cola
    
def fibonacci(N):
    if N == 0 or N == 1:
        return N
    else:
        return fibonacci(N-1) +fibonacci(N-2)
    
A = [10, 20, 30, 40, 50]

imprimir(A, len(A))
print()

print(f"Suma del arreglo:")
print(sumar(A, len(A)))
print()

print(f"Factorial de un número:")
print(factorial(4))
print()

print(f"Secuencia de Fibonacci")
print(fibonacci(6))