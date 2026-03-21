#include <iostream>
#include <string>
using namespace std;
string PalabraOG;
void PedirPalabra(){
    cout<< "Por favor, inserte una palabra (no deje espacios al final).>";
    cin>>PalabraOG;
    cout<< endl;
}

void EncriptarPalabra(string Palabra){
    int CiclosEncriptado;
    cout<< "Cuántas veces desea encriptar la palabra?>";
    cin>> CiclosEncriptado;
    for (int i=1; i<=CiclosEncriptado; i++){
    cout<< "Encriptando palabra . . ."<< endl;
        for (int i= 0; i<=Palabra.length();i++){
            Palabra[i]+= 2;
        }
    }
    cout<< "Palabra encriptada:"<< Palabra<< endl;

}

void DesencriptarPalabra(string &Palabra){
    cout<< "Palabra original: "<< Palabra<< endl;

}

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");
int opcion;
bool salida=false;

    do{
        cout<<endl<< "===MENÚ DE ENCRIPTACIÓN==="<< endl;
        cout<< "1. Insertar Palabra."<< endl;
        cout<< "2. Encriptar Palabra."<< endl;
        cout<< "3. Desencriptar."<< endl;
        cout<< "4. Salir"<< endl;
        cout<< "Elija una opcion.>";
        cin>> opcion;
        cin.ignore();
        
        switch(opcion){
            case 1:

                cout<<"---"<< endl;
                PedirPalabra();
                break;

            case 2:
            
                EncriptarPalabra(PalabraOG);
                break;

            case 3:

                cout<<"---"<< endl;
                DesencriptarPalabra(PalabraOG);
                break;

            case 4:
            
                cout<<"---"<< endl;
                cout<< endl<< "Saliendo del menú . . ."<< endl;
                salida= true;
                break;

            default:

                cout<<"---"<< endl;
                cout<< "ERROR. Por favor inserte una opción válido"<< endl;
                break;

        }
        
    }while(salida== false);
system("pause");
return 0;
}