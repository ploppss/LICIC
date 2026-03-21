#include <iostream>
#include <clocale>
#include <string>

using namespace std;

void Leer1(string &string1);
void Leer2(string &string2);
void Desplegar1(string &string1);
void DesplegarReves1(string &string1);
string ConcatenarCadenas(string &string1, string &string2);
int Longitud2(string &string2);
bool Iguales1y2(string &string1, string &string2);
void Mayusculas1(string &string1);
int ContarPalabras2(string &string2);
void CuantasApariciones1(string &string1);
void ReemplazarLetra2(string &string2);
void BuscarSubCadena2(string &string2);
int ContarVocales1(string &string1);
void Palindromo2(string &string2);

int main(){
setlocale(LC_ALL, " ");
string cadena1;
string cadena2;
int opcion;
int salida= false;
    do {
        cout<< endl<< "===MENÚ DE CADENAS==="<< endl;
        cout<< "1. Leer cadena 1"<< endl; 
        cout<< "2. Leer cadena 2"<< endl; 
        cout<< "3. Desplegar cadena 1"<< endl; 
        cout<< "4. Desplegar al revés la cadena 1"<< endl; 
        cout<< "5. Concatenar cadena 1 y 2"<< endl; 
        cout<< "6. Longitud de la cadena 2"<< endl;
        cout<< "7. Decir si son iguales cadena 1 y 2"<< endl; 
        cout<< "8. Convertir a mayúscula la cadena 1"<< endl;
        cout<< "9. Contar palabras en la cadena 2"<< endl;
        cout<< "10. Pedir una letra y regresar cuántas veces aparece en la cadena 1"<< endl;
        cout<< "11. Reemplazar una letra por otra en la cadena 2"<< endl;
        cout<< "12. Buscar una subcadena (si/no) dentro de la cadena 2"<< endl;
        cout<< "13. Contar vocales de la cadena 1"<< endl;
        cout<< "14. ¿Es palíndromo la cadena 2?"<< endl;
        cout<< "15. Salir"<< endl;
        cout<< "Elija una opción.>";
        cin>> opcion;
        cin.ignore();
        switch(opcion){
            case 1:
                Leer1(cadena1);
                break;
            case 2:
                Leer2(cadena2);
                break;
            case 3: 
                Desplegar1(cadena1);
                break;
            case 4:
                DesplegarReves1(cadena1);
                break;
            case 5:
                cout<< "Las cadenas unidas son: "<< ConcatenarCadenas(cadena1, cadena2);
                break;
            case 6:
                cout<< "La longitud de la cadena 2 es de: "<< Longitud2(cadena2);
                break;
            case 7: 
                if (Iguales1y2(cadena1, cadena2)){
                    cout<< "Las cadenas SÍ son iguales."<< endl;
                }else {
                    cout<< "Las cadenas NO son iguales."<< endl;
                }
                break;
            case 8:
                Mayusculas1(cadena1);
                break;
            case 9:
                cout<< "La cantidad de palabras en la cadena 2 es: "<< ContarPalabras2(cadena2);
                break;
            case 10:
                CuantasApariciones1(cadena1);
                break;
            case 11:
                ReemplazarLetra2(cadena2);
                break;
            case 12:
                BuscarSubCadena2(cadena2);
                break;
            case 13:
                cout<< "La cantidad de vocales en la cadna 1 es: "<< ContarVocales1(cadena1);
                break;
            case 14:
                Palindromo2(cadena2);
                break;
            case 15:
                cout<< "Saliendo del menú . . ."<< endl;
                salida= true;
            default: 
                cout<< "ERROR. Por favor inserte una opción valida del menú."<< endl;
        }
    }while(salida !=true);

return 0;
}

void Leer1(string &string1){
    cout<< "Inserte la cadena 1.>";
    getline(cin, string1);
} 

void Leer2(string &string2){
    cout<< "Inserte la cadena 2.>";
    getline(cin, string2);
}

