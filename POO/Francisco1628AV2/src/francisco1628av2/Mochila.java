package francisco1628av2;

public class Mochila {
    private String raridade;
    public boolean contemMochila;

    public String getRaridade() {
        return raridade;
    }

    public void setRaridade(String raridade) {
        this.raridade = raridade;
    }
    
    public Mochila(String raridade1, boolean contem){
        setRaridade(raridade1);
        this.contemMochila = contem;
    }
}
