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
public class Composicao {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        //Criando objeto classe todo
        Empresa emp = new Empresa();
        emp.nome = "FeA";
        emp.cnpj = "12141342342";
        emp.depto.nome = "Vendas Cidade";
        emp.depto.nFuncionarios = 2;
        
        System.out.println("Nome da empresa: " + emp.nome);
        System.out.println("Nome do depto: " + emp.depto.nome);
        
    }
    
}
