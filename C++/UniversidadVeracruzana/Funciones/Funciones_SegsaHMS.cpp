#include <iostream>
using namespace std;

void ConvertirSegsaHMS(int x){
    int horas, minutos, segundos;
    int res1, res2;
    horas=0;
    minutos=0;
    segundos=0;

    horas= x/3600;

    if(x%3600!=0){
        res1= x%3600;
        minutos= res1/60;
        if (res1%60!=0){
            res2= res1%60;
            segundos= res2;
        }
    }

    cout<<"El resultado de la transformacion de segundos a horas, minutos y segundos es:"<< endl;
    cout<< horas<< ":"<< minutos<< ":"<< segundos<< "."<< endl;

}


int main(){
    int segs;
    cout<< "Inserte su tiempo en segundos.>";
    cin>> segs;

    ConvertirSegsaHMS(segs);

    return 0;
}