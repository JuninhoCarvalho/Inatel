package mariokart;

public class MarioKart {

    public static void main(String[] args) {
        
        //OBJETO 1 
        //Objeto da classe parte
        Piloto p1 = new Piloto();
        
        p1.piloto = "Mário";
        p1.vilao = false;
        
        //Objeto da classe todo
        Kart k1 = new Kart();
        
        //Infos do Kart
        k1.nome = "Blue Falcon";
        k1.mot.cilindradas = "150 cilindradas";
        k1.mot.velocidadeMaxima = 150f;
        
        //AGREGAÇÃO DA PARTE COM O TODO
        k1.pilot = p1;
        
        System.out.println("Competidor 1:");
        //SAIDA DOS MÉTODOS
        p1.soltaSuperPoder();
        
        k1.pular(p1.piloto);
        k1.soltaTurbo(p1.piloto, k1.mot.velocidadeMaxima, k1.nome, 
                k1.mot.cilindradas);
        k1.fazerDrift();
        
        System.out.println("---------------------------------------");
        
        System.out.println("Competidor 2:");
        //OBJETO 2
        Piloto p2 = new Piloto();
        p2.piloto = "Donkey Kong";
        p2.vilao = true;
        
        Kart k2 = new Kart();
        k2.nome = "Egg1";
        k2.mot.cilindradas = "100 cilindradas";
        k2.mot.velocidadeMaxima = 100f;
       
        //Agregacao
        k2.pilot = p2;
        
        //MÈTODOS        
        p2.soltaSuperPoder();
        k2.pular(p2.piloto);
        k2.soltaTurbo(p2.piloto, k2.mot.velocidadeMaxima, k2.nome, 
                k2.mot.cilindradas);
        k2.fazerDrift();
                     
    }
    
}
