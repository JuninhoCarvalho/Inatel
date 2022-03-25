package promocaopizzahut;

public class PromocaoPizzaHut {

    public static void main(String[] args) {
        //Criando as pizzas
        Brasileira p1 = new Brasileira();
        p1.preco = 20;
        Pepperoni p2 = new Pepperoni();
        p1.preco = 15;
        Supreme p3 = new Supreme();
        
        //Criando as unidades
        BH u1 = new BH();
        u1.endereco = "Rua xxx nº4";
        u1.nomeResponsavel = "Luke Skywalker";
        u1.pizzas[0] = p2;
        u1.pizzas[1] = p3;
        
        RJ u2 = new RJ();
        u2.endereco = "Rua yyy nº8";
        u2.nomeResponsavel = "Juninho";
        u2.pizzas[0] = p1;
        u2.pizzas[1] = p2;
        
        SP u3 = new SP();
        u3.endereco = "Rua zzz nº12";
        u3.nomeResponsavel = "Zé Zika";
        u3.pizzas[0] = p1;
        u3.pizzas[1] = p2;
        u3.pizzas[2] = p3;
        
        System.out.println("PizzaHut LTDA");
        System.out.println("Pizzas por unidade:");
        u1.mostraPizzas();
        System.out.println("******");
        u2.mostraPizzas();
        System.out.println("******");
        u3.mostraPizzas();
        System.out.println("******");
        
    }
    
}
