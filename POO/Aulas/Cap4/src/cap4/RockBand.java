package cap4;

public class RockBand {

    public static void main(String[] args) {
       
        Banda banda1 = new Banda();
        
        banda1.nome = "Banda Pós Corona";
        banda1.genero = "Axé";
        
        // EMPRESARIO DA BANDA
        Empresario emp1 = new Empresario();
        emp1.nome = "Feio";
        emp1.cnpj = 4342343;
        
        // REFERENCIA DE EMPRESARIO DA BANDA
        // APONTANDO PARA EMPRESARIO
        banda1.emp = emp1;
        
        //Criando os musicos da banda
        Musico m1 = new Musico();
        m1.nome = "Juninho";
        m1.funcao = "Gaita";
        
        Musico m2 = new Musico();
        m2.nome = "Jão";
        m2.funcao = "Assovio";
        
        Musico m3 = new Musico();
        m3.nome = "Thiago";
        m3.funcao = "Microfone";
        
        Musico m4 = new Musico();
        m4.nome = "André";
        m4.funcao = "Berrante";
        
        
        //Criando um array de musicos auxiliar
        Musico[] musico_aux = new Musico[100];
        
        //Colocando os musicos dentro do array aux
        musico_aux[0] = m1;
        musico_aux[1] = m2;
        musico_aux[2] = m3;
        musico_aux[3] = m4;
               
        //Fazendo o todo apontar para este array auxiliar
        banda1.musicos = musico_aux;
        
        
        //Criando as musicas da banda
        Musica music1 = new Musica();
        music1.nome = "Chuva e Cigarro";
        music1.tempo = "16:32m";
        
        Musica music2 = new Musica();
        music2.nome = "Afantasia louca";
        music2.tempo = "4:30m";
        
        Musica music3 = new Musica();
        music3.nome = "Hey Jude Asa Branca";
        music3.tempo = "1m";
        
        Musica[] musica_a = new Musica[100];
        musica_a[0] = music1;
        musica_a[1] = music2;
        musica_a[2] = music3;
        banda1.musicas = musica_a;
        
        banda1.mostraInfosBanda();
    }
    
}
