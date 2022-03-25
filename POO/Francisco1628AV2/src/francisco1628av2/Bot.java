package francisco1628av2;

public class Bot extends Pessoa implements Interacao{

    private boolean hostil;

    public boolean isHostil() {
        return hostil;
    }

    public void setHostil(boolean hostil) {
        this.hostil = hostil;
    }
    
    public Bot(String nome1, boolean hostil1){
        setNome(nome1);
        setHostil(hostil1);
    }
    
    @Override
    public void mostraInfo(){
        super.mostraInfo();
        if(hostil == true)
            System.out.println("Bot do tipo Hostil!");
        else
            System.out.println("Bot do tipo não Hostil!");
        System.out.println("-------------------------------");
    }
    
    @Override
    public void fazMissao() {
        if(isHostil())
            System.out.println("Atrapalhou o jogador a fazer a missão");
        else
            System.out.println("Ajudou o jogador a fazer a missão");
    
    }

    @Override
    public void passarMissao() {
        if(isHostil())
            System.out.println("Este Bot não passa missões!");
        else
            System.out.println("Este Bot passa missões!");
    }
}
