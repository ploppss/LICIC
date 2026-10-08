
#include <iostream> // Se usa la biblioteca de "streams" de C++, esto permite usar objetos como std::cout para imprimir en la consola.

int main()
{
    std::cout << "Hola, mundo desde C++!" << std::endl; // std::endl inserta un salto de línea y vacía el buffer de salida, asegurando que todo se imprima correctamente.
    // Tambien se puede usar "\n" para un salto de línea, simple y eficiente.
    return 0;
}

// Instalación C++:
// Descargar e instalar MSYS2: https://www.msys2.org/
// Instalar compilador en la terminal: pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
// Agregar a PATH: C:\msys64\ucrt64\bin
// Verificar instalación: g++ --version y gcc --version en la terminal.
// Instala la extensión C/C++ Extension Pack de Microsoft en Visual Studio Code.

// Terminal:
// 1. Compilar: g++ ejemplo_compilado.cpp -o compilado_en_C++
// 2. Ejecutar: ./compilado_en_C++
// Salida esperada: Hola, mundo!