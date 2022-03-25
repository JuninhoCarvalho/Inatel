package herança1lab;

public class Camisa extends Produto{
    private String cor;
    private String tamanho;
    
    public Camisa(String nome, double Preco, String cor, String tamanho){
        this.setNome(nome);
        this.setPreco(Preco);
        this.setCor(cor);
        this.setTamanho(tamanho);
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public String getTamanho() {
        return tamanho;
    }

    public void setTamanho(String tamanho) {
        this.tamanho = tamanho;
    }
    
    @Override
    public void etiquetaPreco(){
        super.etiquetaPreco();
        System.out.println("Cor: " + getCor());
        System.out.println("Tamanho: " + getTamanho());
        System.out.println("-------------------------");
        
    }
    
}
