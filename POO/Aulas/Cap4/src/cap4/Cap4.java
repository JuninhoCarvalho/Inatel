/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cap4;

/**
 *
 * @author Juninho
 */
public class Cap4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int idades[] = new int[10]; //criando um array
        
        //lenght retona o tamanho do array
        /*
        for (int i = 0; i < idades.length; i++) {
            System.out.println(idades[i]);  
        }*/
        
        /*For EACH
        //1 - tipo do dado que vai ser lido
        //2 - var aux
        //3 - nome do seu array
        for(int aux : idades)
        { 
            System.out.println(aux);   
        }*/  
        
        Conta[] contas = new Conta[10];
        
        for (Conta aux : contas) {
            System.out.println(aux);
        }
        
        
    }
    
}
