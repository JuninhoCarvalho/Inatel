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
class Pet {

    String nome;
    String especie;
    String som;
    String comida;
    int idade;

    void comer() {
        System.out.println(nome + " esta se alimentando de " + comida);
    }

    void dormir(int horas) {
        System.out.println("Dormiu: " + horas + "hrs.");
    }

    void movimentar(int metros) {
        System.out.println("Movimentou: " + metros + "m.");
    }

    void fazerBarulho() {
        System.out.println(nome + " esta " + som);
    }
}
