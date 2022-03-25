package senhordosaneis;

public class SenhorDosAneis {

    public static void main(String[] args) {
       
       TerraMedia t = new TerraMedia(); 
        
       Anao a1 = new Anao();
       a1.nome = "Gmili";
       a1.idade = 262;
       a1.energia = 1000;
       Arma arm1 = new Arma();
       arm1.setNomeArma("Machado");
       arm1.setMagica(false);
       a1.arm = arm1;
       t.addHabitantes(a1);
       
       Elfo e1 = new Elfo();
       e1.nome = "Legolas";
       e1.idade = 280;
       e1.energia = 2000;
       Arma arm2 = new Arma();
       arm2.setNomeArma("Arco e Flecha");
       arm2.setMagica(false);
       e1.arm = arm2;
       t.addHabitantes(e1);
       
       Mago m1 = new Mago();
       m1.nome = "Gandolf";
       m1.idade = 650;
       m1.energia = 2500;
       Arma arm3 = new Arma();
       arm3.setNomeArma("Cajado");
       arm3.setMagica(true);
       m1.arm = arm3;
       t.addHabitantes(m1);
       
       t.listarHerois();
    }

}
