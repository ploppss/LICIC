#include <iostream>

using namespace std;

int main(){
system("chcp 65001");
setlocale(LC_ALL, " ");
//system("cls");

char correcta= 'V';
char respuesta;
int aciertos= 0;
float calificacion;

    cout<<"===EXAMEN==="<< endl;
    cout<< "Indicaciones:"<< endl;
    cout<< "En pantalla se le mostrara una oracion, su labor es identificar si es verdadera o falsa."<< endl;
    cout<< "Para determinar que una oración es verdadera inserte 'V'(no es válida la 'v')."<< endl;
    cout<< "Para determinar que una oración es falsa escriba cualquier otro caracter"<< endl;
    cout<< endl;

    cout<< "1. C++ es un lenguaje de programacion de bajo nivel.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos++;
    }

    cout<< "2. Los datos enteros son un tipo de variable primitivo dentro de C++.>";
    cin>> respuesta;
    if (respuesta== correcta){
        aciertos++;
    }

    cout<< "3. Las funciones que solo ejecutan una accion se declaran como tipo void.>";
    cin>> respuesta;
    if (respuesta== correcta){
        aciertos++;
    }

    cout<< "4. Los datos que se le pasan a una función desde la función main se llaman parámetros.>";
    cin>> respuesta;
    if (respuesta== correcta){
        aciertos++;
    }

    cout<< "5. Los ciclos do while casi nunca se usan para mostrar menús debido a su ineficiencia.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "6. Los arreglos de caracteres se declaran con la siguiente sintaxis int(tipo de dato) ejemplo(nombre de arreglo){5}(elementos del arreglo dentro de llaves).>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "7. Las strings son un tipo de dato compuesto dentro de C++.>";
    cin>> respuesta;
    if (respuesta== correcta){
        aciertos++;
    }

    cout<< "8. Solo se puede declarar una función por archivo dentro de C++, esta es la función main.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "9. Los datos tipo double se utilizan para números enteros de gran magnitud.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "10. No se pueden declarar estructuras de control dentro de otra estructura de control dentro de C++.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "11. Es considerado como buena practica nombrar a las variables sólo con caracteres dentro del codigo ASCII estándar.>";
    cin>> respuesta;
    if (respuesta== correcta){
        aciertos++;
    }

    cout<< "12. C++ es un lenguaje dentro del paradigma de la programación orientada a objetos.>";
    cin>> respuesta;
    if (respuesta== correcta){
        aciertos++;
    }

    cout<< "13. Dentro de la función main no se pueden declarar mas de 5 variables.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "14. Los arreglos de caracteres tienen un comportamiento especial respecto a los arreglos de enteros.>";
    cin>> respuesta;
    if (respuesta== correcta){
        aciertos++;
    }

    cout<< "15. Un arreglo no puede sobrepasar los 30 elementos dentro de C++.>";
    cin>>respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "16. La linea using namespace std; al inicio de los programas es meramente estética y no tiene ninguna funcion.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "17. C++ no es sensible a las comillas simples (''), es lo mismo que usar comillas normales ("").>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "18. C++ si distingue entre letras mayúsculas y minúsculas al nombrar variables.>";
    cin>> respuesta;
    if (respuesta== correcta){
        aciertos++;
    }

    cout<< "19. Existen 2 formas de pasarle parametros a una función, por valor y por referencia.>";
    cin>> respuesta;
    if (respuesta== correcta){
        aciertos++;
    }

    cout<< "20. Si al final de la función main no colocas la línea return 0; tu computadora podria sufrir daños irreparables.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "21. Al final de cada línea puedes escribir ; o tambien :. C++ no distingue entre esos dos caracteres.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "22. Cuando declaras una variable tipo char y en ella guardas un número del 0 al 9 genera un error de lógica.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "23. El operador '<<' siempre se utiliza despues del objeto 'cout' en C++.>";
    cin>> respuesta;
    if (respuesta== correcta){
        aciertos++;
    }

    cout<< "24. En C++ existen operadores aritméticos, lógicos y de relación, entre otros.>";
    cin>> respuesta;
    if (respuesta== correcta){
        aciertos++;
    }

    cout<< "25. Para guardar una oración solo se pueden usar los arreglos de caracteres(char ejemplo[10]), no hay otra forma de hacerlo.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "26. Para capturar una oración dentro de la terminal se utiliza la funcion cin.ignore(); en C++.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    } 

    cout<< "27. Las funciones tipo int devuelven un valor entero al ser llamadas y pueden ejecutar algunas acciones.>";
    cin>> respuesta;
    if (respuesta== correcta){
        aciertos++;
    }

    cout<< "28. La sintaxis dentro de C++ es muy estricta y por un solo caracter el programa puede fallar.>";
    cin>> respuesta;
    if (respuesta== correcta){
        aciertos++;
    }

    cout<< "29. Cuando creas un programa y quieres ejecutarlo simplemente tienes que hacer doble click sobre el archivo con terminacion .cpp.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "30. En C++ nunca tendras problemas de logica en tu programa ya que el compilador los arregla por ti.>";
    cin>> respuesta;
    if (respuesta!= correcta){
        aciertos ++;
    }

    cout<< "Calculando calificación . . ."<< endl;
    system("pause");

    calificacion= (aciertos*10)/30;
    
    cout<< "Su calificación fue "<< calificacion<< " obtuvo "<< aciertos<< " de 30 aciertos."<< endl;

return 0;
}