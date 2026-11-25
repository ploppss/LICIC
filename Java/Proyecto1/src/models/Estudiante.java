package models;

public class Estudiante extends Persona {
    private int semestre;
    private String carrera;
    private float promedioGlobal;

    public Estudiante(String nombre, String apellido, int edad, String sexo, int semestre, String carrera, float promedioGlobal) {
        super(nombre, apellido, edad, sexo);
        this.semestre = semestre;
        this.carrera = carrera;
        this.promedioGlobal = promedioGlobal;
    }

    public void setPromedioGlobal(float promedioGlobal) {
        this.promedioGlobal = promedioGlobal;
    }
    
    @Override
    public void mostrarInformacion() {
        super.mostrarInformacion();
        System.out.println("Semestre: " + semestre);
        System.out.println("Carrera: " + carrera);
        System.out.println("Promedio Global: " + promedioGlobal);
    }
}