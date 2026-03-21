#include <iostream>
using namespace std;

// Recibimos el arreglo y su tamaño n
void BubbleSort(int Arr[], int n) {
    // Bucle i: Controla las "pasadas". 
    // Se repite n-1 veces para asegurar que todo se ordene.
    for (int i = 0; i < n - 1; i++) {
        
        // Bucle j: Es la "burbuja" que recorre el arreglo comparando parejas.
        // Usaremos 'n - 1' para mantenerlo simple como en tu ejemplo.
        for (int j = 0; j < n - 1; j++) {
            
            // Si el actual es MAYOR que el siguiente, e1stán desordenados
            if (Arr[j] > Arr[j + 1]) {
                
                // --- Inicio del Intercambio Manual ---
                int temp = Arr[j];      // Guardamos el valor grande en temp
                Arr[j] = Arr[j + 1];    // Movemos el valor chico a la izquierda
                Arr[j + 1] = temp;      // Ponemos el valor grande a la derecha
                // --- Fin del Intercambio ---
            }
        }
    }
}

void SelectionSort(int Arr[], int n) {
    // Bucle i: Indica dónde empieza la parte DESORDENADA.
    // Avanza de izquierda a derecha.
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
}

void InsertionSort(int arr[], int n) {
    int i, j, aux;
    
    // Empezamos desde el SEGUNDO elemento (índice 1)
    // porque asumimos que el primero (índice 0) ya está "ordenado"
    for (i = 1; i < n; i++) {
        aux = arr[i]; // Guardamos el valor actual (la carta que queremos insertar)
        j = i - 1;    // Empezamos a comparar con el vecino de la izquierda

        /* Mover los elementos del arreglo que sean mayores que la 'key'
           a una posición adelante de su posición actual */
        while (j >= 0 && arr[j] > aux) {
            arr[j + 1] = arr[j]; // Desplazamos el elemento grande a la derecha
            j = j - 1;           // Nos movemos más a la izquierda para seguir comparando
        }
        
        // Insertamos la 'key' en su lugar correcto (el hueco que quedó)
        arr[j + 1] = aux;
        
    }
}

int main() {
    setlocale(LC_ALL, " ");

    int numeros[10] = {4, 3, 2, 7, 10, 5, 6, 1, 8, 9};
    
    // Cálculo clásico del tamaño del arreglo
    int n = sizeof(numeros) / sizeof(numeros[0]);

    cout << "Arreglo original: ";
    for(int i=0; i<n; i++) cout << numeros[i] << " ";
    cout << endl;
    // Llamada a la función
    //BubbleSort(numeros, n);

    // Llamada a la función
    //SelectionSort(numeros, n);

    // Llamada a la función
    //InsertionSort(numeros, n);

    cout<< "Arreglo ordenado: ";
    for (int i=0; i<n; i++) cout<< numeros[i]<< " ";
    cout<< endl;

    return 0;
}