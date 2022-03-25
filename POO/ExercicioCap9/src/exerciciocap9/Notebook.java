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
public class Notebook extends Produto {
    
    private double armazenamento;
    private String gpu;
    private String processador;
    
    public Notebook(String nome, double preco, double armazenamento, String gpu, String processador)
    {
        this.setNome(nome);
        this.setPreco(preco);
        this.setArmazenamento(armazenamento);
        this.setGpu(gpu);
        this.setProcessador(processador);
    }

    public void setArmazenamento(double armazenamento) {
        this.armazenamento = armazenamento;
    }

    public void setGpu(String gpu) {
        this.gpu = gpu;
    }

    public void setProcessador(String processador) {
        this.processador = processador;
    }

    public double getArmazenamento() {
        return armazenamento;
    }

    public String getGpu() {
        return gpu;
    }

    public String getProcessador() {
        return processador;
    }
    
    @Override
    public void etiquetaPreco()
    {
        super.etiquetaPreco();
        
        System.out.println("Configuracoes:");
        System.out.println("Armazenamento de " + getArmazenamento());
        System.out.println("Placa de video " + getGpu());
        System.out.println("Processador " + getProcessador());
    }
}
