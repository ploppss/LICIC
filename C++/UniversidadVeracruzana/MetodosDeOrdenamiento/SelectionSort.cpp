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

    for (int i = 0; i < n - 1; i++) {
        
        // Paso 1: Asumimos que el primero de la parte desordenada es el menor
        int menor = i;
        
        // Paso 2: Buscamos en el resto de la fila si hay alguien más pequeño
        // J empieza en i + 1 porque no tiene sentido compararse consigo mismo
        for (int j = i + 1; j < n; j++) {
            
            // Si encontramos un número menor al que creíamos el mínimo...
            if (Arr[j] < Arr[menor]) {
                menor = j; // ...actualizamos la posición del nuevo mínimo.
                // OJO: Aquí NO intercambiamos todavía. Solo "apuntamos" al candidato.
            }
        }

        // Paso 3: Intercambio (SWAP)
        // Solo intercambiamos SI encontramos un candidato mejor que el original (i)
        // Aunque intercambiar consigo mismo no rompe nada, evitarlo es elegante.
        if (menor != i) {
            int temp = Arr[i];
            Arr[i] = Arr[menor];
            Arr[menor] = temp;
        }
    }

    // Imprimir el arreglo ordenado
    for (int i= 0; i<n; i++){
        cout<< Arr[i]<< " ";
    }

    cout<< "Arreglo ordenado exitosamente."<< endl;

return 0;
}