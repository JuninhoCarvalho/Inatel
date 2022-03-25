package franciscojuniorav3;

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
    public void escrever(Carrinhos c1){
        
        OutputStream os = null;
        OutputStreamWriter osw = null;
        BufferedWriter bw = null;
        
        try {
            os = new FileOutputStream("arquivoCarrinhos.txt", true);
            osw = new OutputStreamWriter(os);
            bw = new BufferedWriter(osw);
            
            bw.write("Carrinho");
            bw.newLine();
            bw.write(c1.nomeJogador + "\n");
            bw.write(c1.velocidade + "\n");
            bw.write(c1.chassi + "\n");
            
            
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
    
    public ArrayList<Carrinhos> ler(){
        
        InputStream is = null;
        InputStreamReader isr = null;
        BufferedReader br = null;
        String linhaLer = null;
        
        ArrayList<Carrinhos> acheiNoArquivo = new ArrayList<>();
        
        try {
            
            is = new FileInputStream("arquivoCarrinhos.txt");
            isr = new InputStreamReader(is);
            br = new BufferedReader(isr);
            
            
            linhaLer = br.readLine();
            while(linhaLer != null){
                if(linhaLer.contains("Carrinho")){
                    Carrinhos aux = new Carrinhos();
                    aux.nomeJogador = br.readLine();
                    aux.velocidade = Integer.parseInt(br.readLine());
                    aux.chassi = br.readLine();
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
