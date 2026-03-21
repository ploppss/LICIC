#include <iostream>

using namespace std;

int main(){
system ("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");
int edades[3][2]= {{1,2},{3,4},{5,6}};
int filas= 3;
int columnas= 2;
/*
    IMPRIME
    1 2
    3 4
    5 6
*/
    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            cout<< edades[i][j]<< " ";
        }
        cout<< endl;
    }

    cout<< endl;
/*
    IMPRIME 
    1 3 5
    2 4 6
*/
    for (int i=0; i<columnas; i++){
        for (int j=0; j<filas; j++){
            cout<< edades[j][i]<< " ";
        }
        cout<< endl;
    }

    cout<< endl;
/*
    IMPRIME
    6 5 
    4 3
    2 1
*/
    for (int i=filas-1; i>=0; i--){
        for (int j=columnas-1; j>=0; j--){
            cout<< edades[i][j]<< " ";
        }
        cout<< endl;
    }
return 0;
}