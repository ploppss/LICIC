#include <iostream>

using namespace std;

int LongitudArreglo(char Array[]);
int LongArrSinEspacios(char Array[]);

void ConvertirArregloMinusculas(char Array[]);
void CompararArreglos(char Array[], char Array2[]);
void ConcatenarArreglos(char Array[], char Array2[]);
void ExtraerArreglo(char Array[], int start, int len);
void BuscarInformacion(char Array[], char Array2[]);

int main(){
setlocale(LC_ALL, " ");

int opMenu= 0;
bool exit= false;
char arreglo[100];
char arreglo2[100];
int arrStart, arrLen;


    do {
        system("cls");
        cout<< endl<< "===MENU DE ARREGLOS==="<< endl;
        cout<< "1. Calcular la longitud del arreglo."<< endl;
        cout<< "2. Comparar arreglos."<< endl;
        cout<< "3. Concatenar arreglos."<< endl;
        cout<< "4. Extraer un arreglo."<< endl;
        cout<< "5. Buscar información dentro de un arreglo."<< endl;
        cout<< "6. Salir."<< endl;
        cout<< "Elija una opción.>";
        cin>> opMenu;

        switch(opMenu){
        case 1:
            cout<< "Escribe.>";
            cin.ignore();
            cin.getline(arreglo, 100);
            cout<< "El arreglo:"<< arreglo<< ", tiene "<<LongitudArreglo(arreglo)<< " caracteres."<< endl;
            cout<< "Tamaño sin espacios: "<< LongArrSinEspacios(arreglo)<< endl;
            system("pause");
            break;   
        case 2:
            cout<< "Escribe el primer arreglo.>";
            cin.ignore();
            cin.getline(arreglo, 100);
            cout<< endl;

            cout<< "Escriba el arreglo con el que desea compararlo.>";
            //cin.ignore(); no es necesario dos veces
            cin.getline(arreglo2, 100);
            cout<< endl;

            CompararArreglos(arreglo, arreglo2);
            system("pause");
            break;
        case 3:
            cout<< "Escribe el primer arreglo.>";
            cin.ignore();
            cin.getline(arreglo, 100);
            cout<< endl;

            cout<< "Escriba el arreglo con el que desea contatenarlo.>";
            //cin.ignore(); no es necesario dos veces
            cin.getline(arreglo2, 100);
            cout<< endl;

            ConcatenarArreglos(arreglo, arreglo2);
            system("pause");
            break;
        case 4:
            cout<< "Escribe el arreglo de donde deseas extraer información.>";
            cin.ignore();
            cin.getline(arreglo, 100);
            cout<< endl;

            cout<< "Escribe desde que posición quieres extraer información.>";
            cin>> arrStart;

            cout<< "Escribe cuantos caracteres quieres extraer.>";
            cin>>arrLen;
            cout<< endl;

            ExtraerArreglo(arreglo, arrStart, arrLen);
            system("pause");
            break;
        case 5:
            cout<< "Escribe el arreglo donde deseas buscar información.>";
            cin.ignore();
            cin.getline(arreglo, 100);
            cout<< endl;

            cout<< "Escribe lo que quieres buscar.>";
            //cin.ignore(); no es necesario dos veces
            cin.getline(arreglo2, 100);
            cout<< endl;

            BuscarInformacion(arreglo, arreglo2);
            system("pause");
            break;
        case 6:
            cout<< "Saliendo del menú . . ."<< endl;
            exit= true;
            system("pause");
            break;
        default:
            cout<< "ERROR. Por favor elija una opción valida."<< endl;
            system("pause");
            break;
        }

    } while(!exit);

    
return 0;
}

int LongitudArreglo(char Array[]){
int longitud= 0;
int i= 0;
    while (Array[i]!= '\0'){
        i++;
    }

    longitud= i;

return longitud;
}

int LongArrSinEspacios(char Array[]){
int longitud= 0;
int i= 0;
int j= 0;
    while (Array[i]!='\0'){
        if(Array[i]==32){
            j++;
        }
        i++;
    }

    longitud= i-j;

return longitud;
}

void ConvertirArregloMinusculas(char Array[]){
    int i= 0;
    while (Array[i]!= '\0'){
        if(Array[i]>='A' && Array[i]<='Z'){
            Array[i]+= 32;
        }
        i++;
    }

}

void CompararArreglos(char Array[], char Array2[]){
bool diferencia= false;

    ConvertirArregloMinusculas(Array);
    ConvertirArregloMinusculas(Array2);

    for (int i=0, j=0;i<100 && j<100;i++, j++){
        if (Array[i]!=Array2[j]){
            diferencia= true;
            break;
        }
        if(Array[i]=='\0' && Array2[j]=='\0'){
            diferencia= false;
            break;
        }
    }
     
    if (diferencia==true){
        cout<< endl<< "Los arreglos son diferentes."<< endl;
    } else{
        cout<< endl<< "Los arreglos son iguales"<< endl;
    }
}

void ConcatenarArreglos(char Array[], char Array2[]){
char arreglo[200];
int i= 0;
int j= 0;

    while (Array[i]!='\0'){
        arreglo[i]= Array[i];
        i++;
    }

    while (Array2[j]!='\0'){
        arreglo[i]=Array2[j];
        i++;
        j++;
    }
    arreglo[i]= '\0';

    cout<< "Los dos arreglos concatenados son: "<< arreglo<< endl;
}

void ExtraerArreglo(char Array[], int start, int len){
char arreglo[100];
int i= 0;
int j= 0;
    while (Array[i]!= '\0'){
        if (i==start-1){
            while (j<len){
                arreglo[j]= Array[i+j];
                j++;
                if (j==len){
                    arreglo[j]='\0';
                }
            }
        }
        i++;
    }
    cout<< "El arreglo extraido es: "<< arreglo<< endl;
}

void BuscarInformacion(char Array[], char Array2[]){
int i= 0;
int j= 0;
int posicion= 0;
bool encontradoparcial= false;
bool encontradocompleto= false;

    ConvertirArregloMinusculas(Array);
    ConvertirArregloMinusculas(Array2);

    while (Array[i]!= '\0'){
        if (Array[i]==Array2[0]){
            encontradoparcial= true;
            posicion= i;
            j= 0;
            while (Array2[j]!='\0' && Array[i+j]!='\0' && Array[i+j]==Array2[j]) {
                j++;
            }
            if ((j==LongitudArreglo(Array2))){
            encontradocompleto = true;
            encontradoparcial= false;
            break;
            }
        }
        i++;
    }

    if (encontradoparcial==true){
        cout<< "La información fue parcialmente encontrada en la posición: "<< posicion+1 << endl;
    }

    if(encontradocompleto==true){
    cout<< "La información fue encontrada por completo a partir de la posición: "<< posicion+1 << endl;
    }
}