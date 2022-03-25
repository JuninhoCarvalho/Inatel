package av2antiga1;

public class Av2Antiga1 {

    public static void main(String[] args) {
           
        Nave naves = new Nave();
        boolean skin = false;
        boolean pet = false;
        
        Impostor imp1 = new Impostor();
        imp1.setNome("Juninho");
        imp1.setCor("Branco");
        naves.addAstronauta(imp1);
        
        Tripulante t1 = new Tripulante();
        t1.setNome("Teste1");
        t1.setCor("Preto");
        naves.addAstronauta(t1);
        
        Tripulante t2 = new Tripulante();
        t2.setNome("Teste2");
        t2.setCor("Amarelo");
        naves.addAstronauta(t2);
        
        naves.listarAstronauta();
        
    }

}
