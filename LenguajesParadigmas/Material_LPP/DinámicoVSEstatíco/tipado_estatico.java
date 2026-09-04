// Tipado estático fuerte
public class tipado_estatico {
    public static void main(String[] args) {
        // Declaras la variable 'numero' como un entero (int).
        int numero = 42;
        System.out.println("El número es: " + numero);

        // Si intentas asignar un valor de otro tipo, como un texto (String), obtendrás
        // un error de compilación.
        // Descomenta la siguiente línea para ver el error.
        // numero = "cuarenta y dos"; // Error de compilación

        // Para cambiar el valor, debes asignar otro entero.
        numero = 100;
        System.out.println("El nuevo número es: " + numero);

        // Si necesitas trabajar con diferentes tipos, debes usar conversiones
        // explícitas.
        String textoNumero = "25";
        int convertido = Integer.parseInt(textoNumero);
        int suma = numero + convertido;
        System.out.println("La suma es: " + suma); // Salida: 125
    }

}
