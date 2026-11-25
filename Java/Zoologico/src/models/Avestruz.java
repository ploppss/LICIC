package models;

public class Avestruz extends Animal {
    public Avestruz(String nombre, int edad) {
        super(nombre, edad);
    }
    
    // SOBREESCRITURA DE MÉTODOS ABSTRACTOS
    @Override
    public void emitirSonido() {
        System.out.println(getNombre() + " hace un sonido fuerte: ¡Brrr Brrr!");
    }
    @Override
    public void alimentarse() {
        System.out.println(getNombre() + " está comiendo semillas y frutas.");  
    }
}
