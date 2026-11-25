package models;

import java.util.ArrayList;
import java.util.List;

public class Cuidador extends Persona implements Auditable {
    private List<Animal> animalesAsignados;

    // CONSTRUCTOR
    public Cuidador(String id, String nombre) {
        super(id, nombre);
        this.animalesAsignados = new ArrayList<>();
    }

    // MÉTODO PARA AGREGAR ANIMALES A LA LISTA DEL CUIDADOR
    public void agregarAnimal(Animal animal) {
        if (animalesAsignados.size() < 4) {
            animalesAsignados.add(animal);
            System.out.println("Animal " + animal.getNombre() + " asignado al cuidador " + getNombre());
        } else {
            throw new ReglaNegocioException("No se puede asignar más de 4 animales a un cuidador.");
        }
    }
    // MÉTODO PARA VALIDAR LA ASIGNACIÓN DE ANIMALES
    public boolean validarAsignacion() {
        int cantidad = animalesAsignados.size();
        return cantidad >= 1 && cantidad <= 4;
    }
    // MÉTODO PARA ATENDER A LOS ANIMALES ASIGNADOS
    public void atenderAnimales() {
        System.out.println("\n--- " + getNombre() + " está atendiendo a todos sus animales ---");
        for (Animal animal : animalesAsignados) {
            animal.alimentarse();
        }
    }
    // SOBRECARGA DEL MÉTODO PARA ATENDER A UN ANIMAL ESPECÍFICO
    public void atenderAnimales(Animal animalEspecifico) {
        System.out.println("\n--- " + getNombre() + " está brindando atención especial a " + animalEspecifico.getNombre() + " ---");
        animalEspecifico.emitirSonido();
    }
    
    @Override
    public String generarReporteAuditoria() {
        return "[AUDITORÍA CUIDADOR] ID: " + getId() + " | Nombre: " + getNombre() + 
               " | Animales asignados: " + animalesAsignados.size() + "/4 | Cumple reglas: " + validarAsignacion();
    }

}
