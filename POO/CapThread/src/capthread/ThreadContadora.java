package capthread;

import java.util.logging.Level;
import java.util.logging.Logger;


//extends Thread ou
//implements Runnable

public class ThreadContadora extends Thread{
    
    int numero;
    
    //Toda thread tem que ter o metodo run
    @Override
    public void run(){
        for (int i = 0; i < 10; i++) {
            System.out.println("Thread " + numero + ": " + i);
            try {
                Thread.sleep(1500);
            } catch (InterruptedException ex) {
                Logger.getLogger(ThreadContadora.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}
