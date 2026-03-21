#include <iostream>

using namespace std;

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");

int calificaciones[5];
int sumaCalif= 0;
double promedio= 0;
bool vali= true;

    do {
        cout<< "Por favor inserta tu primera calificación.";
        cin>> calificaciones[0];
        if (calificaciones[0]<0 || calificaciones[0]>10){
            cout<< "ERROR. Por favor inserte un número entre 0 y 10."<< endl;
            vali= false;
        }else{
            vali= true;
        }
    }while(vali==false);

    do {
        cout<< "Por favor inserta tu segunda calificación.";
        cin>> calificaciones[1];
        if (calificaciones[1]<0 || calificaciones[1]>10){
            cout<< "ERROR. Por favor inserte un número entre 0 y 10."<< endl;
            vali= false;
        }else{
            vali= true;
        }
    }while(vali==false);

    do {
        cout<< "Por favor inserta tu tercera calificación.";
        cin>> calificaciones[2];
        if (calificaciones[2]<0 || calificaciones[2]>10){
            cout<< "ERROR. Por favor inserte un número entre 0 y 10."<< endl;
            vali= false;
        }else{
            vali= true;
        }

    }while(vali==false);

    do {
        cout<< "Por favor inserta tu cuarta calificación.";
        cin>> calificaciones[3];
        if (calificaciones[3]<0 || calificaciones[3]>10){
            cout<< "ERROR. Por favor inserte un número entre 0 y 10."<< endl;
            vali= false;
        }else{
            vali= true;
        }
    }while(vali==false);

    do {
        cout<< "Por favor inserta tu quinta calificación.";
        cin>> calificaciones[4];
        if (calificaciones[4]<0 || calificaciones[4]>10){
            cout<< "ERROR. Por favor inserte un número entre 0 y 10."<< endl;
            vali= false;
        } else{
            vali= true;
        }
        
    } while(vali==false);

    for (int i=0; i<5; i++){
        sumaCalif+= calificaciones[i];
    }

    promedio= sumaCalif/5;

    cout<< "La suma de sus calificaciones es: "<< sumaCalif<< endl;
    cout<< "Su promedio es de: "<< promedio<< endl;

return 0;
}