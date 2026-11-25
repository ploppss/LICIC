#include <iostream>
#include <string>

using namespace std;

class Alumno {
    // ATRIBUTOS PRIVADOS PARA INFO SENSIBLE O QUE NO CAMBIA
    private:
        string curp;
        string facultad;
    // ATRIBUTOS PROTEGIDOS PARA QUE LAS CLASES HIJAS HEREDEN 
    protected:
        string matricula;
        string carrera;
        string nombre;
        int edad;
        string telefono;
        string correo;
    // METODOS PUBLICOS PARA EL CONSTRUCTOR Y MOSTRAR INFO
    public:
     
    Alumno(string matricula, string carrera, string nombre, int edad, string telefono, string correo) {
        this->curp = curp;
        this->facultad = facultad;
        this->matricula = matricula;
        this->carrera = carrera;
        this->nombre = nombre;
        this->edad = edad;
        this->telefono = telefono;
        this->correo = correo;

    }
    // METODO SETTER
    void setCurp(string curp) {
        this->curp = curp;
    }
    // METODO GETTER
    string getCurp() {
        return curp;
    }

    void setFacultad(string facultad) {
        this->facultad = facultad;
    }

    string getFacultad() {
        return facultad;
    }
    // EJEMPLO DE POLIMORFISMO 
    void Presentarse() { 
        cout << "Hola, mi nombre es " << nombre << ",estudio la carrera de " << carrera << " en la " << facultad << "." << endl;
    }

};

class AlumnoFEI : public Alumno {
    
    public:
    // USO DE CONSTRUCTOR DE LA CLASE PADRE PARA INICIALIZAR ATRIBUTOS HEREDADOS
    AlumnoFEI(string curp, string matricula, string carrera, string nombre, int edad, string telefono, string correo) 
    : Alumno(matricula, carrera, nombre, edad, telefono, correo) {
        this->setFacultad("Facultad de Estadística e Informática");
        this->setCurp(curp);
        this->matricula = matricula;
        this->carrera = carrera;
        this->nombre = nombre;
        this->edad = edad;
        this->telefono = telefono;
        this->correo = correo;
    }
    // SOBREESCRITURA DE METODO PARA MOSTRAR INFO
    void Presentarse() {
        cout << "Hola, mi nombre es " << nombre << ",estudio la carrera de " << carrera << " en la " << getFacultad() << " y tengo "<< edad << " años." << endl;
    }

};

class AlumnoEG: public Alumno {
    
    public:
    // USO DE CONSTRUCTOR DE LA CLASE PADRE PARA INICIALIZAR ATRIBUTOS HEREDADOS
    AlumnoEG(string curp, string matricula, string carrera, string nombre, int edad, string telefono, string correo) 
    : Alumno(matricula, carrera, nombre, edad, telefono, correo) {
        this->setFacultad("Facultad de Economía y Geografía");
        this->setCurp(curp);
        this->matricula = matricula;
        this->carrera = carrera;
        this->nombre = nombre;
        this->edad = edad;
        this->telefono = telefono;
        this->correo = correo;
    }
    // SOBREESCRITURA DE METODO PARA MOSTRAR INFO
    void Presentarse() {
        cout << "Hola, mi nombre es " << nombre << ",estudio la carrera de " << carrera << " en la " << getFacultad() << " y mi número de teléfono es " << telefono << "." << endl;
    }

};


int main() {

    AlumnoFEI alumno1("CURP123456", "MAT123456", "Licenciatura en Ingeniería en Ciberseguridad e Infraestructura de Cómputo", "Juan Pérez", 20, "1234567890", "juan.perez@gmail.com");
    AlumnoEG alumno2("CURP654321", "MAT654321", "Licenciatura en Economía", "María López", 21, "0987654321", "maria.lopez@gmail.com");
    Alumno alumno3("MAT987654", "Licenciatura en Odontología", "Carlos García", 22, "5678901234", "carlos.garcia@gmail.com");
    // USO DE SETTERS PARA ASIGNAR VALORES A LOS ATRIBUTOS PRIVADOS
    alumno3.setCurp("CURP987654");
    alumno3.setFacultad("Facultad de Ciencias de la Salud");

    alumno1.Presentarse();
    alumno2.Presentarse();
    alumno3.Presentarse();

    return 0;
}
