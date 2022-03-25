/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package AulaClassesEAcoes;

/**
 *
 * @author Juninho
 */
public class Pessoa {

    //ATRIBUTOS (CARACTERISTICAS)
    String nome;
    int idade;
    float peso;
    float altura;

    //METODOS (ACOES)
    void andar() {
        System.out.println(nome + " está andando!");
    }

    void falar() {
        System.out.println("A pessoa de peso " + peso + "Kg esta falando!");
    }
}
