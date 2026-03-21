#include <iostream>

using namespace std;

void MostrarTablaDeMul(int num){
    for(int i=1;i<=10;i++)
    cout<< num<< "*"<< i<< "="<< num*i<< endl;
}

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");
int numero;
    cout<< "Introduzca un número.>";
    cin>> numero;

    MostrarTablaDeMul(numero);

return 0;
}