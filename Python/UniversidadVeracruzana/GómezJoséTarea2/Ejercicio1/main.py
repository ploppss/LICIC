correo_electronico = input("Por favor inserte su correo electrónico.>")

usuario = ""
dominio = ""

arroba = 0
longitud = len(correo_electronico)

for i in range(len(correo_electronico)):
    if correo_electronico[i] == "@":
        arroba = i

usuario = correo_electronico[0:arroba:]        
dominio = correo_electronico[arroba+1::]

dominio = dominio.upper()

print("Su usuario es: {}, su domimio es: {} y la longitud es: {}".format(usuario, dominio, longitud))

