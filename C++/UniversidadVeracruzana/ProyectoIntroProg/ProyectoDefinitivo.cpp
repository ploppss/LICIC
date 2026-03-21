#include <iostream>
#include <string>
using namespace std;

// Cantidad máxima de productos en el inventario
const int NUMERODEPRODUCTOS= 5;

struct Producto{
    string clave;
    string nombre;
    string proveedor;
    float precio;
    int numExistencia;

    //V Variables de reserva para modificaciones
    string nombreMod;
    string proveedorMod;
    float precioMod;
    int numExistenciaMod;
        
    Producto(){
        clave= "";
        nombre= "";
        proveedor= "";
        precio= 1.0;
        numExistencia= 1;
        precioMod= 0;
        numExistenciaMod= 0;
    }

    void DarAltaProducto(){
        cout<< "Está dentro del menú para dar de alta un producto."<< endl;
        cout<< "Inserte el nombre del producto en mayúsculas.>";
        cin.ignore();
        getline(cin, nombre);
        cout<< "Inserte el proveedor del producto en mayúsculas.>";
        getline(cin, proveedor);
        do {
            if (precio <= 0 || numExistencia<= 0){
                cout<< "El valor de precio o el de existencia no fue válido, por favor vuelva a insertarlos."<< endl;
            }
            cout<< "Inserte el precio del producto.>";
            cin>> precio;
            if (precio <= 0){
                cout<< "ERROR. Por favr inserte un valor positivo."<< endl;
            }
            cout<< "Inserte la cantidad que ingresará al inventario.>";
            cin>> numExistencia;
            if (numExistencia <= 0 ){
                cout<< "ERROR. Por favr inserte un valor positivo."<< endl;
            }
        } while (precio<=0 || numExistencia<= 0);

        ConfirmarProducto();
    }

    void ConfirmarProducto(){
        cout<< "Nombre: "<< nombre<< endl;
        cout<< "Proveedor: "<< proveedor<< endl;
        cout<< "Precio: $"<< precio<< endl;
        cout<< "Número de Existencias: "<< numExistencia<< endl;
    }

    void ModificarProducto(){
        cout<< "Está dentro del menú para modificar un producto."<< endl;
        cout<< "Los datos que se modificaran son nombre, proveedor, precio y existencia."<< endl;
        cout<< "Inserte el nombre del producto.>";
        getline(cin, nombreMod);
        if (nombreMod == "") {
            cout << "El nombre se conservará igual para este producto." << endl;
        } else {
            nombre = nombreMod;
        }
        cout<< "Inserte el proveedor del producto.>";
        getline(cin, proveedorMod);
        if (proveedorMod == "") {
            cout << "El proveedor se conservará igual para este producto." << endl;
        } else {
            proveedor = proveedorMod;
        }
        do {
            if (precioMod<0 || numExistenciaMod<0){
                cout<< "El valor de precio o el de existencia no fue válido, por favor vuelva a insertarlos."<< endl;
            }
            cout<< "Si desea conservar el precio igual, por favor ingrese 0."<< endl;
            cout<< "Inserte el precio del producto.>";
            cin>> precioMod;
            if (precioMod == 0) {
                cout << "El precio se conservará igual para este producto." << endl;
            } 
            if (precioMod<0){
                cout<< "ERROR. Por favor inserte un valor mayor a 0"<< endl;
            } else {
                precio = precioMod;
            }
            cout<< "Si desea conservar la existencia igual, por favor ingrese 0."<< endl;
            cout<< "Inserte la cantidad que ingresará al inventario.>";
            cin>> numExistenciaMod;
            if (numExistenciaMod == 0) {
                cout << "La existencia se conservará igual para este producto." << endl;
            } 
            if (numExistenciaMod<0){
                cout<< "ERROR. Por favor inserte un valor mayor a 0"<< endl;
            } else {
                numExistencia = numExistenciaMod;
            }
        } while(precioMod<0 || numExistenciaMod<0);
    }

