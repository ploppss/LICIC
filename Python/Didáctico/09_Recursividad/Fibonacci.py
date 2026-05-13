def fibonacci(n):
    if n == 0 or n == 1:
        print(f"Caso base alcanzado {n}")
        return n
    else:
        a = fibonacci(n-1)
        b = fibonacci(n-2)
        resultado = a + b
        
        print(f"{resultado} = {a} + {b}")
        return resultado

numero = 2
fibonacci(numero)
print(fibonacci(numero))