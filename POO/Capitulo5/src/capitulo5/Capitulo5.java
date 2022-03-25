/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package capitulo5;

/**
 *
 * @author Juninho
 */
public class Capitulo5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Conta c1 = new Conta("Opa! C1!!!");
        c1.mensagem = "Mensagem c1";
        
        Conta c2 = new Conta("Opa! C2!!!");
        System.out.println("Mensagem: " + c2.mensagem);
        
        
        
        
        //Só pode ser acessado dentro da classe portanto não funciona
        //c1.saldo = 1000000; 
        
        c1.depositar(500);//Funciona
        c1.setDono("Claudio");
        
        c1.setSaldo(10000000);
        System.out.println("Saldo: " + c1.getSaldo() + " Dono: " + c1.getDono());
        
    }
    
}
