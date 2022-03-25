package cadastrocontrolado;

public class CadastroControlado {

    public static void main(String[] args) {
        Cadastro c = new Cadastro();//Criando um objeto Cadastro
        
        //adicionando todos os codigos desejados
        c.addCodigo("mp-a777");
        c.addCodigo("dp-4590");
        c.addCodigo("bp-01x8");
        c.addCodigo("mp981a");
        c.addCodigo("as-jk12");
        c.addCodigo("bp-12345");
        c.addCodigo("mp-j123");
        
        //chamando metodo para mostrar quais codigos sao validos e invalidos
        c.mostraCodigos();
    }

}
