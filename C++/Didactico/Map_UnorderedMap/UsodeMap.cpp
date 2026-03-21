#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
// Se declara el mapa
    map<string, int> NombresyEdades;

// Se insertan 3 elementos
    NombresyEdades["Zayra"]= 25;
    NombresyEdades["Luis"]= 21;
    NombresyEdades["Rafael"]= 12;

// Se imprimen todos los pares
    cout<< "Los nombres y las edades son:"<< endl;
    for (const auto &elemento:NombresyEdades) {
        string nombre = elemento.first;  // La clave
        int edad = elemento.second;      // El valor

        cout << "Nombre: " << nombre << ", edad: " << edad << endl;
    }
    cout<< endl;
    /*Es importante notar como en la salida aparecen ordenados alfabeticamente
      aunque al declararse no esten en orden.
    */

// Se accede a uno de los valores
    cout<< "La edad de Zayra es "<< NombresyEdades["Zayra"]<< endl;

// Se modifica el valor de una clave
    NombresyEdades["Luis"]= 22;

// Se obtine el tamaño de la lista
    cout<< "La lista tiene "<< NombresyEdades.size()<< " personas "<< endl;

// Verificamos si existe la clave "Jose"
    if (NombresyEdades.count("Jose")){
        cout<< "Jose esta dentro de la lista"<< endl;
    }else {
        cout<< "Jose no esta dentro de la lista"<< endl;
    }

// Se borra el nombre de Zayra de la lista
    cout<< "Eliminando a Zayra de la lista . . ."<< endl;
    NombresyEdades.erase("Zayra");

// Se verifica el tamaño final de la lista
    cout<< "Ahora la lista tiene "<< NombresyEdades.size()<< " personas"<< endl;

return 0;
}