package redessociais;

public class Instagram extends RedeSocial{

    @Override
    public void postarFoto() {
        System.out.println("Postou uma foto no Instagram!");
    }

    @Override
    public void postarVideo() {
        System.out.println("Postou um video no Instagram");
    }

    @Override
    public void postarComentario() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
    
}
