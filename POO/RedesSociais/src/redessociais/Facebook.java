package redessociais;

public class Facebook extends RedeSocial implements VideoConferencia,Compartilhamento {
    
    @Override
    public void fazStreaming() {
        System.out.println("Realizou uma stream no facebook!");
    }

    @Override
    public void compartilhar() {
        System.out.println("Compartilhou uma publicação no facebook!");
    }

    @Override
    public void postarFoto() {
        System.out.println("Postou uma foto no facebook!");
    }

    @Override
    public void postarVideo() {
        System.out.println("Postou um video no facebook!");
    }

    @Override
    public void postarComentario() {
        System.out.println("Comentou em um post no facebook!");
    }
    
}
