#include<iostream>

using namespace std;

long double CalcularCubo(long double num){
    long double resultado;
    resultado= num*num*num;
return resultado;
}

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");

    long double numero;
    cout<< "Por favor inserte un número real.>";
    cin>> numero;

    cout<< "===================="<< endl;
    cout<<"El cubo del numero que insertó es: "<< CalcularCubo(numero);

return 0;
}