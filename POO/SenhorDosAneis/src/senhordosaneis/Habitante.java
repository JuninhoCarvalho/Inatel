package senhordosaneis;

public abstract class Habitante {
    public static int contador;
    protected int id;
    protected String nome;
    protected int idade;
    protected float energia;
    
    Arma arm;
    
    public Habitante(){
        contador++;
        id = contador;
    }
    
    public void atacar(){
        if(arm.isMagica())
            energia -= 20;
        else
            energia-=10;
    }
    
    public void mostraInfo(){
        System.out.println("Nome: " + nome);
        System.out.println("Idade: " + idade);
        System.out.println("Energia = " + energia);
        System.out.println("----------------------------------");
    }
}
