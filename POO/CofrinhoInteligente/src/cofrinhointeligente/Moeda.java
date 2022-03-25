package cofrinhointeligente;

public class Moeda implements Comparable<Moeda>{
    private float valor;

    public Moeda(float v){
        setValor(v);
    }
    
    public float getValor() {
        return valor;
    }

    public final void setValor(float valor) {
        this.valor = valor;
    }

    @Override
    public int compareTo(Moeda o) {
        if(getValor()<o.getValor())
            return -1;
        else if(getValor()>o.getValor())
            return 1;
        else
            return 0;
    }

}
