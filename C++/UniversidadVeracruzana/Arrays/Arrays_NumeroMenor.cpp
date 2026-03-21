#include <iostream>

using namespace std;

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");
int numeros[5];
int menor;

    for (int i=0; i<5; i++){
        cout<< "Introduzca un número.>";
        cin>> numeros[i];
    }

    cout<< "Los números que introdujo son:"<< endl;

    for (int i=0; i<5; i++){

        cout<< numeros [i]<< " ";
    }

    cout<< endl;

    menor= numeros[0];

    for (int i=1; i<5; i++){

        if (menor>numeros[i]){
            menor= numeros[i];
        }
    }

    cout<< "El número mayor es: "<< menor<< endl;

return 0;
}