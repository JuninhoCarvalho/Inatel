package redessociais;

public class GooglePlus extends RedeSocial implements VideoConferencia,Compartilhamento {

    @Override
    public void postarFoto() {
        System.out.println("Postou uma foto no Google+!");
    }

    @Override
    public void postarVideo() {
        System.out.println("Postou um video no Google+!");
    }

    @Override
    public void postarComentario() {
        System.out.println("Fez um comentario em um post no Google+!");
    }

    @Override
    public void fazStreaming() {
        System.out.println("Realizou uma stream no Google+!");
    }

    @Override
    public void compartilhar() {
        System.out.println("Compartilhou uma publicação no Google+!");
    }
    
    
    
}
