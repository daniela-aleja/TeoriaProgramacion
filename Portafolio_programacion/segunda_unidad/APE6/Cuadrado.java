import java.util.Scanner;

public class Cuadrado {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Ingrese un número real a: ");
        double a = sc.nextDouble();

        double cuadrado = Math.pow(a, 2);   // a ^ 2
        double resto = cuadrado % 2;        // resto de una división adicional

        if (cuadrado >= 0) {
            System.out.println("El cuadrado de " + a + " es " + cuadrado);
            System.out.println("El resto de dividir " + cuadrado + " entre 2 es " + resto);
        }

        System.out.println("¡Sigue adelante, cada línea de código te acerca a ser un gran programador!");

        sc.close();
    }
}