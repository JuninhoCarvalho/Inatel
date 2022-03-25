package mariokart;

public class Piloto {
    
    String piloto;
    boolean vilao;
    
    
    void soltaSuperPoder()
    {
        if(vilao == true)
            System.out.println(piloto + " jogou a casca da banana e o oponente"
                    + " saiu deslizando pela pista!");
        
        else
            System.out.println(piloto + " acertou o raio nos competidores"
                    + " e agora estão todos desnorteados!");
     
    }
    
}
