package butickets;

public class VIP extends Ingresso{
    protected String tamanhoAbada;
    
    @Override
    public void mostraInfos(){
        super.mostraInfos();//saida da mãe + tamanho do abada
        System.out.println("Tipo do Ingresso: VIP");
        System.out.println("Tamanho do Abada: " + tamanhoAbada);       
    }
    
}
