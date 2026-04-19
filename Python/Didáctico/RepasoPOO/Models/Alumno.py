from Python.Didáctico.RepasoPOO.Models.Suscripcion import Suscripcion

class Alumno(Suscripcion):
    
    def __init__(self, email, universidad, passwd, perfil="Perfil1"):
        super().__init__(email, passwd)
        self.universidad = universidad
        self.agregar_perfil(perfil)
        
    def agregar_perfil(self):
        if len(self.perfiles) >= 1:
            print(f"ERROR. Este tipo de cuenta solo soporta 1 perfil dentro de ella")
            print(f"Lo que puede hacer es cambiar el nombre del perfil actual.>")
            flag = input(f"Desea cambiar el nombre del perfil actual?[S/n]")
            if flag.upper() == 'S':
                self.cambiar_Perfil()
                
