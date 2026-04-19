class Suscripcion:
    
    def __init__(self, email, passwd):
        self._email = email
        self._passwd = passwd
        self._precio = 180
        self.perfiles = []
        self.perfiles_size = len(self.perfiles)

    def agregar_perfil(self, nuevo_perfil = None):
        """
            Agrega un nuevo Perfil a la cuenta.
        Args:
            nuevo_perfil(string): El nombre del nuevo perfil de la cuenta.
        """
        if nuevo_perfil is None:
            # Aquí 'self' ya existe y es totalmente accesible
            nuevo_perfil = f"Perfil{len(self.perfiles) + 1}"
            
        print(f"Al insertar un nuevo perfil su cuota mensual aumentara $20")
        self.perfiles.append(nuevo_perfil)
        self._precio += 20
        
        print(f"Perfil: {nuevo_perfil} agregado con éxito")
    
    def cambiar_Perfil(self):
        print(self.perfiles)
        pos = int(input(f"Inserte el número del perfil que desea cambiar.>"))
        nuevo_nombre = input(f"Inserte el nuevo del nombre perfil {pos}")
        self.perfiles[pos] = nuevo_nombre
        
    def calcular_descuento(self):
        """
            Calcula el porcentaje de descuento dependiendo del tipo de cuenta (Base, Alumno, Familiar) en las clases hijas
        Raises:
            NotImplementedError: Si el método no está declarado dentro de la clase hija significa que la cuenta no tiene un descuento.
        """
        raise NotImplementedError ("Este tipo de cuenta no tiene un descuento.")
    
    def borrar_cuenta(self):
        """
            Borra la cuenta actual.
        """
        del self
    
    @property
    def passwd(self):
        """
            Getter del atributo privado passwd
        """
        return self._passwd

    @passwd.setter
    def passwd(self, new_passwd):
        """
            Setter del atributo passwd, necesario para cambiar la contraseña de la cuenta
        Args:
            new_passwd (string): Nueva contraseña para asigarle a la cuenta
        """
        new = str(new_passwd)
        if new.isnumeri():
            print("ERROR. Por favor inserte una cadena de minimo 8 caracteres que sean letras, numeros y simbolos especiales")

    @property
    def precio(self):
        """
            Función getter para obtener o consultar el precio mensual de la suscripcion
        Returns:
            int precio: Precio actual de la cuenta
        """
        return self._precio
    
    @precio.setter
    def precio(self, nuevo_precio, access):
        """
            Setter del atributo privado precio, solo para administradores del servicio de streaming
        Args:
            nuevo_precio (int): Nuevo precio base
            access (string): Contraseña de administrador para cambiar el precio base
        """
        
        if access != "Ejemplo123456":
            print(f"ERROR. contraseñá de administrador de servicio incorrecta")
            return
        
        if nuevo_precio <= 0:
            print("ERROR. El precio debe ser un número positivo.")
        else:
            self._precio = nuevo_precio
        
    