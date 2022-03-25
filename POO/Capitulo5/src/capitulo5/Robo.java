package capitulo5;

import java.util.Date;

public class Robo {
    private static long serialNumberGenerator=0;
    private long serialNumber;
    private Date dataCriacao;
    
    Corpo corp;
    Processador proces;
    
    Robo(boolean temProcessador){
        corp = new Corpo();
        if(temProcessador)
            proces = new Processador();
        
        dataCriacao = new Date();
        
        //Criando um serial novo para um robo
        serialNumberGenerator++;
        
        //Novo robo recebendo o serial novo
        serialNumber = serialNumberGenerator;
    }
    
    void mostraConfigRobo(){
        System.out.println("1.Serial Number: " + serialNumber);
        System.out.println("2.Corpo");
        System.out.println("A.Tipo: " + corp.getTipo());
        System.out.println("B.Cor: " + corp.getCor());
        if(proces != null){
            System.out.println("3.Processador");
            System.out.println("A.Marca: " + proces.getMarca());
            System.out.println("B.Frequencia: " + 
                    proces.getFrequenciaProcessamento());
        
        }else
            System.out.println("Não ha processador!");
        
        System.out.println("-------------------------------------------------");
    }
    
    
}
