package av2antiga1;

public abstract class Astronauta {
    private static int qtdAstronauta;
    protected String nome;
    protected String cor;
    private int nAstronauta;
    boolean skin1;
    boolean pet1;
    
    Skin skin;
    Pet pet;

    public int getnAstronauta() {
        return nAstronauta;
    }

    public void setnAstronauta(int nAstronauta) {
        this.nAstronauta = nAstronauta;
    }

    
    public Astronauta(){
        qtdAstronauta++;
        setnAstronauta(qtdAstronauta);
    }
    
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }
    
    public abstract void mostraInfo();
   
    public abstract void reportar();
    
    public abstract void votar();
    
    
}
