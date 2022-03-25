package butickets;

public class Camarote extends Ingresso {
    private String tamanhoCamiseta;
    
    @Override
    public void mostraInfos(){
        super.mostraInfos();
        System.out.println("Tipo do Ingresso: Camarote");
        System.out.println("Tamanho da Camiseta: " + tamanhoCamiseta);
    }
}
