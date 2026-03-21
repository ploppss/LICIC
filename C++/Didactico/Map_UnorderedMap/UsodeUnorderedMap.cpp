#include <iostream>
#include <unordered_map>// Se incluye la librería unordered_map
#include <string>

using namespace std;

int main(){
    unordered_map<string, double> Calificaciones;

    Calificaciones["Carlos"]= 9.8;
    Calificaciones["Leslie"]= 8.4;
    Calificaciones["Rafael"]= 9.0;
    Calificaciones["Juan"]= 8.0;

// La sintaxis es muy similar si no es que idéntica como en el ciclo for

    cout<< "La lista de calificaciones es:"<< endl;
    for (const auto& elemento: Calificaciones){
        cout<< "Alumno:"<< elemento.first<< ", calificacion obtenida: "<< elemento.second<< endl;
    }

return 0;
}