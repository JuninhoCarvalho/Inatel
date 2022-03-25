package aula4labex;

class Produto {
    
    //Informaçoes do produto
    int codigoSerie;
    String codigoProduto;
    String nome;
    String categoria;
    int quantidade;
    
    //funcao mostrar infos do produto "x"
    void mostraInfo()
    {
        System.out.println("Nome: " + nome);
        System.out.println("Categoria: " + categoria);
        System.out.println("Codigo de Serie: " + codigoSerie);
        System.out.println("Codigo do Produto: " + codigoProduto);
        System.out.println("Quantidade em estoque: " + quantidade);
        System.out.println();
    }
    
    
}
