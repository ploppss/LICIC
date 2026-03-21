#include <iostream>

using namespace std;

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");
int numeros[5];
int mayor;

    for (int i=0; i<5; i++){
        cout<< "Introduzca un número.>";
        cin>> numeros[i];
    }

    cout<< "Los números que introdujo son:"<< endl;

    for (int i=0; i<5; i++){

        cout<< numeros [i]<< " ";
    }

    cout<< endl;

    mayor= numeros[0];

    for (int i=1; i<5; i++){

        if (mayor<numeros[i]){
            mayor= numeros[i];
        }
    }

    cout<< "El número mayor es: "<< mayor<< endl;

return 0;
}