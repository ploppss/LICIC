package models;

import java.util.ArrayList;
import java.util.List;

public class Limpiador extends Persona {
    private List<Habitat> habitatsAsignados;

    // CONSTRUCTOR
    public Limpiador(String id, String nombre) {
        super(id, nombre);
        this.habitatsAsignados = new ArrayList<>();
    }

    // MÉTODO PARA AGREGAR HÁBITATS A LA LISTA DEL LIMPIADOR
    public void agregarHabitat(Habitat habitat) {
        if (habitatsAsignados.size() < 3) {
            habitatsAsignados.add(habitat);
            System.out.println("Hábitat " + habitat.getNombre() + " asignado al limpiador " + getNombre());
        } else {
            System.out.println("Error: El limpiador " + getNombre() + " ya tiene el máximo de 3 hábitats asignados.");
        }
    }
    // MÉTODO PARA VALIDAR LA ASIGNACIÓN DE HÁBITATS
    public boolean validarAsignacion() {
        int cantidad = habitatsAsignados.size();
        return cantidad >= 1 && cantidad <= 3;
    }
    // MÉTODO PARA DESINFECTAR LOS HÁBITATS ASIGNADOS
    public void desinfectarHabitats() {
        System.out.println("\n--- " + getNombre() + " inicia limpieza general ---");
        for (Habitat h : habitatsAsignados) {
            h.setNivelLimpieza(100);
            System.out.println(h.getNombre() + " ha sido limpiado. Nivel actual: " + h.getNivelLimpieza() + "%");
        }
    }
    // SOBRECARGA DEL MÉTODO PARA DESINFECTAR UN HÁBITAT ESPECÍFICO
    public void desinfectarHabitats(Habitat habitatEspecifico) {
        System.out.println("\n--- " + getNombre() + " atiende limpieza de emergencia en " + habitatEspecifico.getNombre() + " ---");
        habitatEspecifico.setNivelLimpieza(100);
    }
}
