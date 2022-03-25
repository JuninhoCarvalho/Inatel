package pacmanex;

public class PacMan extends Personagem{
    
    private int pontuacao;
    private int vidas;
    
    public PacMan(String cor, int x, int y, int pontuacao, int vida) {
        super(cor, x, y);
        this.setPontuacao(pontuacao);
        this.setVidas(vida);
    }

    public void perdeVida()
    {
        setVidas(getVidas()-1);
    }
    public void ganhaPonto()
    {
        setPontuacao(getPontuacao()+1);
    }

    public void setPontuacao(int pontuacao) {
        this.pontuacao = pontuacao;
    }

    public void setVidas(int vida) {
        this.vidas = vida;
    }

    public int getPontuacao() {
        return pontuacao;
    }

    public int getVidas() {
        return vidas;
    }
    
    
}
