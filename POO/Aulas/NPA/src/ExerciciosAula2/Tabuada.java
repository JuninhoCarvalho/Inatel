/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ExerciciosAula2;

import java.util.Scanner;

/**
 *
 * @author Juninho
 */
public class Tabuada {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       //TABUADA
        Scanner teclado = new Scanner(System.in);
        
        System.out.print("Tabuada de: ");
        int tab = teclado.nextInt();
        
        System.out.print("\nCom inicio em: ");
        int i = teclado.nextInt();
        
        System.out.print("\nTerminando em: ");
        int f = teclado.nextInt();

        for (int j = i; j <= f; j++)
            System.out.println(tab + " * " + j + " = " + (tab*j));
    }
    
}
