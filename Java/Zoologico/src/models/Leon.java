package models;

public class Leon extends Animal {
    public Leon(String nombre, int edad) {
        super(nombre, edad);
    }

    // SOBREESCRITURA DE MÉTODOS ABSTRACTOS
    @Override
    public void emitirSonido() {
        System.out.println(getNombre() + " ruge fuertemente: Roaaar!");
    }
    @Override
    public void alimentarse() {
        System.out.println(getNombre() + " está comiendo carne roja.");
    }
}

