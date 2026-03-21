#include <iostream>

using namespace std;

void MostrarNumeroConLetra(int n){
    if (n>=0 && n<=9){

        switch (n){
        case 0:
            cout<< "Cero."<< endl;
            break;
        case 1:
            cout<< "Uno."<< endl;
            break;
        case 2:
            cout<< "Dos."<< endl;
            break;
        case 3:
            cout<< "Tres."<< endl;
            break;
        case 4:
            cout<< "Cuatro."<< endl;
            break;
        case 5:
            cout<< "Cinco."<< endl;
            break;
        case 6:
            cout<< "Seis."<< endl;
            break;
        case 7:
            cout<< "Siete."<< endl;
            break;
        case 8:
            cout<< "Ocho."<< endl;
            break;
        case 9:
            cout<< "Nueve."<< endl;
            break;
        default:
            break;
        }

    }else{
        cout<< "ERROR. Inserte un número válido"<< endl;
    }
}

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");
int num;

    cout<< "Inserte un número del 0 al 9.>";
    cin>> num;

    MostrarNumeroConLetra(num);


return 0;
}