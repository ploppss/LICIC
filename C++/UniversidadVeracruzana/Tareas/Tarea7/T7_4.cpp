#include <iostream>

using namespace std;
int IdentificarPrimo(int num){
    int Id;

    if (num%1==0 && num%num==0 && !(num%2==0 || num%3==0 || num%5==0)){
        return 1;
    }
    if (num==2 || num==3 || num==5){
        return 1;
    }
    if (num%2==0 || num%3==0 || num%5==0){
        return 0;
    }
}

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");
int numero;
    cout<< "Introduzca un número.>";
    cin>> numero;
    cout<< "Si es primo el resultado será 1, de no serlo será 0."<< endl;
    cout<< "Resultado: "<< IdentificarPrimo(numero);


return 0;
}