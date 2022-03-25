package senhordosaneis;

public class Elfo extends Habitante implements Cura{

    private String tribo;

    public String getTribo() {
        return tribo;
    }

    public void setTribo(String tribo) {
        this.tribo = tribo;
    }
    
    public void viajar(){
        System.out.println(nome + " está viajando!" );
    }
    
    @Override
    public void atacar(){
        super.atacar();
        System.out.println(nome + " atacou!");
        System.out.println("Arma: " + arm.getNomeArma());
    }
    
    @Override
    public void curar() {
        energia += energia*0.15;
        System.out.println(nome+" foi curado!");
    }
    
    @Override
    public void mostraInfo(){
        System.out.println("Elfo: " + id);
        super.mostraInfo();
    }
    
    
}
