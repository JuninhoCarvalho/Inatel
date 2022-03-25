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
public class NPA {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)
    {
        //NPA!!!
        Scanner teclado = new Scanner(System.in);
        
        System.out.print("Entre com sua NPA: ");
        int NPA = teclado.nextInt();
        int NFA;
        
        if(NPA>=60)
            System.out.println("Aprovado");
        
        else if(NPA>=30 && NPA<60)
        {
            System.out.println("NP3");
            System.out.print("Entre com sua NP3: ");
            int NP3 = teclado.nextInt();
           
            NFA = (NPA+NP3)/2;
            
            if(NFA >=50)
                System.out.println("Aprovado na NP3");
        }
        
        else
            System.out.println("Reprovado");

    }    
    
}