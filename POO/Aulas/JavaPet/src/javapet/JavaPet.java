/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javapet;

/**
 *
 * @author Juninho
 */
public class JavaPet {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        // DADOS PET 1
        Pet p1 = new Pet();
        p1.nome = "Billy";
        p1.especie = "Cachorro";
        p1.som = "Latindo";
        p1.comida = "Ração";
        p1.som = "Latindo";

        System.out.println("Ações do PET 1:");
        p1.comer();
        p1.dormir(10);
        p1.movimentar(500);
        p1.fazerBarulho();

        // DADOS PET 2
        Pet p2 = new Pet();
        p2.nome = "Morena";
        p2.especie = "Cavalo";
        p2.som = "Relinchando";
        p2.comida = "Pasto";
        p2.idade = 5;

        System.out.println();
        System.out.println("Ações do PET 2:");
        p2.comer();
        p2.dormir(10);
        p2.movimentar(1000);
        p2.fazerBarulho();

    }
    
}
