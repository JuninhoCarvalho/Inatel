/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ExerciciosAula2;

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author Juninho
 */
public class CanYouGessTheNumber {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        Random rand = new Random();
        int numAleatorio = rand.nextInt(400)+1;
        int x;
        int i=0;
        
        do {
            //System.out.print("Adivinhe o numero de 1 a 10: "); 
            x = rand.nextInt(400)+1;
            i++;
            
            if(x == numAleatorio)
            {
                System.out.println("Achou depois de " + i + " tentantivas");
                System.out.println("O numero era " + numAleatorio);
            }
            
        } while (x != numAleatorio);
    }
    
}
