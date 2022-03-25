package pacmanex;

public abstract class Personagem implements Movel{
    
    protected String cor;
    protected int posicaoX;
    protected int posicaoY;
    
    public Personagem(String cor, int x, int y)
    {
        this.setCor(cor);
        this.setPosicaoX(x);
        this.setPosicaoY(y);
    }
    
    @Override
    public void moverPraCima() {
        
        setPosicaoX(getPosicaoX()+1);
        
        if(getPosicaoX() > 100)
        {
            setPosicaoX(getPosicaoX()-1);
        }
    }

    @Override
    public void moverPraBaixo() {
        setPosicaoX(getPosicaoX()-1);
        
        if(getPosicaoX() < -100)
        {
            setPosicaoX(getPosicaoX()+1);
        }
    }

    @Override
    public void moverPraDireita() {
        setPosicaoY(getPosicaoY()+1);
        
        if(getPosicaoY() > 100)
        {
            setPosicaoY(getPosicaoY()-1);
        }
        
    }

    @Override
    public void moverPraEsquerda() {
        setPosicaoY(getPosicaoY()-1);
            
        if(getPosicaoY() < -100)
        {
            setPosicaoY(getPosicaoY()+1);
        }
        
        
    }
    
    public void setCor(String cor) {
        this.cor = cor;
    }

    public int getPosicaoX() {
        return posicaoX;
    }

    public void setPosicaoX(int posicaoX) {
        this.posicaoX = posicaoX;
    }

    public int getPosicaoY() {
        return posicaoY;
    }

    public void setPosicaoY(int posicaoY) {
        this.posicaoY = posicaoY;
    }
}
