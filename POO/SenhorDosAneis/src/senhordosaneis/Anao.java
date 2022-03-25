package senhordosaneis;

public class Anao extends Habitante implements Mineracao{
    private float altura;
    private String reino;

    public float getAltura() {
        return altura;
    }

    public void setAltura(float altura) {
        this.altura = altura;
    }

    public String getReino() {
        return reino;
    }

    public void setReino(String reino) {
        this.reino = reino;
    }
    
    @Override
    public void atacar(){
        super.atacar();
        System.out.println(nome + " atacou!");
        System.out.println("Arma: " + arm.getNomeArma());
    }

    @Override
    public void minerar() {
        System.out.println("Está minerando!");
    }
    
    @Override
    public void mostraInfo(){
        System.out.println("Anao: " + id);
        super.mostraInfo();
    }
}
