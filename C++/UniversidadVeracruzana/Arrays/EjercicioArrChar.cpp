#include <iostream>
#include <string>

using namespace std;

bool Palindroma(string Palabra);
void CorregirNombre(string Nombre);

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls"); 
string nombre;
string palabra;

//=====EJERCICIO1=====

    cout<< "Inserte su nombre.>";
    getline(cin, nombre);

    if (nombre.size()>25){
        cout<< "Su nombre es un nombre largo."<< endl;
    }else {
        cout<< "Su nombre es un nombre corto."<< endl;
    }

//=====EJERCICIO2=====

    cout<< "Inserte una palabra para que se identifique si es palíndroma o no.>";
    getline(cin, palabra);

    if (Palindroma(palabra)){
        cout<< "La palabra insertada SI es palíndroma."<< endl;
    }else {
        cout<< "La palabra insertada NO es palíndroma"<< endl;
    }

//=====EJERCICIO3=====

    cout<< "Inserte su nombre completo(Escriba mal las mayúsculas).>";
    getline(cin, nombre);

    CorregirNombre(nombre);

return 0;
}

bool Palindroma(string Palabra){
int i= 0;
int j= Palabra.length();

    j--;

    while (i<j){
        if (Palabra[i]!=Palabra[j]){
            return false;
        }
    
    i++;
    j--;
    }

return true;
}

void CorregirNombre(string Nombre){
int i= 0;
int j= 1;
int longitud= Nombre.length();

    while (i<longitud){
        if (Nombre[i]>= 'A' && Nombre[i]<='Z'){
            Nombre[i]+=32;
        }
        i++;
    }

    if (Nombre[0]>= 'a' && Nombre[0]<='z'){
        Nombre[0]-=32;
    }

    while (j<longitud){
        if (Nombre[j]==32){
            if (j+1<longitud){
                if (Nombre[j+1]>= 'a' && Nombre[j+1]<='z'){
                    Nombre[j+1]-=32;
                }
            }
        }
        j++;
    }
    cout<<"Su nombre con las mayúsculas y minúsculas corregidas es: "<< Nombre<< endl;
}