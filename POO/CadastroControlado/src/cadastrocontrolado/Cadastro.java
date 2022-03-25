package cadastrocontrolado;

public class Cadastro {
    
    String[] codigosValidos = new String[50];
    String[] codigosInvalidos = new String[50];
    
    
    public void addCodigo(String codigo){
        //Verificação se o codigo é valido
        //Se for valido é adicionado no array de codigos validos!
        if(codigo.length() == 7 && (codigo.startsWith("mp-") || 
                codigo.startsWith("dp-") || codigo.startsWith("bp-"))){
            for (int i = 0; i < codigosValidos.length; i++) {
                if(codigosValidos[i]==null){
                    codigosValidos[i] = codigo;
                    break;
                }
            }
            
        }
        //Caso nao seja valido é lançada uma excessao personalizada
        //E entao esse codigo é adicionado no array de codigos invalidos
        else{
            try {
                throw new CodigoDesconhecidoException();
                
            } catch (CodigoDesconhecidoException e) {
                for (int i = 0; i < codigosInvalidos.length; i++) {
                    if(codigosInvalidos[i]==null){
                        codigosInvalidos[i] = codigo;
                        break;
                    }
                }
            
            }
        }
    }
    
    //metodo para mostrar codigos validos e invalidos
    public void mostraCodigos(){
        System.out.println("Codigos Validos:");
        for (int i = 0; i < codigosValidos.length; i++) {
            if(codigosValidos[i]!=null)
                System.out.println(codigosValidos[i]);
        }
        System.out.println("------------------------------");
        System.out.println("Codigos invalidos:");
        for (int i = 0; i < codigosInvalidos.length; i++) {
            if(codigosInvalidos[i]!=null)
                System.out.println(codigosInvalidos[i]);
        }
    }
    
}