    void MostrarProducto(){
        cout << "Clave: " << clave << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Proveedor: " << proveedor << endl;
        cout << "Precio: $" << precio << endl;
        cout << "Número de Existencias: " << numExistencia << endl;
    }
    // Bubble Sort para ordenar por nombre alfabéticamente
    void OrdenarPorNombre(Producto productos[], int contador){
        for (int i = 0; i < contador - 1; i++) {
            for (int j = 0; j < contador - i - 1; j++) {
                if (productos[j].nombre[0] > productos[j + 1].nombre[0]) {
                    Producto temp = productos[j];
                    productos[j] = productos[j + 1];
                    productos[j + 1] = temp;
                }
                // Comparar el segundo carácter si el primero es igual
                if (productos[j].nombre[0] == productos[j + 1].nombre[0]) {
                    if (productos[j].nombre[1] > productos[j + 1].nombre[1]) {
                        Producto temp = productos[j];
                        productos[j] = productos[j + 1];
                        productos[j + 1] = temp;
                    }
                }
            }
        }
    }
    // Bubble Sort para ordenar por precio de mayor a menor
    void OrdenarPorPrecio(Producto productos[], int contador){
        for (int i = 0; i < contador - 1; i++) {
            for (int j = 0; j < contador - i - 1; j++) {
                if (productos[j].precio < productos[j + 1].precio) {
                    Producto temp = productos[j];
                    productos[j] = productos[j + 1];
                    productos[j + 1] = temp;
                }
            }
        }
    }

    void MostrarProductosPorExistencia(Producto producto[], int contador, int limite){
        cout << "Productos con existencia menor a " << limite << ":" << endl;
        for (int i = 0; i < contador; i++) {
            if (producto[i].numExistencia < limite) {
                producto[i].MostrarProducto();
            }
        }
    }
    
};

void GenerarClave(Producto &prod, int contador){
    // Genera una clave en base a proveedor, y el número de producto
    string caracteresClave= prod.proveedor.substr(0,2);
    if (caracteresClave.length()<2){
        caracteresClave+='X';
    }
    if (caracteresClave[0]>='a' && caracteresClave[0] <= 'z'){
        caracteresClave[0]-=32;
    }
    if (caracteresClave[1]>='a' && caracteresClave[1] <= 'z'){
        caracteresClave[1]-=32;
    }
    prod.clave = caracteresClave+ "00" + to_string(contador);
    cout << "Clave generada: " << prod.clave << endl;
}

