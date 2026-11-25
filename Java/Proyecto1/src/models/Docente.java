package models;

public class Docente extends Persona {
    private String materia;
    private int horasSemanales;

    public Docente(String nombre, String apellido, int edad, String sexo, String materia, int horasSemanales) {
        super(nombre, apellido, edad, sexo);
        this.materia = materia;
        this.horasSemanales = horasSemanales;
    }
    
    public String getMateria() {
        return materia;
    }

    public int getHorasSemanales() {
        return horasSemanales;
    }

    @Override
    public void mostrarInformacion() {
        super.mostrarInformacion();
        System.out.println("Materia: " + materia);
        System.out.println("Horas Semanales: " + horasSemanales);
    }
    
    public void subirCalificaciones(){
        if (horasSemanales > 0) {
            System.out.println("Subiendo calificaciones para la materia: " + materia);
        } else {
            System.out.println("El docente no tiene horas semanales asignadas para subir calificaciones.");
        }
    }
    
    public void subirCalificaciones(String grupoAsignado) {
        System.out.println("El docente está subiendo calificaciones de la materia: " + materia +
            "con un total de " + horasSemanales + " horas semanales asignadas para el grupo: " + grupoAsignado);
    }
}
