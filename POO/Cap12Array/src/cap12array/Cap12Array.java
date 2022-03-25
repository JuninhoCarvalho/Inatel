package cap12array;

import java.util.ArrayList;
import java.util.Collections;

public class Cap12Array {

    public static void main(String[] args) {
        
        //Criando uma lista
        //Coleção que cresce dinamicamente
//        ArrayList<String> lista = new ArrayList();
//        
//        lista.add("Juninho");
//        lista.add("Teste");
//        lista.add("Test");
//        lista.add("Teste2");
//        lista.add("Opa");
//        //lista.add(12);
//        //.add(124.00);
//        
        //Classe para realizar operacoes rapidas sobre colecoes
//        Collections.sort(lista);
        //Collections.reverse(lista);
//        
//        for (int i = 0; i < lista.size(); i++) {
//            System.out.println(lista.get(i));
//        }
//        
//    System.out.println("Nome mais longe do alfabeto:"+Collections.max(lista));
        
        //Parte 2 Comparable
        
        Conta c1 = new Conta();
        c1.saldo = 1000;
        c1.dono = "Francisco";
        
        Conta c2 = new Conta();
        c2.saldo = 3000;
        c2.dono = "Juninho";
        
        Conta c3 = new Conta();
        c3.saldo = 2000;
        c3.dono = "José";
        
        ArrayList<Conta> lista = new ArrayList();
        lista.add(c1);
        lista.add(c2);
        lista.add(c3);
        
        Collections.sort(lista);
        
        for (int i = 0; i < lista.size(); i++) {
            System.out.println(lista.get(i).saldo);
        }
        
        
    }
}
