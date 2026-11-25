
import models.Persona;
import models.Estudiante;
import models.Docente;

public class Main {
    
    public static void main(String[] args) {
        // CREAR UN OBJETO DE LA CLASE PERSONA, ESTUDIANTE Y DOCENTE
        Persona persona1 = new Persona("Juan", "Pérez", 25, "Masculino");
        Estudiante estudiante1 = new Estudiante("María", "González", 20, "Femenino", 3, "Ingeniería en Sistemas", 8.5f);
        Docente docente1 = new Docente("Carlos", "Ramírez", 35, "Masculino", "Matemáticas", 20);
        Docente docente2 = new Docente("Ana", "López", 40, "Femenino", "Lengua y Literatura", 15);
        
        // MOSTRAR LA INFORMACION DE CADA OBJETO
        System.out.println("INFORMACIÓN DE LA PERSONA:");
        persona1.mostrarInformacion();
        System.out.println("\nINFORMACIÓN DEL ESTUDIANTE:");
        estudiante1.mostrarInformacion();
        System.out.println("\nINFORMACIÓN DEL DOCENTE 1:");
        docente1.mostrarInformacion();
        System.out.println("\nINFORMACIÓN DEL DOCENTE 2:");
        docente2.mostrarInformacion();
        
        // SUBIR CALIFICACIONES PARA CADA DOCENTE
        System.out.println("\nSUBIENDO CALIFICACIONES DEL DOCENTE 1:");
        docente1.subirCalificaciones();
        
        System.out.println("\nSUBIENDO CALIFICACIONES DEL DOCENTE 2:");
        docente2.subirCalificaciones("B");
        
        System.out.println("\nEL DOCENTE ESTA SUBIENDO CALIFICACIONES DE LA MATERIA: " + docente1.getMateria() +
            " CON UN TOTAL DE " + docente1.getHorasSemanales());
        
        docente1.subirCalificaciones("A");
        estudiante1.setPromedioGlobal(90);
        estudiante1.mostrarInformacion();
    }
}
