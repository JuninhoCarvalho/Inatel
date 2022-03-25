/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package AulaClassesEAcoes;

/**
 *
 * @author Juninho
 */
public class AgregacaoTime {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //Objeto da classe parte
        Atleta atleta1 = new Atleta();
        
        atleta1.nome = "LeBron James";
        atleta1.idade = 36;
        atleta1.posicao = "Armador";
        
        //Objeto da classe todo
        Time t1 = new Time();
        
        t1.nome = "Lakers";
        t1.nomeDoTecnico = "Frank Vogel";
        
        //Realizando a Agregacao
        t1.atl = atleta1;
    
        System.out.println("Nome do time: " + t1.nome);
        System.out.println("Nome do Atleta: " + t1.atl.nome);
      
    }
    
}
