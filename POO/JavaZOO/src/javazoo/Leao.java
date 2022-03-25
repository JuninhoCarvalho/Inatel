/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javazoo;

/**
 *
 * @author Juninho
 */
public class Leao extends Animal {
    private int tamanhoDaJuba;
    
    @Override
    public void fazBarulho(){
        super.fazBarulho();
        System.out.println("AURR AURR!");
    }

    public int getTamanhoDaJuba() {
        return tamanhoDaJuba;
    }

    public void setTamanhoDaJuba(int tamanhoDaJuba) {
        this.tamanhoDaJuba = tamanhoDaJuba;
    }
    
}
