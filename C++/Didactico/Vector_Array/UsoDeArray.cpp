#include <iostream>
#include <array>
#include <string>

using namespace std;

int main() {
    array<string, 4> utiles = {"Lapiz", "Goma", "Sacapuntas", "Regla"};

// Paso 1: Imprime solo "Sacapuntas" usando el método .at()
    cout<< utiles.at(2)<< endl;
    cout<< " "<< endl;

// Imprime todos los elementos del array
    for (auto it = utiles.begin(); it != utiles.end(); ++it){
        cout << *it << endl;
    }
    cout<< " "<< endl;

// Imprime los elementos del array desde el incio hasta sacapuntas
    for (auto it = utiles.begin(); it!=utiles.end()-1; ++it){
        cout << *it << endl;
    }
    cout<<" "<< endl;
// Otras forma de escribir el ejemplo anterior

    // Detenerse cuando el valor sea "Regla"
        for (auto it = utiles.begin(); *it != utiles.at(3); ++it) {
            cout << *it << endl;
        }
        cout<< " "<< endl;
        for (auto it = utiles.begin(); *it != "Regla"; ++it) {
            cout << *it << endl;
        }

return 0;
}