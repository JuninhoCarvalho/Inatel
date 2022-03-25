/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package conexaobd.DAO;

import conexaobd.model.Pessoa;
import java.sql.SQLException;
import java.util.ArrayList;

/**
 *
 * @author PICHAU
 */
public class PessoaDAO extends ConnectionDAO{
    boolean sucesso = false;
    
    public boolean inserirPessoa(Pessoa pessoa) {
        connectToDB();
        String sql = "INSERT INTO Pessoa (nome, idade, altura) values(?,?,?)";
        try {
            pst = con.prepareStatement(sql);
            pst.setFloat(3, pessoa.altura);
            pst.setString(1, pessoa.nome);
            pst.setInt(2, pessoa.idade);
            pst.execute();
            sucesso = true;
        } catch(SQLException exc) {
            System.out.println("Erro: " + exc.getMessage());
            sucesso = false;
        } finally {
            try {
                con.close();
                pst.close();
            } catch(SQLException exc) {
                System.out.println("Erro: " + exc.getMessage());
            }
        }
        
        return sucesso;
    }
    
    
    public boolean atualizarPessoa(int id, Pessoa pessoa) {
        connectToDB();
        String sql = "UPDATE Pessoa SET nome=?, idade=?, altura=? where id=?";
        
        try {
            pst = con.prepareStatement(sql);
            pst.setString(1, pessoa.nome);
            pst.setInt(2, pessoa.idade);
            pst.setFloat(3, pessoa.altura);
            pst.setInt(4, id);
            pst.execute();
            sucesso = true;
            
        } catch(SQLException ex) {
            System.out.println("Erro = " +  ex.getMessage());
            sucesso = false;
        } finally {
            try {
                con.close();
                pst.close();
            } catch(SQLException exc) {
                System.out.println("Erro: " + exc.getMessage());
            }
        }
        return sucesso;
    }
    
    public boolean deletarPessoa(int id) {
        connectToDB();
        String sql = "DELETE FROM Pessoa where id=?";
        
        try {
            pst = con.prepareStatement(sql);
            pst.setInt(1, id);
            pst.execute();
            sucesso = true;
            
        } catch(SQLException ex) {
            System.out.println("Erro = " +  ex.getMessage());
            sucesso = false;
        } finally {
            try {
                con.close();
                pst.close();
            } catch(SQLException exc) {
                System.out.println("Erro: " + exc.getMessage());
            }
        }
        return sucesso;
    }
    
    public ArrayList<Pessoa> buscarPessoasSemFiltro() {
        ArrayList<Pessoa> listaDePessoas = new ArrayList<>();
        
        connectToDB();
        
        String sql = "SELECT * FROM Pessoa";
        
        try {
            st = con.createStatement();
            rs = st.executeQuery(sql);
            System.out.println("Lista de Pessoas: ");
            while (rs.next()) {
                Pessoa pessoaAux = new Pessoa();
                pessoaAux.nome = rs.getString("nome");
                pessoaAux.idade = rs.getInt("idade");
                pessoaAux.altura = rs.getFloat("altura");
                System.out.println("nome = " + pessoaAux.nome);
                System.out.println("idade = " + pessoaAux.idade);
                System.out.println("altura = " + pessoaAux.altura);
                System.out.println("--------------------------------");
                listaDePessoas.add(pessoaAux);
            }
            sucesso = true;
        } catch(SQLException e) {
            System.out.println("Erro: " + e.getMessage());
            sucesso = false;
        } finally {
            try {
                con.close();
                st.close();
            } catch(SQLException e) {
                System.out.println("Erro: " + e.getMessage());
            }
        }
        return listaDePessoas;
    }
    
    public Pessoa buscarPessoaPorId(int id) {
        
        connectToDB();
        Pessoa pessoaAux = null;
        String sql = "SELECT * FROM Pessoa WHERE id = ?";
        
        try {
            pst = con.prepareStatement(sql);
            pst.setInt(1, id);
            rs = pst.executeQuery();
            while (rs.next()) {
                String aux = rs.getString("nome");
                if(aux.isEmpty())
                {
                    sucesso = false;
                } else {
                    pessoaAux = new Pessoa();
                    pessoaAux.nome = rs.getString("nome");
                    pessoaAux.idade = rs.getInt("idade");
                    pessoaAux.altura = rs.getFloat("altura");
                    System.out.println("nome = " + pessoaAux.nome);
                    System.out.println("idade = " + pessoaAux.idade);
                    System.out.println("altura = " + pessoaAux.altura);
                    System.out.println("--------------------------------");
                }
            }
            sucesso = true;
        } catch(SQLException e) {
            System.out.println("Erro: " + e.getMessage());
            sucesso = false;
        } finally {
            try {
                con.close();
                pst.close();
            } catch(SQLException e) {
                System.out.println("Erro: " + e.getMessage());
            }
        }
        return pessoaAux;
    }
}
