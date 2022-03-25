package francisco1628av2;

public class Jogador extends Pessoa implements Recuperar,Loja {

    private int nivel;
    private boolean passeDeBatalha;
    private int vida;
    private int escudo;
    
    public Skin skin;
    public Mochila mochila;
    
    
    public int getNivel() {
        return nivel;
    }

    public void setNivel(int nivel) {
        this.nivel = nivel;
    }

    public boolean isPasseDeBatalha() {
        return passeDeBatalha;
    }

    public void setPasseDeBatalha(boolean passeDeBatalha) {
        this.passeDeBatalha = passeDeBatalha;
    }

    public int getVida() {
        return vida;
    }

    public void setVida(int vida) {
        this.vida = vida;
    }

    public int getEscudo() {
        return escudo;
    }

    public void setEscudo(int escudo) {
        this.escudo = escudo;
    }
    
    public Jogador(String nome1, int nivel1, boolean passe1, int vida1, int escudo1){
        setNome(nome1);
        setNivel(nivel);
        setPasseDeBatalha(passe1);
        setVida(vida1);
        setEscudo(escudo1);
    }
    
    @Override
    public void mostraInfo(){
        super.mostraInfo();
        System.out.println("Vida = " + getVida());
        System.out.println("Escudo = " + getEscudo());
        if(skin.contemSkin){
            System.out.println("Skin: " + skin.getNome());
            System.out.println("Raridade: " + skin.getRaridade());
        }
        else
            System.out.println("Não contém skin!");
        if(mochila.contemMochila)
            System.out.println("Mochila: " + mochila.getRaridade());
        else
            System.out.println("Não contém mochila!");
        
        System.out.println("---------------------------------------");
    }
    
    
    @Override
    public void fazMissao() {
        System.out.println(getNome() + " completou uma missao!");
        setNivel(getNivel()+1);
    }

    @Override
    public void recuperarVida() {
        if(getVida()<=85)
            setVida(getVida()+15);
        
        else
            setVida(100);
    }

    @Override
    public void recuperarEscudo() {
        if(getEscudo()<=75)
            setEscudo(getEscudo()+25);
        
        else
            setEscudo(100);
    }

    @Override
    public void gastarVbucks() {
        System.out.println("Gastou V Bucks na loja!");
    }

    @Override
    public void comprarVbucks() {
        System.out.println("Comprou V Bucks na loja!");
    }
    
}
