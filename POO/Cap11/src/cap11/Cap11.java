package cap11;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import javax.swing.JOptionPane;

public class Cap11 {

    public static void main(String[] args) throws FileNotFoundException, IOException{
        
        int contGEC=0;
        int contGET=0;
        int contGEA=0;
        int contGEB=0;
        int contGES=0;
        int contGEP=0;
        
        String opcao = JOptionPane.showInputDialog(null, "1.Pesquisar |"
                + "2.Contar Emails");
        
        if(opcao.equals("1")){
            String email = JOptionPane.showInputDialog(null,"Entre com o email: ");
            
            //Apontado para o arquivo
            InputStream is = new FileInputStream("emails.txt");
            
            //Transformando os Bytes em caracteres
            InputStreamReader isr = new InputStreamReader(is);
            
            //Formando palavras inteiras
            BufferedReader br = new BufferedReader(isr);
            
            boolean achou = false;
            
            //Lendo primeira linha do arquivo
            String s = br.readLine();
            
            while(s!=null){
                if(email.equals(s)){
                    achou = true;
                    break;
                }
                s = br.readLine();
                
            }
            if(achou){
                JOptionPane.showMessageDialog(null, "Email encontrado!");
            }
            else{
                JOptionPane.showMessageDialog(null, "Email não encontrado!");
            }
        }
        if(opcao.equals("2")){
            //Apontado para o arquivo
            InputStream is = new FileInputStream("emails.txt");
            
            //Transformando os Bytes em caracteres
            InputStreamReader isr = new InputStreamReader(is);
            
            //Formando palavras inteiras
            BufferedReader br = new BufferedReader(isr);
            
            String s = br.readLine();
            
            while(s!=null){
                if(s.contains("gec")){
                    contGEC++;
                }
                else if(s.contains("@get")){
                    contGET++;
                }    
                else if(s.contains("@gea")){
                    contGEA++;
                }    
                else if(s.contains("@geb")){
                    contGEB++;
                }    
                else if(s.contains("@ges")){
                    contGES++;
                }
                else if(s.contains("@gep")){
                    contGEP++;
                }
                s=br.readLine();
            }
            
            JOptionPane.showMessageDialog(null,
                    "1.Telecom:"+ contGET+" | "+"2.Biomedica:"+ contGEB+" | "+
                    "3.Computacao:"+ contGEC+" | "+"4.Software:"+ contGES+" | "+
                    "5.Producao:"+ contGEP+" | "+"6.Automacao:"+ contGEA);
        }
        
    }

}
