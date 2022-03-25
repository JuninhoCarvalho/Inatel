package francisco1628av2;

public class Francisco1628AV2 {

    public static void main(String[] args) {
        
      Pessoa[] pessoas = new Pessoa[10];//Array de pessoas
        
      Jogador j1 = new Jogador("Juninho",2,true,80,75);//Jogador 1
      Jogador j2 = new Jogador("AlanZoka",4,false,60,0);//Jogador 2
      
      Skin sk1 = new Skin("NeymarJr","Incomum",true);//Skin do jogador 1
      Skin sk2 = new Skin("Alok","Raro",true);//Skin do jogador 2
     
      //Classe parte Skin no todo Jogador
      j1.skin = sk1;
      j2.skin = sk2;
      
      Mochila m1 = new Mochila("Raro",true);
      Mochila m2 = new Mochila("Comum",true);
      
      //Classe Parte Mochila no Todo Jogador
      j1.mochila = m1;
      j2.mochila = m2;
      
      Bot b1 = new Bot("Tesla",true);//Bot 1
      Bot b2 = new Bot("Pivoto",false);//Bot 2
      
      //Up Casting
      pessoas[0] = j1;
      pessoas[1] = j2;
      pessoas[2] = b1;
      pessoas[3] = b2;
      
        //Chamdando todas as funcoes para array de pessoas
        for (int i = 0; i < pessoas.length; i++) {
            if(pessoas[i]!=null){
                if(pessoas[i] instanceof Jogador){
                    Jogador j = (Jogador)pessoas[i];//Down Casting se for Jogador
                    System.out.println("Jogador: " + j.nPessoas + " Jogador!");
                    j.fazMissao();
                    j.recuperarVida();
                    j.recuperarEscudo();
                    j.gastarVbucks();
                    j.comprarVbucks();
                    j.mostraInfo();
                }
                else if(pessoas[i] instanceof Bot){
                    Bot b = (Bot)pessoas[i];//Down Casting se for Bot
                    System.out.println("Jogador: " + b.nPessoas + " Bot!");
                    b.fazMissao();
                    b.passarMissao();
                    b.mostraInfo();
                }
                
            }
        }
        //Saida para qtd total de Pessoas
        System.out.println("Contém " + Pessoa.qtdPessoas +
                " jogadores neste servidor!");
      
    }

}
