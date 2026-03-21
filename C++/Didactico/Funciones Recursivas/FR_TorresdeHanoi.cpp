#include <iostream>
#include <vector>
using namespace std;

void solucion(int n, char a, char b, char c);

int main(){
int num;
int i= 0;
char TorreOg= 'A';
char TorreAux= 'B';
char TorreDes= 'C';

    cout<< "Inserte la cantidad de discos en las torres de Hanói que desea mover.>";
    cin>> num;
    
    solucion(num, TorreOg, TorreAux, TorreDes);

return 0; 
}

void solucion(int n, char og, char aux, char des){
    if (n==1){
        cout<< "Moviendo el disco "<< n<< " de "<< og<< " a "<< des<< endl;
     return;
    }
    
    solucion(n-1, og, des, aux);
    
    cout<< "Moviendo el disco "<< n<< " de "<< og<< " a "<< des<< endl;

    solucion(n-1, aux, des, og);
}