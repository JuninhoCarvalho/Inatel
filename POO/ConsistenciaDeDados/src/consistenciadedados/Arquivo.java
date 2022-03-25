package consistenciadedados;

import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Arquivo {
    
    public void Escrever(){

        OutputStream os = null;
            OutputStreamWriter osw = null;
            BufferedWriter bw = null;

            String linhaEscrever;

            try{
                os = new FileOutputStream("arquivoFuncionarios.txt",true);
                osw = new OutputStreamWriter(os);
                bw = new BufferedWriter(osw);
                
                linhaEscrever = "Ola seu otario";
                
                bw.write(linhaEscrever);
                bw.newLine();
                

            } catch (FileNotFoundException e) {
                System.out.println(e);

            } catch (IOException ex) {
            Logger.getLogger(Arquivo.class.getName()).log(Level.SEVERE, null, ex);
        }
            finally{
                try {
                    bw.close();
                } catch (Exception e) {
                    System.out.println(e);
                }
            }
        }
    }

