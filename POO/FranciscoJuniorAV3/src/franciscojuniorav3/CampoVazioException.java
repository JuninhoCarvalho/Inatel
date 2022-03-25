package franciscojuniorav3;

import javax.swing.JOptionPane;

public class CampoVazioException extends RuntimeException{
    
    public CampoVazioException(){
        JOptionPane.showMessageDialog(null, "Preencha os campos corretamente!");
    }
    
}
