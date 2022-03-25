/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package promocaopizzahut;

/**
 *
 * @author Juninho
 */
public class Brasileira extends Pizza {

    @Override
    public void mostraIngredientes() {
        System.out.println("Brasileira");
        System.out.println("Ingredientes:");
        System.out.println("- Mussarela");
        System.out.println("- Requeijao");
        System.out.println("- Presunto");
        System.out.println("- Azeitona");
    }

    @Override
    public String mostraBrinde() {
        return "Chaveiro!";
    }
    
    
    
}
