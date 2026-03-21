#include <iostream>

using namespace std;

void cuentaAtras(int n) {
    // Caso Base: Si el número es cero o menor, detenemos la cuenta.
    if (n <= 0) {
        cout << "¡Despegue!" << endl;
        return; // Fin de la recursión.
    }

    // Tarea: Imprimir el número actual.
    cout << n << "..." << endl;

    // Llamada Recursiva: Llamamos a la función con el siguiente número (n-1).
    cuentaAtras(n - 1);
}

int main() {
    int inicio;

    cout << "Introduce un número para la cuenta regresiva: ";
    cin >> inicio;

    // Iniciamos la secuencia recursiva.
    cuentaAtras(inicio);

    return 0;
}