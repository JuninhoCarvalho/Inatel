package av2antiga1;

public class Tripulante extends Astronauta implements Task{
    private int numTask;

    @Override
    public void reportar() {
        System.out.println("O tripulante reportou um corpo");
    }

    @Override
    public void votar() {
        System.out.println("O voto foi realizado!");
    }

    @Override
    public void fazerTask() {
        numTask++;
    }

    @Override
    public void mostraInfo(){
        System.out.println("Tripulante!!");
        System.out.println("Nome: " + getNome());
        System.out.println("Cor: " + getCor());
    }
    
}
