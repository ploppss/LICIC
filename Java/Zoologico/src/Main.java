import models.*;

public class Main {
    public static void main(String[] args) {
        // INICIALIZAR HÁBITATS3
        Habitat sabana = new Habitat("Sabana Africana", 50, "Exterior");
        Habitat jaulaMonos = new Habitat("Recinto de Primates", 30, "Semi-techado");
        
        // INICIALIZAR ANIMALES
        Animal mufasa = new Leon("Mufasa", 5);
        Animal george = new Gorila("Jorge", 3);
        Animal paco = new Avestruz("Paco", 2);
        Animal melman = new Elefante("Dumbo", 7);
        Animal simba = new Leon("Simba", 1); // Para probar el límite del cuidador

        // INICIALIZAR PERSONAL
        Cuidador cuidador1 = new Cuidador("C001", "Carlos");
        Limpiador limpiador1 = new Limpiador("L001", "Luis");
        
        // CUMPLIMIENTO DE LAS REGLAS DE NEGOCIO PARA CUIDADOR
        System.out.println("=== ASIGNACIONES ===");
        cuidador1.agregarAnimal(mufasa);
        cuidador1.agregarAnimal(george);
        cuidador1.agregarAnimal(paco);
        cuidador1.agregarAnimal(melman);
        cuidador1.agregarAnimal(simba); // DEBE LANZAR ERROR

        // CUMPLIMIENTO DE LAS REGLAS DE NEGOCIO PARA LIMPIADOR
        limpiador1.agregarHabitat(sabana);
        limpiador1.agregarHabitat(jaulaMonos);

        System.out.println("\n=== VALIDACIÓN DE REGLAS DE NEGOCIO ===");
        System.out.println("¿Cuidador " + cuidador1.getNombre() + " cumple reglas? " + cuidador1.validarAsignacion());
        System.out.println("¿Limpiador " + limpiador1.getNombre() + " cumple reglas? " + limpiador1.validarAsignacion());

        System.out.println("\n=== EJECUCIÓN DE MÉTODOS Y POLIMORFISMO ===");
        // APLICANDO POLIMORFISMO: CUIDADOR ATIENDE A SUS ANIMALES
        cuidador1.atenderAnimales(); // Llama a alimentarse() de cada animal (todos actúan diferente)
        cuidador1.atenderAnimales(mufasa); // Atención específica
        
        limpiador1.desinfectarHabitats(); // LIMPIEZA GENERAL DE HÁBITATS
        
        // COMPROBANDO GETTERS Y SETTERS
        System.out.println("\nUn visitante ensució la Sabana...");
        sabana.setNivelLimpieza(10);
        System.out.println("Nivel de limpieza de Sabana: " + sabana.getNivelLimpieza() + "%");
        limpiador1.desinfectarHabitats(sabana); // lIMPIEZA DE EMERGENCIA
        System.out.println("Nivel de limpieza de Sabana tras emergencia: " + sabana.getNivelLimpieza() + "%");
    }
}