#include <iostream>

using namespace std;

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");

int numeros[5];

    for (int i=0; i<5; i++){

        cout<< "Introduzca un número.>";
        cin>> numeros [i];
    }

    cout<< "Los números que introdujo son:"<< endl;

    for (int i=0; i<5; i++){

        cout<< numeros [i]<< " ";
    }

    cout<< endl<< "Los números que introdujo al revés son:"<< endl;

    for (int i=4; i>=0; i--){
        cout<< numeros[i]<< " ";
    }


return 0;
}