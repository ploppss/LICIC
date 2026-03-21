#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");
int opcion= 0;
int indborrado= 0;
string NuevaTarea;
bool SalidaMenu= false;
vector<string> tareas= {"Tender la cama, ", "Lavar los platos, "};

//Mostrar menú principal
    do{
    opcion= 5;
    NuevaTarea= " ";
    cout << "===GESTOR DE TAREAS===" << endl;
    cout << "1. Mostrar tareas" << endl;
    cout << "2. Agregar tarea" << endl;
    cout << "3. Eliminar tarea" << endl;
    cout << "4. Salir" << endl;
    cout<< "5. Volver a mostrar el menú."<< endl;
    cout << "Elige una opcion(1, 2, 3, 4, 5): "<< endl;
    cin>>opcion;
    
        switch(opcion){
        case 1:
            cout<< "Lista de tareas:"<< endl;
            for(string tarea : tareas){
                cout<< tarea<< " ";
            }
            cout<<"\n "<< endl;
            break;
        case 2:
            cout<< "---Menú de adición de tarea---"<< endl;
            cout<< "Inserte la tarea que quiere agregar[Añada una coma y espacio al final(, )].>";
            // Correcto (lee la frase completa y evita los errores):
            cin.ignore();
            getline(cin, NuevaTarea);/*cin>> NuevaTarea solo leeria la primera palabra
            y dejaria lo demás de la frase en la memoria del búfer, poreso ya no leia un digito dentro
            del cin>> opcion;
            */
            cout<< endl;

            tareas.push_back(NuevaTarea);

            cout<< "La tarea se ha agregado al final de la lista correctamente.";
            cout<<"\n "<< endl;
            break;
        case 3:
            do {
                indborrado= 0;
                cout<< "---Menú de eliminación de tarea---"<< endl;
                cout<< "La lista de tareas tiene "<< tareas.size()<< " elementos."<< endl;
                cout<< "Para salir del menú de borrado inserte un numero fuera del indice de la lista"<< endl;
                cout<< "Qué elemento de la lista desea eliminar?(1-"<< tareas.size()<< ").>";
                cin>> indborrado;

                indborrado-=1;

                if(indborrado>=0 && indborrado < tareas.size()){
                    cout<< "Borrando el elemento "<< indborrado+1<< endl;
                    tareas.erase(tareas.begin()+indborrado);
                }

                if(!(indborrado>=0 && indborrado < tareas.size())){
                    cout<< "Saliendo del menú..."<< endl;
                }

            }while(indborrado>=0 && indborrado < tareas.size());
            cout<<"\n "<< endl;
            break;
        case 4:
            cout<< "Saliendo del menú de lista de tareas..."<< endl;
            SalidaMenu= true;
            cout<<"\n "<< endl;
            break;
        case 5: 
            cout<<"\n "<< endl;
            break;
        default:
            cout<< "ERROR. Por favor inserte un número del menú."<< endl;
            cout<<"\n "<< endl;
            break;
        }
    }while(SalidaMenu== false);

return 0;
}