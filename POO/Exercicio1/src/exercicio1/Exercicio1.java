package exercicio1;

import java.util.Scanner;

public class Exercicio1 {

    public static void main(String[] args) {
        
        Scanner t = new Scanner(System.in);
        
        System.out.print("Digite um valor para o raio: ");
        double r = t.nextDouble();
        System.out.println("Circunferencia: " + Calculadora.circunferencia(r));
        System.out.println("Volume: " + Calculadora.volume(r));
    }
    
}
