#include <iostream>
#include <vector>
using namespace std;

struct Direccion{
string calle;
int numero;
string ciudad;
    // Todas estas variables son los miembros de la estructura Direccion.

    // Este es un contructor.
    Direccion(string cal, int num, string cit){
        calle= cal;
        numero= num;
        ciudad= cit;
    }
};

struct Estudiante{
string nombre;
int edad;
char sexo;
string matricula;
int semestre;
    // Direccion tambien es un miembro de Estudiante.
    // En este caso se puede ver una estructura anidada.
Direccion direcc;

    // Este es un constructor.
    // Cuando tenemos  una estructura anidada y deseamos utilizar un constructor esta es la sintaxis correcta.
    // En este caso tenemos que asignarles la dirección deesde la función main.
    Estudiante(string nom, int age, char sex, string mat, int sem, string cal, int num, string cit):
    direcc(cal, num, cit){
        nombre= nom;
        edad= age;
        sexo= sex;
        matricula= mat;
        semestre= sem;
    }
    // Se puede tener más de un constructor en una misma estructura.
    // Para decidir que constructor queremos usar se hace mediante los parámetros.
    // Por ello todos los constructores dentro de una misma estructura deben tener diferentes parámetros.

    // Un constructor solo se puede ejecutar cuando se declara un objeto dentro de la funcion main.
    // No se puede declarar el mismo objeto 2 veces.
};

int main(){
Estudiante Lisa("Lisa Simpson", 12, 'F', "S25014079", 1, "Avenida Siempre Viva", 742, "Springflied");
Estudiante Bart("Bart Simpson", 14, 'M', "S23014079", 5, "Avenida Siempre Viva", 742, "Springflied");
    
// Se declara un vector de tipo Estudiante con nombre grupoB
    vector<Estudiante> grupoB;
    Estudiante Antrax("Hector Andrade", 18, 'M', "TECXalapa", 1, "Camino a los Aguacatales", 77, "CoatepeGOD");
    Estudiante Ruja ("Rafael Ortiz", 18, 'M', "TECXalapa", 1, "Primo Verdad", 18, "CoatepeGOD");
    // En esta línea añadimos a Antrax al vector grupoB
    grupoB.push_back(Antrax);
    // En esta línea añadimos a Ruja al vector grupoB
    grupoB.push_back(Ruja);

    // Se imprimen los datos de Lisa y Bart
    cout<< "===SIMPSON==="<< endl;
    cout<<"Datos del estudiante 1: "<< endl;
    cout<< "Nombre: "<< Lisa.nombre<< endl;
    cout<< "Edad: "<< Lisa.edad<< endl;
    cout<< "Semestre: "<< Lisa.semestre<< endl;
    cout<< "Matricula: "<< Lisa.matricula<< endl;
    cout<< endl;
    cout<< "Datos del estudiante 2: "<< endl;
    cout<< "Nombre: "<< Bart.nombre<< endl;
    cout<< "Edad: "<< Bart.edad<< endl;
    cout<< "Semestre: "<< Bart.semestre<< endl;
    cout<< "Matricula: "<< Bart.matricula<< endl;
    cout<< endl;

    // Se imprimen los datos de Antrax y Ruja
    cout<< "===TECZzz==="<< endl;
    cout<<"Datos del estudiante 1: "<< endl;
    cout<< "Nombre: "<< Antrax.nombre<< endl;
    cout<< "Edad: "<< Antrax.edad<< endl;
    cout<< "Semestre: "<< Antrax.semestre<< endl;
    cout<< "Matricula: "<< Antrax.matricula<< endl;
    cout<< endl;
    cout<< "Datos del estudiante 2: "<< endl;
    cout<< "Nombre: "<< Ruja.nombre<< endl;
    cout<< "Edad: "<< Ruja.edad<< endl;
    cout<< "Semestre: "<< Ruja.semestre<< endl;
    cout<< "Matricula: "<< Ruja.matricula<< endl;
    
return 0;
}