int main(){
setlocale(LC_ALL, " ");
    // Arreglo para almacenar los productos de la tienda y contador principal
    Producto ListaTienda[NUMERODEPRODUCTOS];
    int contadorProductos= 0;

    // Booleanos de saldia y búsqueda
    bool exit=true;
    bool encontradoMod= true;

    // Variables para el menú principal y submenús
    int opcion;
    char opcion2;

    // Variable de confirmación de alta o modificación
    char confirmar;

    // Variables para modificaciones y consultas
    string claveBuscada;
    int limiteExistencia;
    string proveedorBuscado;
    float precioLimite;
    
    do {
        cout<< endl;
        cout<< "===MENÚ DE LA TIENDA==="<< endl;
        cout<< "La mayoría de las opciones requieren que se haya dado de alta al menos un producto."<< endl;
        cout<< "La mayoría de las entradas de texto deben ser en mayúsculas."<< endl;
        cout<< "Se le recomienda activar su bloqueo de mayúsculas si no lo ha hecho ya."<< endl;
        cout<< "================================="<< endl;
        cout<< "1. Dar de alta un producto."<< endl;
        cout<< "2. Modificar un producto."<< endl;
        cout<< "3. Ingresar al catálogo de productos."<< endl;
        cout<< "4. Ingresar al menú de consultas."<< endl;
        cout<< "5. Salida"<< endl;
        cout<< "Por favor elija una opción.>";
        cin>> opcion;
        

        switch(opcion){
            case 1: {
                if (contadorProductos >= NUMERODEPRODUCTOS) {
                    cout << "No se pueden agregar más productos, el inventario está lleno." << endl;
                    break;
                }else {
                    do {
                        ListaTienda[contadorProductos].DarAltaProducto();
                        cout<< "Desea confirmar el alta del producto? (S/N).>";
                        cin >> confirmar;
                    } while (confirmar == 'N' || confirmar == 'n');

                GenerarClave(ListaTienda[contadorProductos], contadorProductos + 1);
                contadorProductos++;

                cout << "Producto dado de alta correctamente." << endl;
                }
                break;
            }
            case 2: {
                cout<< "Por favor inserte la clave del producto a modificar.>";
                cin.ignore();
                getline(cin, claveBuscada);
                for (int i= 0; i< contadorProductos; i++){
                    if (claveBuscada != ListaTienda[i].clave) {
                        encontradoMod= false;
                    } else {
                        if (ListaTienda[i].clave == claveBuscada) {
                            encontradoMod = true;
                            cout<< "Producto encontrado"<< endl;
                            cout<< "Datos actuales del producto:"<< endl;
                            ListaTienda[i].MostrarProducto();
                            cout<< "Si desea conservar algún dato igual, por favor presione ENTER."<< endl;
                            ListaTienda[i].ModificarProducto();
                            cout<< "Producto modificado correctamente." << endl;
                            cout<< "Desea cambiar la clave del producto? (S/N).>";
                            cin>> confirmar;
                            if (confirmar == 'S' || confirmar == 's'){
                                GenerarClave(ListaTienda[i], i+1);
                            } else {
                                cout<< "La clave se conservará igual para este producto."<< endl;
                            }
                            break;
                        }
                    }
                    
                }
                if (!encontradoMod){
                    cout<< "Producto no encontrado de acuerdo a la clave."<< endl;
                }
                break;
            }
            case 3: {
                cout<< "===CATÁLOGO DE PRODUCTOS==="<< endl;
                cout<< "A. Mostrar los productos en el orden que se registraron."<< endl;
                cout<< "B. Mostrar los productos en orden alfabético."<< endl;
                cout<< "C. Mostrar los productos por precio (de mayor a menor)."<< endl;
                cout<< "Por favor elija una opción.>";
                cin>> opcion2;
                switch(opcion2){
                    case 'A':
                    case 'a': {
                        cout << "Mostrando productos en el orden registrado:" << endl;
                        for (int i = 0; i < contadorProductos; i++) {
                            cout<< "Producto "<< i+1<< ":"<< endl;
                            ListaTienda[i].MostrarProducto();
                        } 
                        break;
                    }
                    case 'B':
                    case 'b': {
                        cout<< "Mostrando productos en orden alfabético (de acuerdo a nombre):"<< endl;
                        ListaTienda[0].OrdenarPorNombre(ListaTienda, contadorProductos);
                        for (int i = 0; i < contadorProductos; i++) {
                            cout<< "Producto "<< i+1<< ":"<< endl;
                            ListaTienda[i].MostrarProducto();
                        }
                        break;
                    }
                    case 'C':
                    case 'c': {
                        cout<< "Mostrando productos en orden de precio: "<< endl;
                        ListaTienda[0].OrdenarPorPrecio(ListaTienda, contadorProductos);
                        for (int i = 0; i < contadorProductos; i++) {
                            cout<< "Producto "<< i+1<< ":"<< endl;
                            ListaTienda[i].MostrarProducto();
                        }
                        break;
                    }
                    default:
                        cout << "ERROR. Opción no válida, por favor intente de nuevo." << endl;
                        break;
                }
                break;
            }
            case 4: {
                cout<< "===MENÚ DE CONSULTAS==="<< endl;
                cout<< "A. Productos cuya existencia sea menor a la especificada."<< endl;
                cout<< "B. Productos cuyo proveedor sea especificado."<< endl;
                cout<< "C. Productos cuyo precio sea mayor a uno determinado."<< endl;
                cout<< "Por favor elija una opción.>";
                cin>> opcion2;
                switch(opcion2){
                    case 'A':
                    case 'a': {
                        cout<< "Por favor inserte la cantidad límite de existencia.>";
                        cin>> limiteExistencia;
                        ListaTienda[0].MostrarProductosPorExistencia(ListaTienda, contadorProductos, limiteExistencia);
                        break;
                    }
                    case 'B':
                    case 'b': {
                        cout<< "Por favor inserte el nombre del proveedor en mayúsculas.>";
                        cin.ignore();
                        getline(cin, proveedorBuscado);
                        cout << "Productos del proveedor " << proveedorBuscado << ":" << endl;
                        for (int i = 0; i < contadorProductos; i++) {
                            if (ListaTienda[i].proveedor == proveedorBuscado) {
                                ListaTienda[i].MostrarProducto();
                            }
                        }
                        break;
                    }
                    case 'C':
                    case 'c': {
                        cout<< "Por favor inserte el precio límite (por debajo).>";
                        cin>> precioLimite;
                        cout << "Productos con precio mayor a $" << precioLimite << ":" << endl;
                        for (int i = 0; i < contadorProductos; i++) {
                            if (ListaTienda[i].precio > precioLimite) {
                                ListaTienda[i].MostrarProducto();
                            }
                        }
                    break;
                    }
                    default:
                        cout << "ERROR. Opción no válida, por favor intente de nuevo." << endl;
                        break;
                }
                break;
            }
            case 5:
                cout << "Saliendo del programa..." << endl;
                exit = false;
                break;
            default:
                cout << "ERROR. Opción no válida, por favor intente de nuevo." << endl;
                break;

        }
    }while (exit);

return 0;
}