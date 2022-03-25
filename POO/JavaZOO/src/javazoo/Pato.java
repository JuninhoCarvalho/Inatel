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
public class Pato extends Animal {
    private float tamanhoBico;
    
    @Override
    public void fazBarulho(){
        super.fazBarulho();
        System.out.println("QUA QUA");   
    }

    public float getTamanhoBico() {
        return tamanhoBico;
    }

    public void setTamanhoBico(float tamanhoBico) {
        this.tamanhoBico = tamanhoBico;
    }
    
    
}
