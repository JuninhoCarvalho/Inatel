/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package capitulo5;

import static java.lang.Math.tan;

/**
 *
 * @author Juninho
 */
public class PoligonoRegular {
    
    private int n;
    private float c;
    private float areaPoligono;
    
    private float calculaPerimetro(){
        
        return c*n;
    }
    
    private float calculaApotema(){
        
        return c/ (float) (2*Math.tan(Math.toRadians(180/n)));
    }
        
    public void calculaArea(int nLados, int cLados){
        n = nLados;
        c = cLados;
        
        areaPoligono = (calculaPerimetro()*calculaApotema())/2; 
        
    }

    public float getAreaPoligono() {
        
        return areaPoligono;
    }
    
    
        
}
