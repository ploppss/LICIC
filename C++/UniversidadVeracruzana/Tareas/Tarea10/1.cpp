#include <iostream>
#include <clocale>

using namespace std;

void LeerArreglo(int array[]);
void DesplegarArreglo(int array[]);
void DesplegarReves(int array[]);
long SumarElementos(int array[]);
double PromediarElementos(int array[]);
int EncontrarMayor(int array[]);
int EncontrarMenor(int array[]);
void DesplegarPares(int array[]);
int ContarNones(int array[]);

int main(){
setlocale(LC_ALL, " "); 
int numeros[5];
int opcion;
bool salida= false;

    do {
        cout<< endl<< "===MENU DE ARREGLOS=="<< endl;
        cout<< "1. Leer arreglo."<< endl;
        cout<< "2. Desplegar arreglo."<< endl;
        cout<< "3. Desplegar al revés."<< endl;
        cout<< "4. Sumar elementos del arreglo."<< endl;
        cout<< "5. Promediar elementos. "<< endl;
        cout<< "6. Encontrar el mayor."<< endl;
        cout<< "7. Encontrar el menor."<< endl;
        cout<< "8. Desplegar los pares."<< endl;
        cout<< "9. Contar los nones."<< endl;
        cout<< "10. Salir del menú."<< endl;
        cout<< "Elija una opción.>";
        cin>> opcion;

        switch(opcion){
            case 1:
                LeerArreglo(numeros);
                break;
            case 2:
                DesplegarArreglo(numeros);
                cout<< endl;
                break;
            case 3: 
                DesplegarReves(numeros);
                cout<< endl;
                break;
            case 4:
                cout<< "La suma de los elementos es: "<< SumarElementos(numeros);
                cout<< endl;
                break;
            case 5:
                cout<< "El promedio de los elementos es: "<< PromediarElementos(numeros);
                cout<< endl;
                break;
            case 6:
                cout<< "El número mayor del arreglo es: "<< EncontrarMayor(numeros);
                cout<< endl;
                break;
            case 7: 
                cout<< "El número menor del arreglo es: "<< EncontrarMenor(numeros);
                cout<< endl;
                break;
            case 8: 
                DesplegarPares(numeros);
                break;
            case 9:
                cout<< "La cantidad de elementos nones dentro del arreglo es de: "<< ContarNones(numeros);
                cout<< endl;
                break;
            case 10:
                cout<< endl<< "Saliendo del menú . . ."<< endl;
                salida= true;
                break;
            default:
                cout<< endl<< "ERROR. Por favor inserte una opción valida del menú."<< endl;
            break;
        }
    }while(salida!=true);

return 0;
}

void LeerArreglo(int array[]){
    for(int i=0;i<5;i++){
        cout<< "Inserte el elemento número "<< i+1<< " del arreglo.";
        cin>>array[i];
    }
}

void DesplegarArreglo(int array[]){
    cout<< endl<< "Los elementos del arreglo son:"<< endl;
    for(int i=0;i<5;i++){
        if (i==4){
            cout<< array[i];
            return;
        }
        cout<< array[i]<< ", ";
    }
}

void DesplegarReves(int array[]){
    cout<< endl<< "Los elementos del arreglo AL REVÉS son:"<< endl;
    for(int i=4;i>=0;i--){
        if (i==0){
            cout<< array[i];
            return;
        }
        cout<< array[i]<< ", ";
    }
}

long SumarElementos(int array[]){
long suma= 0;
    for(int i=0;i<5;i++){
        suma+=array[i];
    }
return suma;
}

double PromediarElementos(int array[]){
double promedio= 0;

    promedio= SumarElementos(array)/5;

return promedio;
}

int EncontrarMayor(int array[]){
int mayor= array[0];
    for (int i=0; i<5; i++){
        if (mayor<array[i]){
            mayor= array[i];
        }
    } 
return mayor;
}

int EncontrarMenor(int array[]){
int menor= array[0];
    for (int i=0; i<5; i++){
        if (menor>array[i]){
            menor= array[i];
        }
    } 
return menor;
}

void DesplegarPares(int array[]){
    for (int i=0; i<5; i++){
        if(array[i]%2==0){
            cout<< "El elemento "<< array[i]<< " es par."<< endl;
        }
    }
}

int ContarNones(int array[]){
int cantNones= 0;
    for (int i=0; i<5; i++){
        if(array[i]%2!=0){
            cantNones++;
        }
    }
return cantNones;
}