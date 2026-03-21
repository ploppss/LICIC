#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int NumeroAleatorio(int Min, int Max);

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");

    srand(time(NULL));

    cout<< "Número Aleatorio(1-10): ";
// Generar un número entre 1 y 10
    cout<< (rand ()%10)+1<< endl;

    cout<< "Número Aleatorio(15-20):";
// Generar un número entre 15 y 20
    cout<< (rand ()%6)+15<< endl;
/*
Cualquier número que se divida entre 10 solo puede dar como residuo un rango de 0 a 9,
por lo que si queremos un rango como 30 y 50 calculamos el rango restando el valor máximo 
menos el mínimo y a eso le sumamos 1 (21) para despues sumarle el valor mínimo.
*/ 
    cout<< "Número Aleatorio(30-50):";
    cout<< NumeroAleatorio(30, 50)<< endl;

return 0;
}

int NumeroAleatorio(int Min, int Max){
    int a;
    a= rand()%(Max-Min+1)+Min;
    
return a;
}
