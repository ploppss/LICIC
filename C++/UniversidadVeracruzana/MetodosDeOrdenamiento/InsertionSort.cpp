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
    // Variables necesarias para el InsertionSort
    int i, j, aux;    
    // Empezamos desde el SEGUNDO elemento (índice 1)
    // porque asumimos que el primero (índice 0) ya está "ordenado"
    for (i = 1; i < n; i++) {
        aux = Arr[i]; // Guardamos el valor actual (la carta que queremos insertar)
        j = i - 1;    // Empezamos a comparar con el vecino de la izquierda
        /* Mover los elementos del arreglo que sean mayores que el auxiliar
           a una posición adelante de su posición actual */
        while (j >= 0 && Arr[j] > aux) {
            Arr[j + 1] = Arr[j]; // Desplazamos el elemento grande a la derecha
            j--;           // Nos movemos más a la izquierda para seguir comparando
        }
        // Insertamos el auxiliar en su lugar correcto (el hueco que quedó)
        Arr[j + 1] = aux;
        
    }

    // Imprimir el arreglo ordenado
    for (int i= 0; i<n; i++){
        cout<< Arr[i]<< " ";
    }

    cout<< "Arreglo ordenado exitosamente."<< endl;
    
return 0;
}