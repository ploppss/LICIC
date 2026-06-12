def collatz(n, pasos=0):
    if n == 1:
        print(n)
        return pasos
    print(n, end="->")
    if n % 2 == 0:
        return collatz(n//2, pasos+1)
    elif n % 2 != 0:
        return collatz(n*3+1, pasos+1)

print(collatz(3))