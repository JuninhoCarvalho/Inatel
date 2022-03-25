/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exerciciocap9;

/**
 *
 * @author Ralph
 */
public class Produto {
    
    private String nome;
    private double preco;

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public String getNome() {
        return nome;
    }

    public double getPreco() {
        return preco;
    }
    
    public void etiquetaPreco()
    {
        System.out.println("------------------------------");
        System.out.println("Produto: " + getNome());
        System.out.println("Preco: " + getPreco());
    }
}
