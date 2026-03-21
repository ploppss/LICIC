#include <iostream>

using namespace std;

unsigned long long fibonacci(int n);

int main(){
system ("chcp 65001");
setlocale (LC_ALL, " ");
system("cls");
int num;

    cout<< "Inserte la posicion de la secuencia de Fibonacci que desea conocer.>";
    cin>> num;
    if (num<0){
        cout<< "ERROR. La secuencia de Fibonacci no esta definida"<< endl;
    }else {
        cout<< "El número en la posición "<< num<< " de la secuencia de Fibonacci es: "<< fibonacci(num)<< endl;
    }

return 0;
}

unsigned long long fibonacci(int n){
    
    if (n<= 1){
        return n;
    }

return fibonacci(n-1) + fibonacci(n-2);
}