package redessociais;

public class Usuario{
    private String nome;
    private String email;
    RedeSocial redes[];

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }
    
    public Usuario(String nome1, String em, RedeSocial[] aux){
        this.setNome(nome1);
        this.setEmail(em);
        this.redes = aux;
    }
    
    public void Usuario(RedeSocial[] redesSociais){
        for (int i = 0; i < redesSociais.length; i++) {
            if(redesSociais[i]!=null){
                System.out.println("Usuario: " + getNome());
                System.out.println("Email: " + getEmail());
                if(redesSociais[i] instanceof Facebook){
                    Facebook f = (Facebook)redesSociais[i];
                    System.out.println("Numero de amigos: " + f.numAmigos);
                    f.postarFoto();
                    f.postarComentario();
                    f.curtirPublicacao();
                    f.fazStreaming();
                    System.out.println("-----------------------------------");
                }
                else if(redesSociais[i] instanceof GooglePlus){
                    GooglePlus g = (GooglePlus)redesSociais[i];
                    g.postarVideo();
                    g.curtirPublicacao();
                    g.fazStreaming();
                    g.compartilhar();
                    System.out.println("-----------------------------------");
                }
                else if(redesSociais[i] instanceof Twitter){
                    Twitter t = (Twitter)redesSociais[i];
                    t.postarFoto();
                    t.postarVideo();
                    t.postarComentario();
                    t.curtirPublicacao();
                    t.compartilhar();
                    System.out.println("-----------------------------------");
                }
                else if(redesSociais[i] instanceof Instagram){
                    Instagram ins = (Instagram)redesSociais[i];
                    ins.postarFoto();
                    ins.postarVideo();
                    ins.postarComentario();
                    ins.curtirPublicacao();
                    System.out.println("-----------------------------------");
                }
                    
            }
        }
    }
}
