package butickets;

public class CarrinhoDeCompras {
    private String loginCliente;
    
    private Ingresso[] ingressos;
    
    CarrinhoDeCompras(){
        ingressos = new Ingresso[10];
        
    }
    
    public void addIngresso(Ingresso ing){
        for (int i = 0; i < ingressos.length; i++) {
            if(ingressos[i] == null){
                ingressos[i] = ing;
                break;
            }
        }
    }
    
    public void mostraDetalhesCompra(){
        System.out.println("Compras feitas por " + loginCliente);
        for (int i = 0; i < ingressos.length; i++) {
            if (ingressos[i] != null)
                ingressos[i].mostraInfos();
        
            System.out.println("---------------------------------------------");
        }
        
        
    }
    
}
