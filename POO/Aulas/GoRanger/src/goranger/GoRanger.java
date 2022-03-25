/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package goranger;

import java.util.Scanner;

/**
 *
 * @author Juninho
 */
public class GoRanger {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //Classe SCANNER = Leitura de valores
        Scanner teclado = new Scanner(System.in);
        
        //inicializando as variaveis
        float ano1 = teclado.nextInt();
        float ano2 = teclado.nextInt();
        float ano3 = teclado.nextInt();
        float media;
        
        //faz o calculo da media
        media = (ano1 + ano2 + ano3)/3;
        
        //saida da media
        System.out.println("O valor total é " + media);
    }
    
}
