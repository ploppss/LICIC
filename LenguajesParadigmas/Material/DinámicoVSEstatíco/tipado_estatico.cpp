// Tipado estático débil

#include <iostream>

int main() {
    // 'letra' es de tipo char, 'numero' es de tipo int. Son tipos diferentes.
    char letra = 'A';
    
    // Sin embargo, el compilador permite esta asignación implícita.
    // Convierte el valor ASCII de 'A' (que es 65) a un int. https://elcodigoascii.com.ar/
    // Esto es un ejemplo de tipado débil.
    int numero = letra;
    
    std::cout << "El valor numerico de la letra 'A' es: " << numero << std::endl; // Salida: 65
    
    return 0;
}