package capitulo5;

public class FabricaDeRobos {
    
    public static void main(String[] args) {
        Robo r1 = new Robo(true);
        r1.corp.setTipo("Coletor");
        r1.corp.setCor("Branco");
        r1.proces.setMarca("Samsung");
        r1.proces.setFrequenciaProcessamento(1000);
       
        Robo r2 = new Robo(false);
        r2.corp.setTipo("Ajudante");
        r2.corp.setCor("Azul");
        
        r1.mostraConfigRobo();
        r2.mostraConfigRobo();
    }
    
}
