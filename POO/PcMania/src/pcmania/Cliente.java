package pcmania;

public class Cliente {
    String nome;
    long cpf;
    
    float calculaTotalCompra(String a){
        float c=0;
        
        if("1".equals(a))
            c=1300;
        
        else if("2".equals(a))
            c=1800;
        
        else
            c=2800;
        
        return c;
    }
}
