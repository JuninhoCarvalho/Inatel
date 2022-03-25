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
public class JavaZOO {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Coruja c1 = new Coruja();
        c1.nome = "Edwirges";
        c1.nPatas = 2;
        c1.cor = "Branca";
        c1.setAlturaVoo(200);
        
        Peixe p1 = new Peixe();
        p1.nome = "Nemo";
        p1.nPatas = 0;
        p1.cor = "Laranja";
        p1.setnBarbatanas(2);
        
        Leao l1 = new Leao();
        l1.nome = "Simba";
        l1.nPatas = 4;
        l1.cor = "Amarelo";
        l1.setTamanhoDaJuba(1);
        
        Pato pa1 = new Pato();
        pa1.nome = "Donald";
        pa1.nPatas = 2;
        pa1.cor = "Branco";
        pa1.setTamanhoBico(0.2f);
        
        //Infos zoo
        Zoologico z1 = new Zoologico();
        z1.setNome("Santa zoo");
        z1.setEndereco("Rua Santa, n18, Santa Rita");
        
        //Array aux de animais
        Animal[] auxAnimais = new Animal[100];
        auxAnimais[0] = c1;
        auxAnimais[1] = p1;
        auxAnimais[2] = l1;
        auxAnimais[3] = pa1;
        z1.setAnimais(auxAnimais);
        
        //mostrando infos
        System.out.println("Nome do zoologico: "+ z1.getNome());
        System.out.println("Endereço: " + z1.getEndereco());
        System.out.println("-----------------------------------------");
        
        for (int i = 0; i < z1.getAnimais().length; i++) {
            if(z1.getAnimais()[i] != null){
                System.out.println("Nome: " + z1.getAnimais()[i].nome);
                System.out.println("Patas: " + z1.getAnimais()[i].nPatas);
                System.out.println("Cor: " + z1.getAnimais()[i].cor);
                
                if(z1.getAnimais()[i] instanceof Peixe){
                    Peixe aux = (Peixe) z1.getAnimais()[i];
                    System.out.println("Barbatanas: " + aux.getnBarbatanas());
                    aux.fazBarulho();
                }
                
                if(z1.getAnimais()[i] instanceof Coruja){
                    Coruja aux = (Coruja) z1.getAnimais()[i];
                    System.out.println("Altura do Voo: " + aux.getAlturaVoo());
                    aux.fazBarulho();
                }
                
                if(z1.getAnimais()[i] instanceof Leao){
                    Leao aux = (Leao) z1.getAnimais()[i];
                    System.out.println("Tamanho da juba: " + 
                            aux.getTamanhoDaJuba());
                    aux.fazBarulho();
                }
                
                if(z1.getAnimais()[i] instanceof Pato){
                    Pato aux = (Pato) z1.getAnimais()[i];
                    System.out.println("Tamanho do Bico: " + 
                            aux.getTamanhoBico());
                    aux.fazBarulho();
                }
                
                System.out.println("-----------------------------------------");
                
            }
        }
        
    }
    
}
