def maximo(A, N, mayor):
    if N > 0:
        if A[N-1] > mayor:
            mayor = A[N-1]
        return maximo(A, N-1, mayor)
    else:
        return mayor
    
arreglo = [1, 34, 23, 77, 24, 11, 21]

print(maximo(arreglo, len(arreglo), 0))
        