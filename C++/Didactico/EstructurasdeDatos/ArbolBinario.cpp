#include <iostream>

using namespace std;
class BinaryTree {
    private:
        // Se define la estructura Nodo para definir un elemento esencial del arbol binario, a diferencia de la lista enlazada esta estructura de datos tiene 2 nodos
        struct Nodo{
            int data;
            Nodo* Lptr;
            Nodo* Rptr;
            // Constructor de la struct Nodo, le da un valor inicial 0, y asigna sus dos punteros como nulos
            Nodo(int valor = 0) {
                data = valor;
                Lptr = nullptr;
                Rptr = nullptr;
            }
        };

    public:
        // Nodo raíz, de él van a partir todos los nodos hijos
        Nodo* root;
        BinaryTree() {
            root = nullptr; // Su puntero se inicializa como nulo para evitar errores
        }
        // Función para insertar dato, evalúa si la raíz esta vacía y si no lo está llama a la función de comparación
        void InsertData(int dato) {
            if(root == nullptr) {
                root = new Nodo;
                root->data = dato;
            } else {
                CompareValue(root, dato);
            }
        }

        void CompareValue(Nodo* comparador, int numero){
            if(comparador->data == numero) {
                cout << "Valor ya existente, por favor inserte un nuevo valor" << endl;
                return;
            }
            if(comparador->data > numero){
                if (comparador->Lptr == nullptr){
                    Nodo* nuevoNodo = new Nodo;
                    nuevoNodo->data = numero;
                    comparador->Lptr = nuevoNodo;
                    return;
                } else {
                CompareValue(comparador->Lptr, numero);
                }
            }
            if(comparador->data < numero){
                if (comparador->Rptr == nullptr){
                    Nodo* nuevoNodo = new Nodo;
                    nuevoNodo->data = numero;
                    comparador->Rptr = nuevoNodo;
                    return;
                } else {
                CompareValue(comparador->Rptr, numero);
                }
            }
        }
    
};