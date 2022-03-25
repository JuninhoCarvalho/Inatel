package exercicio1;

public class Calculadora {
    public static double pi = 3.14;
    
    public static double circunferencia(double raio) {
        
        return (2*pi*raio);
    }
    
    public static double volume(double raio){
        
        return (4*pi*Math.pow(raio, 3))/3;
    }
    
}
