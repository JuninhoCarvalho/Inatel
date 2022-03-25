package pcmania;

public class Computador {
    String marca;
    float preco;
    
    SistemaOperacional[] s = new SistemaOperacional[3];
    
    HardwareBasico[] h = new HardwareBasico[3];
    
    MemoriaUSB memory;
    
    void mostraPCConfigs(String marca, float preco, String nomeh1, 
            float capacidadeh1, String nomeh2, float capacidadeh2, 
            String nomeh3, float capacidadeh3, String sistema, int tipo, int x){
        
 
        System.out.println("Configurações do PC " + x + ":");
        System.out.println("Marca: " + marca);
        System.out.println("Processador: " + nomeh1 + "("+capacidadeh1+")");
        System.out.println(capacidadeh2+" GB de " + nomeh2);
        System.out.println(capacidadeh3 + "GB de "+ nomeh3);
        System.out.println("Sistema Operacional "+sistema +" ("+tipo+" bits)");
     
    }
    
    void addMemoriaUSB(MemoriaUSB musb){
        
        
    }
    
}
