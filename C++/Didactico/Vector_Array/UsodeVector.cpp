#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    system("cls");
    string resp;
    int calif;
    int selind;
    vector<int> calificaciones = {85, 92, 78, 88, 95};

    cout << "Calificaciones originales:" << endl;
    for (int calificacion : calificaciones) {
        cout << calificacion << " ";
    }
    cout << "\n" << endl;

// 1. Imprime la calificación en el índice 1 (la segunda calificación) usando .at()
    cout<< calificaciones.at(1);
    cout<< "\n "<< endl;

// 2. Cambia el valor en el último índice a 100 usando []
    calificaciones.pop_back();
    calificaciones.push_back(100);
        //Forma mas directa
        calificaciones[4]= 100;
        /*El primer metodo primero elimina y luego escribe un nuevo valor
        mientras que el segundo metodo reescribe el valor que ya esta en
        la posicion.*/


    cout << "Calificaciones:" << endl;
    for (int calificacion : calificaciones) {
        cout << calificacion << " ";
    }
    cout << endl;

    cout<<"Desea agregar alguna otra calificacion?(Si/No).>";
    cin>> resp;

    if (resp=="Si" || resp=="si"){
        cout<< "Inserte la el puntaje de la calificacion que agregara:";
        cin>> calif;
        calificaciones.push_back(calif);
        cout<< "\n "<< endl;
    }else{
        cout<<"Esta bien.";
        cout<< "\n "<< endl;
    }

    cout<< "Calificaciones finales:"<< endl;

    for (int calificacion : calificaciones) {
        cout << calificacion << " ";
    }
    cout << endl;

// 3. Uso del método .erase()

    calificaciones.erase(calificaciones.begin()+2);

    cout<<"Las calificaciones se han modificado. Se ha borrado la 3ra calificacion de la lista"<< endl;
    cout<< "Calificaciones finales:"<< endl;

    for (int calificacion : calificaciones) {
        cout << calificacion << " ";
    }
    cout << endl;
    
// Uso de .erase() en la terminal

    cout<< "Desea borrar alguna otra calificacion?(Si/No).>";
    cin>> resp;

    if (resp=="Si"||resp=="si"){
        do {
            cout<< "Si desea salir del menu de borrado de calificacion, inserte un numero fuera del rango del indice."<< endl;
            cout << endl;
            cout<< "Que calificacion desea borrar?(Por favor use un indice en base a la lista anterior 1-"<< calificaciones.size()<< ").>";
            cin>>selind;

            selind-=1;

            if(selind>=0 && selind < calificaciones.size()){
                calificaciones.erase(calificaciones.begin()+selind);

            }else{
                cout<< "Saliendo del menu de borrado..."<< endl;
            }

        }while (selind>=0 && selind < calificaciones.size());
        
    }else {
        cout<< "Esta bien."<< endl;
        cout<< "\n "<< endl;
    }

// Lista final de calificaciones

    cout<< "Calificaciones finales:"<< endl;
    for(int calificacion: calificaciones){
        cout<< calificacion<< " ";
    }
    cout<< " "<< endl;

    return 0;
}