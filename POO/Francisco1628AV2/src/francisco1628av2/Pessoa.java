package francisco1628av2;

public abstract class Pessoa {
    public static int qtdPessoas;
    private String nome;
    public int nPessoas;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public Pessoa(){
        qtdPessoas++;
        nPessoas = qtdPessoas;
    }
    
    public void mostraInfo(){
        System.out.println("Nome: " + getNome());
    }
    
    public abstract void fazMissao();
}
