package modificadordeacesso;

public class Conta {
    private static int qtdClientes;
    private double saldo;
    public int nCliente;
    Cliente client;
    
    public Conta(){
        qtdClientes++;
        nCliente = qtdClientes;
    }
    
    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldoIn) {
        this.saldo = saldoIn;
    }
    
    public void depositaValor(double valor){
        saldo += valor;
    }
    
    public void saca(double valor){
        if(valor <= saldo)
            saldo-=valor;
        
        else
            System.out.println("Você não possui esta quantida na conta!");
    }
    
    public void extrato(){
        System.out.println("Cliente " + nCliente + ": " + client.getNome());
        System.out.println("Cpf: " + client.getCpf());
        System.out.println("Saldo do cliente: " + saldo);
        System.out.println("-------------------------");
    }
    
}
