#include <iostream>

using namespace std;

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");
int nums[5];
int sumaPares= 0;
    for (int i=0; i<5; i++){

        cout<< "Introduzca un número.>";
        cin>> nums[i];
    }

    cout<< "Los números que introdujo son:"<< endl;

    for (int i=0; i<5; i++){

        cout<<nums[i]<< " ";
    }

    cout<< endl<< "Los números pares son: "<< endl;

    for (int i=0; i<5; i++){

        if( nums[i]%2==0 ){
            sumaPares++;
            cout<< nums[i]<< " ";

        }
    }

    cout<< endl<< "Total de números pares: "<< sumaPares<< endl;

return 0;
}