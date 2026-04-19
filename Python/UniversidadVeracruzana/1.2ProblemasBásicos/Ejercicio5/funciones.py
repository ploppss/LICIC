# CUADRADO

def area_cuadrado(lado):
    area = lado * lado
    return area

def perimetro_cuadrado(lado):
    perimetro = lado * 4
    return perimetro

def ambos_cuadrado(lado):
    print(f"El área de la figura es: {area_cuadrado(lado)} cm².")
    print(f"El perímetro de la figura es {perimetro_cuadrado(lado)} cm.")
    return

# RECTÁNGULO

def area_rect(base, altura):
    area = base * altura
    return area

def perimetro_rect(base, altura):
    perimetro = (base*2) + (altura*2)
    return perimetro

def ambos_rect(base, altura):
    print(f"El área del rectángulo es: {area_rect(base, altura)} cm².")
    print(f"El perímetro del rectángulo es: {perimetro_rect(base, altura)} cm.")
    
# CÍRCULO

def area_cir(radio):
    area = 3.1416 * (radio ** 2)
    return area

def perimetro_cir(diametro):
    perimetro = 3.1416 * diametro
    return perimetro

def ambos_cir(radio, diametro):
    print(f"El área del círculo es: {area_cir(radio)} cm².")
    print(f"El perímetro del círculo es: {perimetro_cir(diametro)} cm.")
    
# TRIÁNGULO

def area_tri(base, altura):
    area = (base * altura) / 2
    return area

def perimetro_tri(lado1, lado2, lado3):
    perimetro = lado1 + lado2 + lado3
    return perimetro

def ambos_tri(lado1, lado2, lado3, altura):
    print(f"El área del triángulo es: {area_tri(lado3, altura)} cm².")
    print(f"El perímetro del triánulo es: {perimetro_tri(lado1, lado2, lado3)} cm.")