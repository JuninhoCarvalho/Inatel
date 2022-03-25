package cofrinhointeligente;

import java.util.ArrayList;
import java.util.Collections;

public class Cofrinho {
    //Criando o ArrayList para as moedas
    ArrayList<Moeda> moedas = new ArrayList();
    
    //Método para adicionar as moedas ao array
    public void addMoeda(Moeda m){
        moedas.add(m);
    }
    
    //Metódo para somatório das moedas
    public double getValorTotal(){
        double s=0;
        
        for(int i = 0; i < moedas.size(); i++){
            s+=moedas.get(i).getValor();
        }
        
        return s;
    }
    
    //Metódo para quantidade de moedas contidas
    public int getQuantMoedas(){
        return moedas.size();
    }
    
    //Metódo para retornar moeda de maior valor
    public Moeda getMoedaMaiorValor(){
        return Collections.max(moedas);
    }
    
    //Método para mostrar moedas em ordem crescente
    public void ordenaMoedas(){
        Collections.sort(moedas);
        
        for (int i = 0; i < moedas.size(); i++) {
            System.out.println("R$ " + moedas.get(i).getValor());
        }
        
    }
}
