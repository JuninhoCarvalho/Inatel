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
public class Trabalhador {

    float salario;
    String nome;
    String profissao;
    String rg;
    String dataNascimento;

    void recebeAumento(float valor) 
    {
        salario = salario + valor;
    }

    float calculaGanhoAnual() 
    {
        return salario * 13;
    }

    void mostraInfos()
    {
        System.out.println("Nome: " + nome);
        System.out.println("Profissao: " + profissao);
        System.out.println("RG: " + rg);
        System.out.println("Nascimento: " + dataNascimento);
        System.out.println("Salario: " + salario);
        System.out.println("Ganho Anual: " + calculaGanhoAnual());
    }
    
}
