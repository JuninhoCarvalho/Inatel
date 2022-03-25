package herança1lab;

public class Herança1Lab {

    public static void main(String[] args) {
        Produto produtos[] = new Produto[6];
        
        Notebook n1 = new Notebook("Dell", 3300, 256, "NVidia", "Intel i7");
        Notebook n2 = new Notebook("Avell", 2800, 140, "AMD", "Intel i5");
        Camisa c1 = new Camisa("DC", 120, "Preta", "M");
        Camisa c2 = new Camisa("Element", 140, "Cinza", "P");
        
        produtos[0] = n1;        
        produtos[1] = n2;        
        produtos[2] = c1;        
        produtos[3] = c2;        
                
        for (int i = 0; i < produtos.length; i++){
            if(produtos[i] != null)
            {
                if(produtos[i] instanceof Notebook)
                {
                    Notebook note = (Notebook)produtos[i];
                    note.etiquetaPreco();
                }
                else if(produtos[i] instanceof Camisa)
                {
                    Camisa cam = (Camisa)produtos[i];
                    cam.etiquetaPreco();
                }
            }
            
        }
    }

}
