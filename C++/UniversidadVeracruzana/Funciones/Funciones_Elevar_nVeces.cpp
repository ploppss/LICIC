#include <iostream>

using namespace std;

long long ElevarAaXVeces(int A, int X){
    long long NumAElevar= A;
    for(long long i=1; i<X; i++){
        A= NumAElevar*A;
    }
return A;
}

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");
long long num1, num2;

    cout<< "Inserte un número.>";
    cin>>num1;
    cout<< endl;
    cout<< "Inserte el número al que se elevará el número anterior.>";
    cin>>num2;
    cout<< endl;

    cout<< "El resultado es: "<< ElevarAaXVeces(num1, num2)<< endl;

return 0;
}