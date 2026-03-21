#include<iostream>
using namespace std;
int main (){
int decenas[5] = {10, 20, 30, 40, 50};
//Escribir los elementos del array
for (int i=0; i<5; i++){
	cout<< "Decena numero: "<< i<< "= "<< decenas[i]<< endl;
}
cout<<" "<< endl;
/*Salida: 
	Decena numero: 0= 10
	Decena numero: 1= 20
	Decena numero: 2= 30
	Decena numero: 3= 40
	Decena numero: 4= 50
*/

//--------------------

//Sumar los elementos
int suma= 0;
for (int j=0; j<5; ++j){
	suma+= decenas[j];
}
cout<<" "<< endl;
cout<< "Suma de las decenas= "<< suma<<endl;
//Salida: Suma de las decenas= 150
cout<<" "<< endl;

//--------------------

//Modificar "in place"
for (int k=0; k<5; ++k){
	decenas[k]*= 2; //Duplica cada uno de los elementos
	cout<< "El doble de la decena es: "<< decenas[k]<< endl;
}
/*Salida
	El doble de la decena es: 20
	El doble de la decena es: 40
	El doble de la decena es: 60
	El doble de la decena es: 80
	El doble de la decena es: 100
*/
cout<<" "<< endl;

//-------------------

//Devuelve decenas a sus valores originales 10, 20, etc.
for (int k=0; k<5; ++k){
	decenas[k]/= 2; //Divide cada uno de los elementos
	cout<< "El valor original de la decena es: "<< decenas[k]<< endl;
}
cout<< " "<< endl;

//-------------------

//Salida temprana
int finconteo = 0;
bool encontrado = false;
cout<< "Que decena quiere encontrar en la lista?(Ejemplo:10, 20,30, ...)"<< endl;
cin>> finconteo;
for (int h=0; h<5; ++h){
	if(decenas[h]== finconteo){
		cout << "Encontrado en el lugar "<< h<< " de la lista."<< endl;
		encontrado = true;
		break; 
	}
}
if (!encontrado){
	cout << "La decena que inserto no esta dentro de la lista."<< endl;
}

return 0;
}