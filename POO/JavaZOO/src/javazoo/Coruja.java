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
public class Coruja extends Animal {
    private int alturaVoo;
    
    @Override
    public void fazBarulho(){
        super.fazBarulho();
        System.out.println("PUU PUU!");
    }

    public int getAlturaVoo() {
        return alturaVoo;
    }

    public void setAlturaVoo(int alturaVoo) {
        this.alturaVoo = alturaVoo;
    }
    
    
    
}
