#include<iostream>

using namespace std;

int numero;
char simbolo;

void MostrarSimNumVeces(int num,char sim){

    if((sim>='a' && sim<='z') || (sim>='A' && sim<='Z')){
        cout<< "ERROR. Por favor inserte un símbolo.";
        return;
    }
    if (sim>='0' && sim<='9'){
        cout<< "ERROR. Por favor inserte un símbolo.";
        return;
    }

    for(sim=1;sim<=num; sim++){
        cout<< simbolo<< endl;
    }

}

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
system("cls");

    do {
    cout<< "Por favor inserte un numero (Para salir del programa insertar 0).>";
    cin>> numero;
    cout<< endl;
    cout<< "Por favor inserte un simbolo.>";
    cin>> simbolo;

    MostrarSimNumVeces(numero, simbolo);

    }while((numero !=0));

    

return 0;
}