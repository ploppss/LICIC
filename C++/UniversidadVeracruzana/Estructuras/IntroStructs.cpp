#include <iostream>

using namespace std;

struct Estudiante{
    string nombre;
    string apllido1;
    string apellido2;
    string telefono;
    string matricula;
    int semestre;
    int edad;
    char sexo;
// Esto nos define que cada estudiante posee los datos declarados dentro de la estructura.
// Cada variable estudiante tendrá nombre, apellido1, apellido2, telefono, matricula, semestre, edad y sexo
};

class Maestro{
    string nombre;
    int edad; // Por defecto estos datos son PRIVADOS
    public:
    string materia; // Si estan debajo de la línea public; estos si son PÚBLICOS
    string apellido; // Al ser públicos si se puede acceder a ellos desde la función main.
};

int main(){
setlocale(LC_ALL, " ");
Estudiante e1;  // Esta variable ya almacena todos los tipos de variable antes mencionadas.
                // Si no se le da ningún valor inicial almacenan basura tal como los arrays.
                // PARA IMPRIMIR:   cout<< e1.nombre;  cout<< e1.edad;
                
return 0;
}