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
public class Peixe extends Animal {
    private int nBarbatanas;
    
    @Override
    public void fazBarulho(){
        super.fazBarulho();
        System.out.println("Blup Blup");
    }

    public int getnBarbatanas() {
        return nBarbatanas;
    }

    public void setnBarbatanas(int nBarbatanas) {
        this.nBarbatanas = nBarbatanas;
    }
    
    
    
}
