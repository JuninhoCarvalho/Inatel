package guilab;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.util.ArrayList;

public class Arquivo {
    
    public void escrever(Funcionario f1){
        
        OutputStream os = null;
        OutputStreamWriter osw = null;
        BufferedWriter bw = null;
        
        try {
            os = new FileOutputStream("arquivoFuncionarios.txt", true);
            osw = new OutputStreamWriter(os);
            bw = new BufferedWriter(osw);
            
            bw.write("Funcionario");
            bw.newLine();
            bw.write(f1.nome + "\n");
            bw.write(f1.idade + "\n");
            bw.write(f1.cpf + "\n");
            bw.write(f1.cargo + "\n");
            
            
        } catch (Exception e) {
            System.out.println(e);
            
        }finally{
            try {
                bw.close();
            } catch (Exception e) {
                System.out.println(e);
            }
        }
        
    }
    
    public ArrayList<Funcionario> ler(){
        
        InputStream is = null;
        InputStreamReader isr = null;
        BufferedReader br = null;
        String linhaLer = null;
        
        ArrayList<Funcionario> acheiNoArquivo = new ArrayList<>();
        
        try {
            
            is = new FileInputStream("arquivoFuncionarios.txt");
            isr = new InputStreamReader(is);
            br = new BufferedReader(isr);
            
            
            linhaLer = br.readLine();
            while(linhaLer != null){
                if(linhaLer.contains("Funcionario")){
                    Funcionario aux = new Funcionario();
                    aux.nome = br.readLine();
                    aux.idade = Integer.parseInt(br.readLine());
                    aux.cpf = br.readLine();
                    aux.cargo = br.readLine();
                    acheiNoArquivo.add(aux);
                }
                linhaLer = br.readLine();
            }
            
            
        } catch (Exception e) {
            System.out.println(e);
        }finally{
            try {
                br.close();
            } catch (Exception e) {
                
                System.out.println(e);
            }
        }
        return acheiNoArquivo;
    }
}