void Desplegar1(string &string1){
    cout<< "La cadena 1 es: "<< string1;
}

void DesplegarReves1(string &string1){
int lon= string1.size()-1;
    cout<< "La cadena 1 al revés es: ";
    for (int i=lon;i>=0; i--){
        cout<< string1[i];
    }
}

string ConcatenarCadenas(string &string1, string &string2){
string resultado;
    resultado= string1 + string2;
return resultado;
}

int Longitud2(string &string2){
int lon= string2.size();
return lon;
}

bool Iguales1y2(string &string1, string &string2){
bool comparacion;
    if (string1==string2){
        comparacion= true;
    }else {
        comparacion= false;
    }
return comparacion;
}

void Mayusculas1(string &string1){
int i= 0;
    while (string1[i]!= '\0'){
        if (string1[i]>= 'a' && string1[i]<= 'z'){
            string1[i]-= 32;
        }
        i++;
    }
    cout<< "La cadena escrita en mayúsculas es: "<< string1;
}

int ContarPalabras2(string &string2){
int cantPalabras;
int i= 1;
int j= 0;
    if(string2==""){
        i= 0;
    }
    while (string2[i]!= '\0'){
        if (string2[i]== 32){
            j++;
        }
        i++;
    }
    cantPalabras= j+1;
return cantPalabras;
}

void CuantasApariciones1(string &string1){
char letra;
int i= 0;
int j=0;
    cout<< "Inserte la letra que quiere contar dentro de la cadena 1.>";
    cin>> letra;

    while (string1[i]!= '\0'){
        if (string1[i]== letra){
            j++;
        }
        i++;
    }
    cout<< "La letra: "<< letra<< " aparece "<< j<< " veces dentro de la cadena."<< endl;
}

void ReemplazarLetra2(string &string2){
int pos;
char letra;

    cout<< "Inserte el lugar del arreglo que quiere reemplazar.>";
    cin>> pos;

    cout<< "Inserte la letra que insertará en dicho lugar.>";
    cin>> letra;

    string2[pos-1]= letra;

    cout<< "La cadena 2 ahora es: "<< string2;
}

void BuscarSubCadena2(string &string2){
string aux;
int i= 0;
int j= 0;
bool parcial= false;
    cout<< "Inserte la cadena que desea buscar dentro de la cadena 2.>";
    getline(cin, string2);

    while (string2[i]!= '\0'){
        if (string2[i]== aux[0]){
            while (aux[j]== string2[i+j] && aux[j]!= '\0' && string2[i+j]!= '\0'){
                if (aux[j]!= string2[i+j]){
                    parcial= true;
                    break;
                }
                if (aux[j]== '\0' && string2[i+j]== '\0'){
                    parcial= false;
                }
                j++;
            }
        }
        i++;
    }
    if (j== aux.size()-1 || parcial!= true){
        parcial= false;
        cout<< "La cadena que inserto si se encuentra dentro de la cadena 2"<< endl;
    }
    if (parcial){
        cout<< "La cadena que insertó se encuentra parcialmente dentro de la cadena 2"<< endl;
    }

}

int ContarVocales1(string &string1){
int i= 0;
int vocales= 0;
    while (string1[i]!= '\0'){
        if (string1[i]== 'a' || string1[i]== 'e' || string1[i]== 'i' || string1[i]== 'o' || string1[i]== 'u' ){
            vocales++;
        }
        if (string1[i]== 'A' || string1[i]== 'E' || string1[i]== 'I' || string1[i]== 'O' || string1[i]== 'U' ){
            vocales++;
        }
        i++;
    }
return vocales;
}

void Palindromo2(string &string2){
string aux;
int j= 0;
int lon= string2.size();
    for (int i=lon;i>=0; i--){
        aux[j]= string2[i];
        j++;
    }
    if (string2==aux){
        cout<< "La cadena 2 SÍ es palíndroma."<< endl;
    } else {
        cout<< "La cadena 2 NO es palíndroma."<< endl;
    }
}