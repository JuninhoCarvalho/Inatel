package senhordosaneis;

public class Mago extends Habitante implements Cura,Feitico{
    private String cor;

    @Override
    public void atacar(){
        super.atacar();
        System.out.println(nome + " atacou!");
        System.out.println("Arma: " + arm.getNomeArma());
    }
    
    @Override
    public void mostraInfo(){
        System.out.println("Mago: " + id);
        super.mostraInfo();
    }
    
     @Override
    public void curar() {
        energia += energia*0.15;
        System.out.println(nome+" foi curado!");
    }

    @Override
    public void lancaFeitico() {
        energia-=energia*0.10;
        System.out.println(nome + " lancou um feitico!");
    }
    
    
}
