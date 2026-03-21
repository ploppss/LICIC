#include <iostream>

using namespace std;

class LinkedList{
    private:

    struct Nodo{
        int valor;
        Nodo* ptr;
        Nodo (int v = 0){
            valor = v;
            ptr = nullptr;
        }
    };

    Nodo* head;

    public:
    // Constructor de la clase
    LinkedList(){
        head = nullptr;
    }
    // Destructor de la clase, se encarga de liberar la memoria al cerrar el programa.
    ~LinkedList() {
    Nodo* actual = head;
    while (actual != nullptr) {
        Nodo* siguiente = actual->ptr; // Guardamos el puente
        delete actual;                 // Borramos el nodo actual
        actual = siguiente;            // Saltamos al siguiente
    }
    head = nullptr;
    cout << "Memoria liberada exitosamente." << endl;
    }
    // Insertar al inicio
    void InsertFirst(int dato){
        // Declaración del nuevo nodo y almacenamiento dentro del heap.
        Nodo* nuevoNodo = new Nodo;
        // Inicializacion del nodo, el valor del nodo se le pasa mediante el parámetro de la función.
        nuevoNodo->valor = dato;
        // Al puntero del nuevo nodo se le asigna el valor del puntero head, si head ya apunta a un elemento no se pierde su dirección.
        // El puntero del nuevo nodo apunta al primer elemento de la lista, el cual es el nodo al que head esta apuntando.
        nuevoNodo->ptr = head;
        // Al puntero head se le asigna la dirección del nuevo nodo recién creado.
        head = nuevoNodo;
    }
    // Insertar al final
    void InsertLast(int dato){
        // Declaración del nuevo nodo y almacenamiento dentro del heap.
        Nodo* nuevoNodo = new Nodo;
        // Inicializacion del nodo, el valor del nodo se le pasa mediante el parámetro de la función.
        nuevoNodo->valor = dato;
        // Condición: Si la lista   esta vacía asignar la direccion del nuevo nodo a head
        if ( head == nullptr) {
            head = nuevoNodo;
        } else { // Si no esta vacía declarar una variable temporal que apunte al primer elemento de la lista igual que head.
            Nodo* temp = head;

            while (temp->ptr != nullptr) { // Mientras el puntero del nodo al que temp esta apuntando no sea null.
                temp = temp->ptr;          // Asignar el valor del puntero de temp a temp.
            }
            // Una vez que se llega al último nodo asignarle la direccion del nuevo nodo al puntero del último elemento de la lista.
            temp->ptr = nuevoNodo;
        }
    }
    // Insertar en una posición específica
    void InsertAt(int dato, int pos){
         if (pos < 1) { // Validación para verificar que la posición ingresada sea válida, ya que no se pueden insertar elementos en posiciones menores a 1.
            cout << "Posición inválida. Por favor ingrese una posición mayor o igual a 1." << endl;
            return;
        }   
        // Se resta 1 a la posición para que el usuario pueda ingresar la posición de forma natural, es decir, el primer elemento se indexa como 0, el segundo elemento se indexa como 1
        pos = pos - 1;
        if (pos == 0) { // Si la posición es 0, se llama a la función InsertFirst para insertar el nuevo nodo al inicio de la lista.
            InsertFirst(dato);
        } else {
            // Declaración del nuevo nodo y almacenamiento dentro del heap.
            Nodo* nuevoNodo = new Nodo;
            // Inicializacion del nodo, el valor del nodo se le pasa mediante el parámetro de la función.
            nuevoNodo->valor = dato;

            Nodo* temp = head;
            int i = 0;
            // El primer elemento de la lista seria la posicion 0, el segundo elemento seria la posicion 1, etc.
            while (i < pos - 1 && temp != nullptr) {  // Si se quiere insertar en la posición 3, se debe recorrer la lista hasta llegar al elemento indexado como 2, por eso se hace pos-1.
                temp = temp->ptr;
                i++;
            }

            if (temp != nullptr) {// Condición de seguridad para verificar que temp no es null.
                // El puntero del nuevo nodo se le asigna el valor del puntero de temp, para que el nuevo nodo apunte al siguiente nodo en la lista.
                nuevoNodo->ptr = temp->ptr;
                // El puntero de temp se le asigna la dirección del nuevo nodo, para que el nodo anterior al nuevo nodo apunte al nuevo nodo.
                temp->ptr = nuevoNodo;
            } else { // En cambio si temp es null, significa que se ha llegado al final de la lista sin encontrar la posición deseada.
                cout << "Posición fuera de rango." << endl;
                delete nuevoNodo; // Liberar memoria si la posición es inválida
            }
        }
    }
    // Imprimir lista
    void PrintList(){
        cout << "El valor al que la cabeza de la lista apunta es: " << head->valor << endl; // Imprime el primer valor de la lista
        int i = 0;

        Nodo* temp = head;

        while (temp->ptr != nullptr) {
            i++;
            temp = temp->ptr;
        }

        cout << "Hay " << i+1 << " elementos dentro de la lista." << endl;

        Nodo* temp2 = head;

        for (int j=0; j<=i; j++) {
            cout << "El valor del nodo "<< j+1 << " es: " << temp2->valor << endl;
            temp2 = temp2->ptr;
        }
    }
    // Eliminar elemento en posicion espcífica
    void DeleteAt(int pos){
        if (head == nullptr) { // Se detecta si la lista esta vacía verificando el valor de head.
            cout << "La lista está vacía. No se puede eliminar ningún elemento." << endl;
            return;
        }
        if (pos == 1) { // Aunque la posicion es 1, el primer elemento se indexa como 0.
            Nodo* temp = head;// Se declara un nodo temporal que apunta al primer elemento de la lista.
            head = head->ptr;// A head se le asgina el valor del puntero del primer elemento de la lista, se mueve el 2do elemento a la 1ra posición.
            delete temp;// Se libera la memoria del nodo que apunta al primer elemento, el cual se elimina.
        } else {
            Nodo* temp = head; // Se declara un nodo temporal para recorrer la lista.
            int i = 1; // Variable para contar la posición actual, se inicializa en 1 por que se toma en cuenta que empezara a contar desde el segundo elemento de la lista que en el indice seria la posición 1.

            while (i < pos-1 && temp != nullptr) { // Mientras no se haya llegado a la posición deseada menos uno, y temp no sea null, recorrer la lista.
                temp = temp->ptr;
                i++;
            }

            if (temp != nullptr && temp->ptr != nullptr) { 
                Nodo* nodoAEliminar = temp->ptr;
                temp->ptr = nodoAEliminar->ptr;
                delete nodoAEliminar;
            } else {
                cout << "Posición fuera de rango." << endl;
            }
        }
    }
};

