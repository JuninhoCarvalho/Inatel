package DivisaoInimiga;

import javax.swing.JOptionPane;

public class DivisaoInimiga {

    public static void main(String[] args) {
        
        int n1,n2;
        float res;
        int fim=0;
        
        do{
            try {
                n1 = Integer.parseInt(JOptionPane.showInputDialog(
                "Entre com o Primeiro Numero: "));
                n2 = Integer.parseInt(JOptionPane.showInputDialog(
                "Entre com o Segundo Numero: "));
                
                res = n1/n2;
                JOptionPane.showMessageDialog(null, "Resultado: " + res);
            } catch (NumberFormatException e) {
                JOptionPane.showMessageDialog(null, 
                        "Erro! Entre com um número válido!");
                
            }catch (ArithmeticException e){
                JOptionPane.showMessageDialog(null, 
                        "Erro! Divisão invalida!");
            }
            fim = JOptionPane.showConfirmDialog(null, "Deseja continuar fazendo"
                    + "divisoes?");
            
        }while(fim==0);
        
    }

}