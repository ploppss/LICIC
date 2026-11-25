package models;
public abstract class Persona {
    private String id;
    private String nombre;

    // CONSTRUCTOR
    public Persona(String id, String nombre) {
        this.id = id;
        this.nombre = nombre;
    }

    // GETTER Y SETTER DE ID
    public String getId() { 
        return id;
    }
    public void setId(String id) { 
        this.id = id; 
    }
    // GETTER Y SETTER DE NOMBRE
    public String getNombre() {
        return nombre; 
    }
    public void setNombre(String nombre) { 
        this.nombre = nombre;
    }
}