int main(){

    LinkedList MiListaEnlazada;

    MiListaEnlazada.InsertFirst(40);
    MiListaEnlazada.InsertLast(20);
    MiListaEnlazada.InsertLast(15);

    int opcion;
    
    do {
        {   cout << "MENÚ DE LISTA ENLAZADA" << endl
        << "Elija una opción del menú" << endl
        << "1. Insertar un elemento al inicio." << endl
        << "2. Insertar un elemento al final." << endl
        << "3. Insertar un elemento en una posición específica." << endl
        << "4. Imprimir lista enlazada." << endl
        << "5. Eliminar un elemento en una posición específica." << endl
        << "6. Limpiar pantalla y liberar memoria." << endl
        << "0. Salir." << endl 
        << "Inserte su opción.>";
        cin >> opcion;
        cin.ignore(); // Limpia el buffer de entrada
        }
        switch (opcion){

            case 0:{
                cout << "Saliendo del programa..." << endl;
            break;}

            case 1:{
                int nuevoValor;
        
                cout << "Inserte el valor que quiere agregar al inicio de la lista.>";
                cin >> nuevoValor;

                MiListaEnlazada.InsertFirst(nuevoValor); 
            break;}

            case 2:{
                int nuevoValor;
        
                cout << "Inserte el valor que quiere agregar al final de la lista.>";
                cin >> nuevoValor;

                MiListaEnlazada.InsertLast(nuevoValor);
            break;}

            case 3:{
                int nuevoValor, posicion;
        
                cout << "Inserte el valor que quiere agregar a la lista.>";
                cin >> nuevoValor;

                cout << "Inserte la posición en la que desea insertar el nuevo valor.>";
                cin >> posicion;

                MiListaEnlazada.InsertAt(nuevoValor, posicion);
            break;}

            case 4:{

                MiListaEnlazada.PrintList();
                
            break;}

            case 5:{
                int posicion;

                cout << "Inserte la posición del elemento que desea eliminar.>";
                cin >> posicion;

                MiListaEnlazada.DeleteAt(posicion);
            break;}

            case 6:{
                system("clear"); // Limpia la pantalla

                MiListaEnlazada.~LinkedList(); // Llama al destructor para liberar la memoria.   
            break;}

            default:{
                cout << "ERROR. Por favor inserte una opción valida" << endl;
            break;}
        }
    } while (opcion != 0);
    
    return 0;
}