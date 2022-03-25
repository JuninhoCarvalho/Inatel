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
public class Conta {
    private float saldo;
    private String dono;
    //Atributo estatico
    //EH UM ATRIBUTO QUE TODOS OBJETOS TEM ACESSO AO VALOR DELE
    public static String mensagem;
    
    
    Conta(String mensagem){
        System.out.println(mensagem);
        
    }
    
    public void depositar(float valor){
        saldo += valor;
        
    }
    
    //Getters and Setters

    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float saldo) {
        if(saldo > 10000)
            System.out.println("Não pode!!!");
        
        else
            this.saldo = saldo;
    }

    public String getDono() {
        return dono;
    }

    public void setDono(String dono) {
        this.dono = dono;
    }
    
     
}
