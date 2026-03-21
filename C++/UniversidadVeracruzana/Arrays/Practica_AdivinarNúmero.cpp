#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int NumeroAleatorio(int Min, int Max);

int main(){
setlocale(LC_ALL, " ");
int numero;
int _intentó;

    srand(time(NULL));
    cout<< "Generando un número aleatorio entre 1 y 10 . . ."<< endl;
    numero= NumeroAleatorio(1, 10);
    cout<<"El número se ha generado."<< endl;
    cout<< "Tiene 5 intentos para adivinarlo."<< endl;
    
    // Línea para mostrar el número aleatorio
    //cout<< "El número es: "<< numero<< endl;

    for (int i=1; i<=5;i++){
        cout<< "\n Intento número: "<< i<< endl;
        cout<< "Inserte un número.>";
        cin>> _intentó;
        if (_intentó== numero){
            cout<< "\nHa adivinado el número aleatorio!, en efecto el número es: "<< numero<< endl;
            break;
        }
    }

    if (_intentó!=numero){
        cout<< "\nLástima!, no ha logrado adivinar el número."<< endl;
        cout<< "El número aleatorio generado es: "<< numero<<  endl;
        cout<< "Saliendo del programa . . ."<< endl;
        system("pause");
    }

    if (_intentó==numero){
    cout<< "Saliendo del programa . . ."<< endl;
    system("pause");
    }

return 0;
}

int NumeroAleatorio(int Min, int Max){
    int x;
    x= rand()%(Max-Min+1)+Min;
return x; 
}