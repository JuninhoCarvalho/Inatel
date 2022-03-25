/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cap4;

/**
 *
 * @author Juninho
 */
public class Banda {
        
        String nome = null;
        String genero = null;
        
        //Atributo implicito
        //Agregação
        Empresario emp;
        Musico[] musicos;
        
        
        //Atributo oriundo da assossiação
        Musica[] musicas;
        
        //Metodos
        void mostraInfosBanda()
        {
            System.out.println("Infos da Banda: " + nome);
            System.out.println("Estilo: " + genero);
            //caso tenha um empresario
            if(emp != null)
            {
                System.out.println("Empresario: " + emp.nome);
                System.out.println("CNPJ: " + emp.cnpj);
            }
            //MOSTRANDO OS MUSICOS
            System.out.println("Musicos:");
            for (Musico aux : musicos)
            {
                if(aux != null)
                {
                    System.out.println(aux.funcao + " " + aux.nome);
                    System.out.println("********");
                }
            }
            
            System.out.println();
            
            //MOSTRANDO OS MUSICAS
            System.out.println("Musicas da Banda:");
            for (Musica aux : musicas)
            {
                if(aux != null)
                {
                    System.out.println(aux.nome + " " + aux.tempo);
                    System.out.println("---------------");
                }
            }    
        }
    
}
