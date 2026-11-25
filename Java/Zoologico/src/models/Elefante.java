package models;

public class Elefante extends Animal {
    public Elefante(String nombre, int edad) {
        super(nombre, edad);
    }

    // SOBREESCRITURA DE MÉTODOS ABSTRACTOS
    @Override
    public void emitirSonido() {
        System.out.println(getNombre() + " hace un sonido fuerte: Truuuum!");
    }
    @Override
    public void alimentarse() {
        System.out.println(getNombre() + " está comiendo frutas y hojas.");
    }
}
