package cadastrocontrolado;

public class CodigoDesconhecidoException extends RuntimeException{
    
    //Excessao personalizda
    public CodigoDesconhecidoException(){
        System.out.println("Exceção de código desconhecido detectada!");
    }
    
}
