package cap9;

public class Conta {
    public float saldo;
    
    
    public void sacar(float valor){
        if(valor<=saldo){
            System.out.println("O valor pode ser sacado!");
            saldo-=valor;
        }
        else{
            throw new SaldoInsuficienteException();
        }
        
    }
}
