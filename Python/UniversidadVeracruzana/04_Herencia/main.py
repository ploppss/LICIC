from Models.Perro import Perro
from Models.Abeja import Abeja

pug = Perro("Pug", "Checo", 2) # pug es la variable que almacena al objeto Perro
abeja = Abeja("Bee") # abeja es la variable que almacena al objeto Abeja

# Se puede acceder a los atributos de la clase Perro y de la clase Animal gracias a la HERENCIA
print(f"Me llamo {pug.nombre} y soy un {pug.raza} además soy un {pug.especie},")

# Acceso a los métodos públicos de la clase Perro
pug.morder()

pug.cazar()

# Acceso a los métodos públicos de la clase Animal
pug.comer()

pug.dormir()

#############################
### POLIMORFISMO DINÁMICO ###
#############################

# Acceso a los métodos sobreescritos
pug.moverse()

pug.emitir_sonido()

# Se puede acceder a los atributos de la clase Abeja y de la clase Animal gracias a la HERENCIA
print(f"Me llamo {abeja.nombre} y además soy un {abeja.especie},")

# Acceso a los métodos públicos de la clase Abeja
abeja.picar()

# Acceso a los métodos públicos de la clase Animal
abeja.comer()

abeja.dormir()

#############################
### POLIMORFISMO DINÁMICO ###
#############################

# Acceso a los métodos sobreescritos
abeja.moverse()

abeja.emitir_sonido()