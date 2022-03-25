package senhordosaneis;

public class TerraMedia {
    private Habitante[] herois = new Habitante[10];

    public Habitante[] getHerois() {
        return herois;
    }

    public void setHerois(Habitante[] herois) {
        this.herois = herois;
    }
    
    public void addHabitantes(Habitante herois1){
        for (int i = 0; i < getHerois().length; i++) {
            if(herois[i]==null){
                herois[i] = herois1;
                break;
            }
        }
        
    }
    
    public void listarHerois(){
        for(int i = 0; i < getHerois().length; i++) {
           if(herois[i]!=null){
               if(herois[i] instanceof Anao){
                   Anao a = (Anao)herois[i];
                   a.atacar();
                   a.minerar();
                   a.mostraInfo();
               }
               else if(herois[i] instanceof Elfo){
                   Elfo e = (Elfo)herois[i];
                   e.viajar();
                   e.atacar();
                   e.curar();
                   e.mostraInfo();
               }
               else if(herois[i] instanceof Mago){
                   Mago m = (Mago)herois[i];
                   m.atacar();
                   m.lancaFeitico();
                   m.mostraInfo();
               }  
           }
        } 
    }
            
    
}
