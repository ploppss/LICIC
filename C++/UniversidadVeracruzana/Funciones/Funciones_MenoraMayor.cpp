#include<iostream>

using namespace std;

void MostrarMenoraMayor(int n1, int n2){

    if (n1<n2){
        cout<< n1<< " es menor que "<< n2<< endl;
    }else {
    if (n2<n1){
        cout<< n2<< " es menor que "<< n1<< endl;
    }else {
        cout<< "Ambos numeros son iguales"<< n1<< "="<< n2;
    }
    }
}

int main(){
    int num1, num2;
    cout<< "Inserte un numero.>";
    cin>> num1;
    cout<< "Inserte un segundo numero.>";
    cin>> num2;

    MostrarMenoraMayor(num1, num2);

    return 0;
}