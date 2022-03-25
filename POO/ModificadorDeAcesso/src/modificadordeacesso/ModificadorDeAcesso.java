package modificadordeacesso;

public class ModificadorDeAcesso {

    public static void main(String[] args) {      
        //Criando uma nova conta classe todo
        Conta c1 = new Conta();
        c1.setSaldo(1000);
        
        Conta c2 = new Conta();
        c2.setSaldo(20000);
        
        //Criando um novo cliente classe parte
        Cliente cl1 = new Cliente();
        cl1.setNome("Juninho");
        cl1.setCpf(1231423425);
        
        Cliente cl2 = new Cliente();
        cl2.setNome("Ana");
        cl2.setCpf(1239435824);
        
        //agregando a parte com o todo
        c1.client = cl1;
        c2.client = cl2;
        
        //Utilizando metodos das classes
        c1.depositaValor(400);
        c1.saca(600);
        c1.extrato();
        
        c2.depositaValor(10);
        c2.saca(100);
        c2.extrato();
        
    }

}
