#include<iostream>

using namespace std;

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");
int matriz [3][3];
int filas= 3;
int columnas= 3;
int mayor;
int menor;
int filaMayor;
int columnaMayor;
int filaMenor;
int columnaMenor;

    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            cout<< "Inserte un número para la fila: "<< i+1<< " columna: "<< j+1<< ".>";
            cin>> matriz[i][j];
        }
        cout<< endl;
    }

    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            cout<< matriz[i][j]<< " ";
        }
        cout<< endl;
    }

    mayor= matriz[0][0];
    menor= matriz[0][0];

    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            if (mayor<matriz[i][j]){
                mayor= matriz[i][j];
                filaMayor= i;
                columnaMayor= j;
            }
        }
    }

    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            if (menor>matriz[i][j]){
                menor= matriz[i][j];
                filaMenor= i;
                columnaMenor= j;
            }
        }
    }

    cout<< endl;

    cout<< "Número mayor: "<< mayor<< endl;
    cout<< "Número menor: "<< menor<< endl;

    cout<< endl;

    cout<< "Posición del número mayor"<< "("<<mayor<< ")"<< ":"<< endl;
    cout<< "Fila: "<< filaMayor+1<< "--Columna: "<< columnaMayor+1<< endl;

    cout<< endl;

    cout<< "Posición del número menor"<< "("<<menor<< ")"<< ":"<< endl;
    cout<< "Fila: "<< filaMenor+1<< "--Columna: "<< columnaMenor+1<< endl;
    
return 0;
}