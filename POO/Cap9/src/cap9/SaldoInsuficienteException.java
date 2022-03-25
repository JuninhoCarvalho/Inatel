package cap9;

public class SaldoInsuficienteException extends RuntimeException{
    public SaldoInsuficienteException(){
        System.out.println("Exception de saldo insuficiente!!!");
    }
}
