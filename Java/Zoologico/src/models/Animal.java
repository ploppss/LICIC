package models;

// Archivo: Animal.java
public abstract class Animal {
    private String nombre;
    private int edad;

    // CONSTRUCTOR
    public Animal(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    // GETTER Y SETTER DE NOMBRE
    public String getNombre() { 
        return nombre; 
    }
    public void setNombre(String nombre) { 
        this.nombre = nombre; 
    }
    // GETTER Y SETTER DE EDAD
    public int getEdad() { 
        return edad; 
    }
    public void setEdad(int edad) { 
        this.edad = edad; 
    }

    // MÉTODOS ABSTRACTOS (PARA APLICAR POLIMORFISMO)
    public abstract void emitirSonido();
    public abstract void alimentarse();
}