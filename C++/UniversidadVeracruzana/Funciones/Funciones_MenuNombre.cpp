#include <iostream>
#include <string>
using namespace std;

string nombre;

string PedirNombre(string &nombre){
    cout<< "\n Inserte su nombre por favor.>";
    getline(cin, nombre);
    return nombre;
}

void Saludar(string &nombre){
    if (nombre== " "){
        cout<< "\n Hola desconocido."<< endl;
    }else{
    cout<<"Hola "<<nombre<<  "."<< endl;
    }
    
}

void Salir(string &nombre){
    if (nombre== " "){
        cout<< "\n Adiós desconocido."<< endl;
    }else{
    cout<<"Adiós "<<nombre<<  "."<< endl;
    }
    
}

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");
nombre= " ";
int opcion;
bool salida= false;

    do{
    cout<< "\n ===MENÚ==="<< endl;
    cout<< "1. Insertar nombre"<< endl;
    cout<< "2. Saludar"<< endl;
    cout<< "3. Salir"<< endl;
    cout<< "Elija una opción.>";
    cin>> opcion;
    cin.ignore();
    
    switch (opcion){
        case 1:
            PedirNombre(nombre);
            break;
        case 2:
            Saludar(nombre);
            break;
        case 3:
            Salir(nombre);
            salida= true;
            break;
        default:
            cout<< "ERROR. Por favor inserte un número del menú."<< endl;
    }
    }while(salida==false);


return 0;
}