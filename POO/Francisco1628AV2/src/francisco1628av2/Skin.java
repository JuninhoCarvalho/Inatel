package francisco1628av2;

public class Skin {
    private String nome;
    private String raridade;
    public boolean contemSkin;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getRaridade() {
        return raridade;
    }

    public void setRaridade(String raridade) {
        this.raridade = raridade;
    }
    
    public Skin(String nome1, String raridade1, boolean contemSkin1){
        setNome(nome1);
        setRaridade(raridade1);
        this.contemSkin = contemSkin1;
    }
    
    
}
