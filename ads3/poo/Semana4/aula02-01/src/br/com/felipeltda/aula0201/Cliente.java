package br.com.felipeltda.aula0201;

public class Cliente {
    private int codigo;
    private final String nome;
    private double limiteCredito;
    private boolean especial;

    public String getNome() {
        return nome;
    }

    public void atualizarLimite(Double valor){
        if(especial){
            setLimiteCredito(valor);
            System.out.println("Limite aumentado" + " valor: R$" + limiteCredito);
        }else{
            System.out.println("Cliente nao especial");
        }
    }

    public void atualizarSituacao(boolean situacao){
        if(!especial){
            setEspecial();
        }else
            limiteCredito = 0;
    }

    public Cliente(String nome){
        this.nome = nome;
    }

    public boolean isEspecial() {
        return especial;
    }

    public void setEspecial() {
        this.especial = true;
    }

    public double getLimiteCredito() {
        return limiteCredito;
    }

    public void setLimiteCredito(double limiteCredito) {
        if(isEspecial()) {
            this.limiteCredito = limiteCredito;
        }else{
            System.out.println("Cliente nao especial");
            this.limiteCredito = 0;
        }
    }
}
