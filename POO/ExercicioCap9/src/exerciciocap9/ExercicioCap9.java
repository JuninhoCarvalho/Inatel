/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exerciciocap9;

import java.util.Scanner;

/**
 *
 * @author Ralph
 */
public class ExercicioCap9 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        // Criando o vetor da classe mae
        Produto produtos[] = new Produto[5];
        
        // Instanciando e inserindo as informacoes nos objetos
        Notebook note1 = new Notebook("Lenovo", 2999, 256, "Intel HD 4000" , "AMD Ryzen 3-3200Y");
        Notebook note2 = new Notebook("Lenovo", 3599.99, 256, "GeForce MX 110", "i5-8265U");
        Camiseta camisa1 = new Camiseta("Gucci", 89.99, "Preta", "P");
        Camiseta camisa2 = new Camiseta("Adidas", 45.99, "Azul escuro", "M");
        
        // Vetor da classe mae guardando objetos das classes filhas
        produtos[0] = note1;
        produtos[1] = note2;
        produtos[2] = camisa1;
        produtos[3] = camisa2;

        // Informacoes de saida
        System.out.println("Produtos listados:");
        for (int i = 0; i < produtos.length; i++) {
            if(produtos[i] != null)
            {
                if(produtos[i] instanceof Notebook)
                {
                    Notebook n = (Notebook)produtos[i];
                    n.etiquetaPreco();
                }
                else if(produtos[i] instanceof Camiseta)
                {
                    Camiseta c = (Camiseta)produtos[i];
                    c.etiquetaPreco();
                }
            }
        }
    }   
}
