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
public abstract class Unidade {
    protected String endereco;
    protected String nomeResponsavel;
    protected Pizza[] pizzas = new Pizza[3];
    
    public void mostraPizzas(){
        
        for (int i = 0; i < pizzas.length; i++) {
            if(pizzas[i]!=null)
            {
               
                pizzas[i].mostraIngredientes();
                System.out.println("Brinde:" + pizzas[i].mostraBrinde());
                System.out.println("Preço: " + pizzas[i].preco);
                System.out.println("-------------------------");
            }
        }
        
    }
    
    
}
