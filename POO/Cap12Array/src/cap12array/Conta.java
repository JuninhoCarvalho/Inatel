package cap12array;

public class Conta implements Comparable<Conta>{
    
    float saldo;
    String dono;

    @Override
    public int compareTo(Conta o) {
        if(saldo<o.saldo)
            return -1;
        else if(saldo>o.saldo)
            return 1;
        else
            return 0;
    }
    
    
}
