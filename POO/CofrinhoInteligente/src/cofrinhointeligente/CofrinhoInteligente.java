package cofrinhointeligente;

public class CofrinhoInteligente {

    public static void main(String[] args) {
        
        //Criando novas moedas e setando seus valores
        Moeda m1 = new Moeda((float) 0.10);
        Moeda m2 = new Moeda((float) 0.25);
        Moeda m3 = new Moeda((float) 0.10);
        Moeda m4 = new Moeda((float) 0.05);
        Moeda m5 = new Moeda((float) 0.50);
        Moeda m6 = new Moeda(1);
        Moeda m7 = new Moeda((float) 0.05);
        Moeda m8 = new Moeda((float) 0.25);
        
        //Criando um novo cofrinho
        Cofrinho c = new Cofrinho();
        //adicionando as moedas ao cofrinho
        c.addMoeda(m1);
        c.addMoeda(m2);
        c.addMoeda(m3);
        c.addMoeda(m4);
        c.addMoeda(m5);
        c.addMoeda(m6);
        c.addMoeda(m7);
        c.addMoeda(m8);
        
        //saida para o somatório dos valores das moedas
        System.out.printf("Valor total de moedas: R$%.2f",c.getValorTotal());
        System.out.println();
        //saida para quantidade de moedas contidas no cofrinho
        System.out.println("Quantidade de moedas: "+ c.getQuantMoedas());
        //saida para moeda de maior valor
        System.out.println("Moeda de maior valor: " + c.getMoedaMaiorValor().getValor());
        //saida para as moedas em ordem crescente
        System.out.println("Moedas em ordem crescente:");
        c.ordenaMoedas();
        
    }

}
