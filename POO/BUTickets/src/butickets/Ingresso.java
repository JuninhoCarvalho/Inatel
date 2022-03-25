package butickets;

import java.util.Date;

public class Ingresso {
    //variavel para gerar numeros automaticamente para cada novo ingresso
    private static long numberGenerator;
    private long numero;
    protected float valorIngresso;
    protected static float taxaCartao;
    protected Date dataHoraCompra;
    
    Ingresso(){
        //Logica para gerar automaticamente num. ingresso
        numberGenerator++;
        numero = numberGenerator;
        //setando a taxa do cartao
        taxaCartao = 5;
        dataHoraCompra = new Date();
        
    }
    
    public float calculaTotalIngresso(){
        
        return valorIngresso+taxaCartao;
    }
    
    public void mostraInfos(){
        System.out.println("Numero do pedido: " + numero);
        System.out.println("Data de compra: " + dataHoraCompra);
        System.out.println("Valor do ingresso: " + calculaTotalIngresso());
        System.out.println("Taxa do Cartao: " + taxaCartao);
    }
    
}
