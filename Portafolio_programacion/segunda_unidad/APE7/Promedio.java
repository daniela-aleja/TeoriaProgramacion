import java.util.Scanner;
public class Promedio {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Ingrese la nota de la evaluacion individual: ");
        float notaIndividual = sc.nextFloat();
        System.out.print("Ingrese la nota grupal: ");
        float notaGrupal = sc.nextFloat();
        System.out.print("Ingrese la nota de Examen: ");
        float notaExamen = sc.nextFloat();
        if ((notaIndividual < 0 || notaIndividual > 10) || (notaGrupal < 0 || notaGrupal > 10) || (notaExamen < 0 || notaExamen > 10)){
            System.out.println("Todas las calificaciones deben estar ente 0 y 10");
        }else{
            float notaFinal = (notaIndividual*0.30f) + (notaGrupal*0.30f) + (notaExamen*0.40f);
            if (notaFinal >= 9) {
                System.out.println("Nivel de desempeño: Excelente");
            }else{
                if (notaFinal >= 8) {
                    System.out.println("Nivel de desempeño: Muy bueno");
                }else{
                    if (notaFinal >= 7) {
                        System.out.println("Nivel de desempeño: Bueno");
                    }else{
                        if (notaFinal >= 5) {
                            System.out.println("Nivel de desempeño: Regular");
                        }else{
                            System.out.println("Nivel de desempeño: Deficiente");
                        }
                    }
                }
            }
            if (notaFinal < 7) {
                System.out.println("El estudiante requiere refuerzo academico");
            }
            if (notaFinal >= 9) {
                System.out.println("¡Felicitaciones! Rendimiento sobresaliente.");
            }
            if (notaFinal >= 7) {
                System.out.println("Aprobado");
            }else{
                System.out.println("Reprobado");
            }
            System.out.println("Evaluacion individual: "+notaIndividual);
            System.out.println("Trabajo grupal: "+notaGrupal);
            System.out.println("Evaluacion final: "+notaExamen);
            System.out.println("Promedio ponderado: "+notaFinal);
        }
        sc.close();
    }
}
