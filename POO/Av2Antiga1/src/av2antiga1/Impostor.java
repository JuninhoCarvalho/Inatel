package av2antiga1;

public class Impostor extends Astronauta implements Executar,Task{

    private int numMortes;
    
    @Override
    public void reportar() {
        System.out.println("O impostor fez um kill report!");
    }
    
   @Override
    public void mostraInfo() {
        System.out.println("Impostor!!");
        System.out.println("Nome: " + getNome());
        System.out.println("Cor: " + getCor());
    }

    @Override
    public void votar() {
        System.out.println("O voto foi realizado!");
    }

    @Override
    public void executar() {
        numMortes++;
    }

    @Override
    public void fazerTask() {
        System.out.println("Fez uma fake Task!");
    }
    
    public void sabotarReator(){
        System.out.println("O impostor sabotou o reator!");
    }
    
    public void sabotarOxigenio(){
        System.out.println("O impostor sabotou o oxigênio!");
    }
    
    public void sabotarLuz(){
        System.out.println("O impostor sabotou o sabotou a luz");
    }

    public int getNumMortes() {
        return numMortes;
    }
    
    
    
}
