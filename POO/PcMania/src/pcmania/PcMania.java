package pcmania;

import java.util.Scanner;

public class PcMania {
    
    public static String intro(){
        Scanner t = new Scanner(System.in);
                
        System.out.println("1 - Promoção 1.");
        System.out.println("2 - Promoção 2.");
        System.out.println("3 - Promoção 3.");
        System.out.println("0 - Encerrar programa.");
            
        String a = t.nextLine();  
            
        return a;           
        }
    
    public static void main(String[] args) {
        //NAO FUNCIONOU
        
        //Objeto classe todo
        Computador[] c = new Computador[3];
        
        c[0] = new Computador();
        c[0].h[0] = new HardwareBasico();
        c[0].h[1] = new HardwareBasico();
        c[0].h[2] = new HardwareBasico();
        c[0].s[0] = new SistemaOperacional();
        c[1] = new Computador();
        c[1].h[0] = new HardwareBasico();
        c[1].h[1] = new HardwareBasico();
        c[1].h[2] = new HardwareBasico();
        c[1].s[1] = new SistemaOperacional();
        c[2] = new Computador();
        c[2].h[0] = new HardwareBasico();
        c[2].h[1] = new HardwareBasico();
        c[2].h[2] = new HardwareBasico();
        c[2].s[2] = new SistemaOperacional();
        
        
        c[0].marca = "Positivo";
        c[0].preco = 1300f;
        c[0].h[0].nome = "Pentium Core i3";
        c[0].h[0].capacidade = 1200;
        c[0].h[1].nome = "Memória Ram";
        c[0].h[1].capacidade = 4;
        c[0].h[2].nome = "HD";
        c[0].h[2].capacidade = 500;
        c[0].s[0].nome = "Linux Ubuntu";
        c[0].s[0].tipo = 32;
        
        c[1].marca = "Acer";
        c[1].preco = 1800f;
        c[1].h[0].nome = "Pentium Core i5";
        c[1].h[0].capacidade = 2260;
        c[1].h[1].nome = "Memória Ram";
        c[1].h[1].capacidade = 8;
        c[1].h[2].nome = "HD";
        c[1].h[2].capacidade = 1;
        c[1].s[1].nome = "Windows 8";
        c[1].s[1].tipo = 64;
       
        c[2].marca = "Vaio";
        c[2].preco = 2800f;
        c[2].h[0].nome = "Pentium Core i7";
        c[2].h[0].capacidade = 3500;
        c[2].h[1].nome = "Memória Ram";
        c[2].h[1].capacidade = 16;
        c[2].h[2].nome = "HD";
        c[2].h[2].capacidade = 2;
        c[2].s[2].nome = "Windows 10";
        c[2].s[2].tipo = 64;
        
        MemoriaUSB m1 = new MemoriaUSB();
        MemoriaUSB m2 = new MemoriaUSB();
        MemoriaUSB m3 = new MemoriaUSB();
        
        m1.nome = "Pen-drive";
        m1.capacidade = 16;
        m2.nome = "Pen-drive";
        m2.capacidade = 32;
        m3.nome = "HD Externo";
        m3.capacidade = 1;
        
        c[0].memory = m1;
        c[1].memory = m2;
        c[2].memory = m3;
        
        
        boolean x = true;
        String a;
        int cp1 = 0;
        int cp2 = 0;
        int cp3 = 0;
        
        Cliente c1 = new Cliente();
        float contador=0;
        
        
        while(x==true){
            
            a = intro();
            contador += c1.calculaTotalCompra(a);
            
            switch (a) {
                case "1":
                    cp1++;
                    break;
                
                case "2":
                    cp2++;
                    break;
                
                case "3":
                    cp3++;
                    break;
                    
                case "0":
                    x=false;
                    break;
                    
                default:
                    System.out.println("Opção Invalida");
                    break;
            }  
        }
        
         System.out.println("---------------------------------------");
            if(cp1>0)
                c[0].mostraPCConfigs(c[0].marca,c[0].preco,c[0].h[0].nome,
                    c[0].h[0].capacidade,c[0].h[1].nome,c[0].h[1].capacidade,
                    c[0].h[2].nome,c[0].h[2].capacidade, c[0].s[0].nome,
                    c[0].s[0].tipo, 1);
            
            
            if(cp2>0)
                c[1].mostraPCConfigs(c[1].marca,c[1].preco,c[1].h[0].nome,
                    c[1].h[0].capacidade,c[1].h[1].nome,c[1].h[1].capacidade,
                    c[1].h[2].nome,c[1].h[2].capacidade, c[1].s[1].nome,
                    c[1].s[1].tipo, 2);
            
            if(cp3>0)
                c[2].mostraPCConfigs(c[2].marca,c[2].preco,c[2].h[0].nome,
                    c[2].h[0].capacidade,c[2].h[1].nome,c[2].h[1].capacidade,
                    c[2].h[2].nome,c[2].h[2].capacidade, c[2].s[2].nome,
                    c[2].s[2].tipo, 3);     
            
          System.out.println("Valor da compra: " + contador);
            
          System.out.println("---------------------------------------"); 
        
    }
    
}
