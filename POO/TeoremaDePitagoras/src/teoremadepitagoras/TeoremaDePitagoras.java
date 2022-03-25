package teoremadepitagoras;

import java.util.Scanner;

public class TeoremaDePitagoras {

    public static void main(String[] args) {
        Scanner t = new Scanner(System.in);
        
        System.out.println("Entre com os valores para cada coordenada");
        System.out.print("x1: ");
        double x1 = t.nextDouble();
        System.out.print("y1: ");
        double y1 = t.nextDouble();
        System.out.print("x2: ");
        double x2 = t.nextDouble();
        System.out.print("y2: ");
        double y2 = t.nextDouble();
        
        //Questão A
        double dist = Math.sqrt(Math.pow(x2-x1, 2) + Math.pow(y2-y1, 2));
        System.out.printf("Distancia = %.2f\n",dist);
        
        //Questão B
        double pMedioX = (x1 + x2)/2;
        double pMedioY = (y1 + y2)/2;
        
        pMedioX = Math.round(pMedioX);
        pMedioY = Math.round(pMedioY);
        
        System.out.println("Ponto médio = ("+ pMedioX + ", " + pMedioY + ")");
    }

}
