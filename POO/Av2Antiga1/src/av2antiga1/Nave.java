package av2antiga1;

public class Nave {
    
    Astronauta[] astronautas = new Astronauta[10];
    
    public void addAstronauta(Astronauta astronauta){
        for (int i = 0; i < astronautas.length; i++){
            if(astronautas[i]==null){
                astronautas[i] = astronauta;
                break;
            }    
        }
        
    }
    
    public void listarAstronauta(){
        for (int i = 0; i < astronautas.length; i++) {
            if(astronautas[i]!=null){
                if(astronautas[i] instanceof Impostor){
                    Impostor imp = (Impostor)astronautas[i];
                    System.out.println("Astronauta: " + imp.getnAstronauta());
                    imp.mostraInfo();
                    imp.executar();
                    System.out.println("Matou: " + imp.getNumMortes() +
                            " tripulantes.");
                    imp.fazerTask();
                    imp.votar();
                    imp.reportar();
                    imp.sabotarLuz();
                    imp.sabotarOxigenio();
                    imp.sabotarReator();
                    System.out.println("-------------------------------------");
                }
                else if(astronautas[i] instanceof Tripulante){
                    Tripulante t = (Tripulante)astronautas[i];
                    System.out.println("Astronauta: " + t.getnAstronauta());
                    t.mostraInfo();
                    t.fazerTask();
                    t.reportar();
                    t.votar();
                    System.out.println("-------------------------------------");
                }
            }
        }
        
        
    }
    
    
}
