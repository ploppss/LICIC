#include <iostream>
using namespace std;

int CalcularEdad(int a1, int a2, int m1, int m2, int d1, int d2){
    int edad;
    
    edad= a2-a1;
    if (m1>m2){
        edad--;
    }
    if (m1==m2 && d1>d2){
        edad--;
    }
    return edad;
}

int main(){
setlocale(LC_ALL, " ");
    int añonaci, mesnaci, dianaci;
    int añoact, mesact, diaact;
    
    cout<< "Inserte su año de nacimiento.>";
    cin>> añonaci;
    cout<< "Inserte su mes de nacimiento.>";
    cin>> mesnaci;
    cout<< "Inserte su dia de nacimiento.>";
    cin>> dianaci;
    cout<< "Inserte el año actual.>";
    cin>> añoact;
    cout<< "Inserte el mes actual.>";
    cin>> mesact;
    cout<< "Inserte el dia actual.>";
    cin>> diaact;

    cout<< "Su edad es de: "<< CalcularEdad(añonaci, añoact, mesnaci, mesact, dianaci, diaact);


    return 0;
}