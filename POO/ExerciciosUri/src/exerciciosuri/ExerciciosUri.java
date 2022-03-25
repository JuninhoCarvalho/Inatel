/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exerciciosuri;

import java.util.Scanner;

/**
 *
 * @author Juninho
 */
public class ExerciciosUri {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner t = new Scanner(System.in);
        
        String a = t.nextLine();
        double b = t.nextDouble();
        double c = t.nextDouble();
        double m = b + (c*0.15f);
        
        System.out.printf("TOTAL = R$ %.2f",m);
        System.out.println("");
        
        
      
    }
    
}
