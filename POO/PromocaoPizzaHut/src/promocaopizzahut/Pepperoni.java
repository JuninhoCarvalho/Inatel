package promocaopizzahut;

public class Pepperoni extends Pizza {

    @Override
    public void mostraIngredientes() {
        System.out.println("Pepperoni");
        System.out.println("Ingredientes:");
        System.out.println("- Mussarela");
        System.out.println("- Pepperoni");
    }

    @Override
    public String mostraBrinde() {
        return "Caneta!";
    }
    
    
}
