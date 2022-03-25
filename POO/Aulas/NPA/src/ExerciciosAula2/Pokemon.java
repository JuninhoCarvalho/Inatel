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
public class Pokemon {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //POKEMON!!!
        
        Scanner teclado = new Scanner(System.in);
        
        System.out.print("Entre com o Pokemon: ");
        String Poke = teclado.nextLine();
        System.out.println("");
        Poke = Poke.toUpperCase();
        
        System.out.println("Sua fraqueza é: ");
        switch (Poke){
            case "FOGO":
                System.out.println("AGUA");
                break;
            
            case "AGUA":
                System.out.println("ELETRICIDADE");
                break;
                
            case "ELETRICIDADE":
                System.out.println("PEDRA");
                break;
                
            case "PEDRA":
                System.out.println("GELO");
                break;
                
            case "GELO":
                System.out.println("FOGO");
                break;
                
            case "PLANTA":
                System.out.println("FOGO");
                break;
                
            default:
                System.out.println("Desconhecida!");
        }    
    }
    
}
