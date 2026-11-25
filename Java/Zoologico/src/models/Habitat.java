package models;

public class Habitat {
    private String nombre;
    private int nivelLimpieza; // 0 a 100, por ejemplo
    private String categoriaZona;

    // CONSTRUCTOR
    public Habitat(String nombre, int nivelLimpieza, String categoriaZona) {
        this.nombre = nombre;
        this.nivelLimpieza = nivelLimpieza;
        this.categoriaZona = categoriaZona;
    }

    // GETTER Y SETTER DE NOMBRE
    public String getNombre() { 
        return nombre; 
    }
    public void setNombre(String nombre) { 
        this.nombre = nombre; 
    }
    // GETTER Y SETTER DE NIVEL DE LIMPIEZA
    public int getNivelLimpieza() { 
        return nivelLimpieza; 
    }
    public void setNivelLimpieza(int nivelLimpieza) { 
        this.nivelLimpieza = nivelLimpieza; 
    }
    // GETTER Y SETTER DE CATEGORIA DE ZONA
    public String getCategoriaZona() { 
        return categoriaZona; 
    }
    public void setCategoriaZona(String categoriaZona) { 
        this.categoriaZona = categoriaZona; 
    }
}