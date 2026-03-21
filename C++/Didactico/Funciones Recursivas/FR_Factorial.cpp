#include <iostream>

using namespace std;

long Sumatoria(long x);

int main(){
    system("chcp 65001");
    setlocale(LC_ALL," ");
    system("cls");
    long num;
    cout<< "Inserte un número para obtener su sumatoria.>";
    cin>> num;

    cout<< "El factorial de ese número es: ";
    cout<< Sumatoria(num)<< endl;

return 0;
}

long Sumatoria(long x){
    
    if (x==0){
        return 0;
    }

return x*Sumatoria(x-1);
}