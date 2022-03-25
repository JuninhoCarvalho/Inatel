/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package conexaobd;

import conexaobd.DAO.PessoaDAO;
import conexaobd.model.Endereco;
import conexaobd.model.Pessoa;
import java.util.ArrayList;

/**
 *
 * @author PICHAU
 */
public class ConexaoBD {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //RELACIONANDO TABELAS COM CHAVE ESTRANGIERA
        //ArrayList<Endereco> listaEd = edDAO.buscarSemFiltro();
        
//        Endereco ed = new Endereco();
//        //ed.id = listaEd.size() + 1;
//        ed.bairro = "bairro 1";
//        ed.rua = "Beco diagonal";
//        ed.numero = "47";
        
        //EnderecoDAO edDAO = new EnderecoDAO();
        //edDAO.inserirEndereco();
        //int idEndereco = edDAO.buscarPorRua(ed.rua);
        
        
        //Pessoa p1  = new Pessoa();
        //p1.idEndereco = idEndereco;
        //p1.nome = "Uttoni";
        //p1.idade = 200;
        //p1.altura = 1.7f;


        //=====================================
        
        
        
        Pessoa pe1 = new Pessoa();
        pe1.nome = "Eduardo";
        pe1.idade = 20;
        pe1.altura = 1.3f;
        
        PessoaDAO pDAO = new PessoaDAO();
        if(pDAO.inserirPessoa(pe1)){
            System.out.println("Pessoa inserida");
        }
        else{
            System.out.println("Não conseguimos inserir");
        }
        
        
        //ESCOLA
        //PROFESSORES
        //ALUNOS
        //TRABALHO
        
        
//        
//        p1.idade = 20;
//        if(pDAO.atualizarPessoa(1, p1)){
//            System.out.println("Pessoa atualizada");
//        }
//        else{
//            System.out.println("Não foi possível atualizar");
//        }
        
//        Pessoa p2  = new Pessoa();
//        p2.nome = "Augusto";
//        p2.idade = 150;
//        p2.altura = 2;
//        
//        if(pDAO.inserirPessoa(p2)){
//            System.out.println("Inseriu");
//        }
//        else{
//            System.out.println("Não inseriu");
//        }
//        
//        System.out.println("");
//        System.out.println("");
//
//        ArrayList<Pessoa> pessoas = new ArrayList<>();
//        pessoas = pDAO.buscarPessoasSemFiltro();
//        
//        for(int i=0; i<pessoas.size(); i++){
//            System.out.println("Nome: " + pessoas.get(i).nome);
//        }
//        
//        System.out.println("");
//        System.out.println("");
//        
//        Pessoa outraPessoa = new Pessoa();
//        outraPessoa = pDAO.buscarPessoaPorId(2);
//        
//        if(pDAO.deletarPessoa(3)){
//            System.out.println("Deletado");
//        }
//        else{
//            System.out.println("Não deletado");
//        }
        
        
    }
    
}
