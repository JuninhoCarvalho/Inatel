package mariokart;


public class Kart {
  
    //Nome do Kart
    String nome;
    
    //Classe parte é criada dentro do TODO
    Motor mot = new Motor();
    
    //Referencia para agregação com a classe parte
    Piloto pilot;
    
    //MÉTODOS
    void pular(String piloto)
    { 
        System.out.println(piloto + " pulou o obstáculo!");
    }
    
    void soltaTurbo(String piloto, float vMax, String kart, String cilindradas)
    {
        System.out.println(piloto + " está mais rápido do que nunca!!! "
                + vMax + " Km/h! Seu " + kart + " " + cilindradas
                + " é realmente muito potente!");
    }
    
    void fazerDrift()
    {
        System.out.println("Que deslizada! Isso sim que é dirigir com estilo!");
    }
        
}
