package redessociais;

public class RedesSociais {

    public static void main(String[] args) {
        RedeSocial[] r1 = new RedeSocial[20];
        
        Facebook f1 = new Facebook();
        f1.senha = "teste123";
        f1.numAmigos = 1000;
        
        Twitter t1 = new Twitter();
        t1.senha = "TesteTt321";
        t1.numAmigos = 1000000;
        
        r1[0] = f1;
        r1[1] = t1;
        
        Usuario u1 = new Usuario("Francisco","teste1@gmail.com",r1);
        u1.Usuario(r1);
        
    }

}
