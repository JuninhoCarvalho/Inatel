package aula4labex;

public class Aula4LabEx {

    public static void main(String[] args) {
        
        Produto p1 = new Produto();//recebera os dados do primeiro produto
        Produto p2 = new Produto();//recebera os dados do segundo produto
        
        //INFOS DO PRODUTO 1
        p1.codigoSerie = 1406;
        p1.codigoProduto = "8340234";
        p1.nome = "Bolacha Bauduco";
        p1.categoria = "Alimento doce";
        p1.quantidade = 100;
        
        //INFOS DO PRODUTO 2
        p2.codigoSerie = 1818;
        p2.codigoProduto = "19287123";
        p2.nome = "Coca Cola 2L";
        p2.categoria = "Bebidas";
        p2.quantidade = 500;
        
        //CHAMADA DA FUNCAO PARA MOSTRAR INFOS DOS PRODUTOS
        p1.mostraInfo();
        p2.mostraInfo();
    }
    
}
