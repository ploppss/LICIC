#include <iostream>
using namespace std;

int main(){

// Llamado a funcion que hace que el codigo reconozca todos los caracteres como la ñ
    setlocale(LC_ALL, "");

    int num;
    cout<< "Hola Jose."<< endl;
    cout<< "Introduce un numero."<< endl;
    cin>> num;
    cout<< endl<< "El numero que se introdujo es: "<< num<< endl;

system ("pause");

// Estructura if
    int a1;
    int b1;
    cout<< "Inserte un numero."<< endl;
    cin>> a1;
    cout<< "Inserte un segundo numero."<< endl;
    cin>> b1;

    if (a1>b1){
        cout<<"El priner numero es mayor."<< endl;
    }else{
        cout<< "El segundo numero es menor o ambos son igual."<< endl;
    }

system ("pause");

// Estructura switch
    int sel1;
    cout << "Inserte un numero del 1 al 9."<< endl;
    cin>> sel1;

    switch (sel1){
    case 1:
        cout<< "El numero es impar."<< endl;
        break;
    case 2:
        cout<< "El numero es par."<< endl;
        break;
    case 3:
        cout<< "El numero es impar."<< endl;
        break;
    case 4:
        cout<< "El numero es par."<< endl;
        break;
    case 5:
        cout<< "El numero es impar."<< endl;
        break;
    case 6:
        cout<< "El numero es par."<< endl;
        break;
    case 7:
        cout<< "El numero es impar."<< endl;
        break;
    case 8:
        cout<< "El numero es par."<< endl;
        break;
    case 9:
        cout<< "El numero es impar."<< endl;
        break;

    default:
        cout<< "El numero no corresponde al rango."<< endl;
        break;
    }
 
system ("pause");

// Otra forma de usar switch
    int sel2;
    cout << "Inserte un numero del 1 al 9."<< endl;
    cin>> sel2;

    switch (sel2){
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
        cout<< "El numero es impar"<< endl;
        break;
    case 2:
    case 4:
    case 6:
    case 8:
        cout<< "El numero es par"<< endl;
        break;
    default:
        cout<< "El numero no corresponde al rango."<< endl;
        break;
    }

system ("pause");

// Estructura while

    int a2= 8;
    int b2= 20;

    cout<< "El primer numero es 8 y el segundo numero es 20"<< endl;

    while (a2<b2){
        cout<< "El primer numero es menor que el segundo"<< endl;
        cout<< "Sumando 1 al primer numero..."<< endl;
        a2++;
    }

    cout<< "Al final del proceso el primer numero es: "<< a2;
    cout<< "Al final del proceso el segundo numero es: "<< b2;
    
system ("pause");

// Estructura for
    cout<< "Sucesion numerica del 0 al 4"<< endl;
    for (int i=0, j=10; i<j; i++, j--){
        cout<< i<< ", ";
    }
    cout<< endl;
    // Valores iniciales 0 y 10, 1 y 9, 2 y 8, 3 y 7, 4 y 6, 5 y 5, el 5 ya se escribe por que son iguales.

// Estructura do while y comprativa con while
    int a3=20;
    int b3=10;

    while (a3<b3){
        cout<< a3<< " "<< endl;
        a3++;
    }
//La estructura while primero evalua y luego ejecuta.
    do{
        cout<< a3<< " "<< endl;
        a3++;
    } while (a3<b3);
//La estructura do while primero ejecuta y luego evalua.  
    return 0;
}
