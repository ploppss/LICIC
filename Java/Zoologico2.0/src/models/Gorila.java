package models;

public class Gorila extends Animal {
    public Gorila(String nombre, int edad) {
        super(nombre, edad);
    }

    // SOBREESCRITURA DE MÉTODOS ABSTRACTOS
    @Override
    public void emitirSonido() {
        System.out.println(getNombre() + " golpea el pecho  con su puño: Pum! Pum!");
    }
    @Override
    public void alimentarse() {
        System.out.println(getNombre() + " está comiendo frutas y hojas.");
    }
}
