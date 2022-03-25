package pacmanex;

import java.util.Random;

public class PacManEx {

    public static void main(String[] args) {
        int i=0;
        
        Personagem personagens[] = new Personagem[5];
        
        PacMan pm = new PacMan("Amarelo",0,0,0,1);
        Inimigo i1 = new Inimigo("Azul",-100,100);
        Inimigo i2 = new Inimigo("Branco",-100,-100);
        Inimigo i3 = new Inimigo("Laranja",100,100);
        Inimigo i4 = new Inimigo("Roxo",100,-100);
        
        Random rPos = new Random();
        
        personagens[0] = pm;
        personagens[1] = i1;
        personagens[2] = i2;
        personagens[3] = i3;
        personagens[4] = i4;
        
        while(pm.getVidas()!=0)
        {            
            if(rPos.nextInt(1) == 1)
            {
                personagens[i].setPosicaoX(personagens[i].getPosicaoX()+1);
            }
            else
            {
                personagens[i].setPosicaoX(personagens[i].getPosicaoX()-1);
            }
            
            if(rPos.nextInt(1) == 1)
            {
                personagens[i].setPosicaoY(personagens[i].getPosicaoY()+1);
            }
            else
            {
                personagens[i].setPosicaoY(personagens[i].getPosicaoY()+1);
            }
                
            
            if(i==0)
            {
                for(int j=1; j<5; j++){
                    if(pm.getPosicaoX() == personagens[i].getPosicaoX() && pm.getPosicaoY() == personagens[i].getPosicaoY()){
                        pm.perdeVida();
                    }
                }
                pm.ganhaPonto();
            }
            
            i++;
            
            if(i==5){
              i=0;  
            }
        }
        
        System.out.println("Game Over!!!");
        System.out.println("Pontuação do PacMan: " + pm.getPontuacao());
    }
}
