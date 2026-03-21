#include <iostream>

using namespace std;

void PedirNumeros(int numeros[5]);

void CalcularExcesos(int numeros[5], float promedio);

float CalcularPromedio(int numeros[5]);

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");

int nums[5];

    PedirNumeros(nums);

    for (int i=0; i<5; i++){
        cout<< nums[i]<< " ";
    }

    cout<< endl<< "El promedio de las calificaciones es: "<< CalcularPromedio(nums)<< endl;

    cout<< "Las calificaciones que exceden el promedio son: "<< endl;

    CalcularExcesos(nums, CalcularPromedio(nums));

return 0;
}

void PedirNumeros(int numeros[5]){

    for (int i=0; i<5; i++){
        cout<< "Introduzca la calificación número: "<< i+1<< ".>";
        cin>> numeros[i];
    }
}

float CalcularPromedio(int numeros[5]){
int suma= 0;
float promedio;

    for(int i=0; i<5; i++){
        suma+= numeros[i];
    }

    promedio= suma/5;

return promedio;
}

void CalcularExcesos(int numeros[5], float promedio){

    for (int i=0; i<5; i++){
        if (numeros[i]-promedio>0){
            cout<< "La calificación número "<< i+1<< ": "<< numeros[i]<< " está por encima del promedio."<< endl;
        }
    }
}