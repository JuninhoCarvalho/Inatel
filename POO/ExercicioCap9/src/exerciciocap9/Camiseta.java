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
public class Camiseta extends Produto {
    
    private String cor;
    private String tamanho;

    public Camiseta(String nome, double preco, String cor, String tamanho)
    {
        this.setNome(nome);
        this.setPreco(preco);
        this.setCor(cor);
        this.setTamanho(tamanho);
    }
    
    public void setCor(String cor) {
        this.cor = cor;
    }

    public void setTamanho(String tamanho) {
        this.tamanho = tamanho;
    }

    public String getCor() {
        return cor;
    }

    public String getTamanho() {
        return tamanho;
    }
    
    @Override
    public void etiquetaPreco()
    {
        super.etiquetaPreco();
        
        System.out.println("Cor " + getCor());
        System.out.println("Tamanho " + getTamanho());
    }
}
