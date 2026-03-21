#include <iostream>
using namespace std;

int main(){
    int Arr[10] = {4, 3, 2, 7, 10, 5, 6, 1, 8, 9};
    int n= sizeof(Arr)/sizeof(Arr[0]);

    // Imprimir el arreglo
    for (int i= 0; i<n; i++){
        cout<< Arr[i]<< " ";
    }
    cout<< endl;

    // Bucle i: Controla las "pasadas". 
    // Se repite n-1 veces para asegurar que todo se ordene.
    for (int i = 0; i < n - 1; i++) {
        // Bucle j: Es la "burbuja" que recorre el arreglo comparando parejas.
        // Usaremos 'n - 1' para mantenerlo simple como en tu ejemplo.
        for (int j = 0; j < n - 1; j++) {
            // Si el actual es MAYOR que el siguiente, están desordenados
            if (Arr[j] > Arr[j + 1]) {
                // --- Inicio del Intercambio Manual ---
                int temp = Arr[j];      // Guardamos el valor grande en temp
                Arr[j] = Arr[j + 1];    // Movemos el valor chico a la izquierda
                Arr[j + 1] = temp;      // Ponemos el valor grande a la derecha
                // --- Fin del Intercambio ---
            }
        }
    }
    // Imprimir el arreglo ordenado
    for (int i= 0; i<n; i++){
        cout<< Arr[i]<< " ";
    }

    cout<< "Arreglo ordenado exitosamente."<< endl;

return 0;
}