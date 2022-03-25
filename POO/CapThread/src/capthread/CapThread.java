package capthread;

public class CapThread {

    public static void main(String[] args) {
        //Criando as threads
        ThreadContadora tc1 = new ThreadContadora();
        tc1.numero = 1;
        ThreadContadora tc2 = new ThreadContadora();
        tc2.numero = 2;
        ThreadContadora tc3 = new ThreadContadora();
        tc3.numero = 3;
        
        tc1.start();
        tc2.start();
        tc3.start();
    }

}
