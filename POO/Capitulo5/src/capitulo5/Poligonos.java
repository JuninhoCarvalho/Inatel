package capitulo5;

public class Poligonos {

    public static void main(String[] args) {
        
        PoligonoRegular p = new PoligonoRegular();
        p.calculaArea(4, 2);
        System.out.println(p.getAreaPoligono());
        
        
        PoligonoRegular p2 = new PoligonoRegular();
        p2.calculaArea(6, 3);
        System.out.printf("Area: %.2f",p2.getAreaPoligono());
        
        
    }
    
}
