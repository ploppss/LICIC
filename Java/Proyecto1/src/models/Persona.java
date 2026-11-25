package models;

public class Persona {

    // ATRIBUTOS DE LA CLASE PERSONA
    private String nombre;
    private String apellido;
    private int edad;
    private String sexo;

    // CONSTRUCTOR DE LA CLASE PERSONA
    public Persona(String nombre, String apellido, int edad, String sexo) {
        this.nombre = nombre;
        this.apellido = apellido;
        this.edad = edad;
        this.sexo = sexo;
    }

    // FUNCION PARA MOSTRAR LA INFORMACION DE LA PERSONA
    public void mostrarInformacion() {
        System.out.println("Nombre: " + nombre);
        System.out.println("Apellido: " + apellido);
        System.out.println("Edad: " + edad);
        System.out.println("Sexo: " + sexo);
    }
}

