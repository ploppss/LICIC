import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import models.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Auditable> listaAuditoria = new ArrayList<>();

        try {
            System.out.println("==================================================");
            System.out.println("  SISTEMA DE GESTIÓN DEL ZOOLÓGICO (INTERACTIVO)  ");
            System.out.println("==================================================");

            // 1. CAPTURA DE UN NUEVO HÁBITAT
            System.out.println("\n--- REGISTRO DE NUEVO HÁBITAT ---");
            System.out.print("Nombre del hábitat: ");
            String nombreHab = scanner.nextLine().trim();

            int limpiezaHab = -1;
            while (true) {
                try {
                    System.out.print("Nivel de limpieza inicial (0 - 100): ");
                    limpiezaHab = Integer.parseInt(scanner.nextLine().trim());
                    if (limpiezaHab < 0 || limpiezaHab > 100) {
                        System.out.println(">> Advertencia: Ingrese un valor válido entre 0 y 100.");
                        continue;
                    }
                    break;
                } catch (NumberFormatException e) {
                    System.out.println(">> Error de formato: Ingrese un número entero válido.");
                }
            }

            System.out.print("Categoría de zona (Exterior / Interior / Semi-techado): ");
            String categoriaHab = scanner.nextLine().trim();

            Habitat habitatUsuario = new Habitat(nombreHab, limpiezaHab, categoriaHab);
            Habitat jaulaMonos = new Habitat("Recinto de Primates", 30, "Semi-techado");
            Habitat sabana = new Habitat("Sabana Africana", 50, "Exterior");

            // 2. CAPTURA DE CUIDADOR
            System.out.println("\n--- REGISTRO DE CUIDADOR ---");
            System.out.print("ID del cuidador (ej. C001): ");
            String idCuidador = scanner.nextLine().trim();
            System.out.print("Nombre del cuidador: ");
            String nombreCuidador = scanner.nextLine().trim();

            Cuidador cuidador1 = new Cuidador(idCuidador, nombreCuidador);
            Limpiador limpiador1 = new Limpiador("L001", "Luis");

            // 3. ANIMALES BASE
            Animal mufasa = new Leon("Mufasa", 5);
            Animal george = new Gorila("Jorge", 3);
            Animal paco = new Avestruz("Paco", 2);
            Animal melman = new Elefante("Dumbo", 7);
            Animal simba = new Leon("Simba", 1);

            // 4. PRUEBA DE ASIGNACIONES Y CAPTURA CONTROLADA DE EXCEPCIONES
            System.out.println("\n=== ASIGNACIONES DE ANIMALES ===");
            Animal[] animalesParaAsignar = { mufasa, george, paco, melman, simba };

            for (Animal a : animalesParaAsignar) {
                try {
                    cuidador1.agregarAnimal(a);
                } catch (ReglaNegocioException e) {
                    System.out.println(">> [EXCEPCIÓN CAPTURADA]: " + e.getMessage());
                }
            }

            System.out.println("\n=== ASIGNACIONES DE HÁBITATS ===");
            try {
                limpiador1.agregarHabitat(sabana);
                limpiador1.agregarHabitat(jaulaMonos);
                limpiador1.agregarHabitat(habitatUsuario);
            } catch (ReglaNegocioException e) {
                System.out.println(">> [EXCEPCIÓN CAPTURADA]: " + e.getMessage());
            }

            // 5. POLIMORFISMO DE COMPORTAMIENTO
            System.out.println("\n=== COMPORTAMIENTO ANIMAL ===");
            cuidador1.atenderAnimales();
            cuidador1.atenderAnimales(mufasa);

            limpiador1.desinfectarHabitats();

            // 6. POLIMORFISMO CON INTERFAZ AUDITABLE
            System.out.println("\n==================================================");
            System.out.println("     REPORTE POLIMÓRFICO DE AUDITORÍA UNIFICADA   ");
            System.out.println("==================================================");
            listaAuditoria.add(cuidador1);
            listaAuditoria.add(limpiador1);
            listaAuditoria.add(habitatUsuario);
            listaAuditoria.add(sabana);
            listaAuditoria.add(jaulaMonos);

            for (Auditable elemento : listaAuditoria) {
                System.out.println(elemento.generarReporteAuditoria());
            }

        } catch (Exception e) {
            System.err.println("Se produjo un error general en la ejecución: " + e.getMessage());
        } finally {
            // Cierre seguro del recurso Scanner
            scanner.close();
            System.out.println("\n[SISTEMA]: Recursos de entrada (Scanner) cerrados correctamente.");
        }
    }
}