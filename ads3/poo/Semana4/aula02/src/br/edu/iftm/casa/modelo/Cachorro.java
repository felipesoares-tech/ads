package br.edu.iftm.casa.modelo;

public class Cachorro {
    private String nome;
    private String raca;
    private String cor;
    private boolean dormindo;
    private boolean latindo;

    public boolean isDormindo() {
        return dormindo;
    }

    public void setDormindo(boolean dormindo) {
        this.dormindo = dormindo;
    }

    public boolean isLatindo() {
        return latindo;
    }

    public void setLatindo(boolean latindo) {
        if(this.isDormindo()){
            System.out.println("Nao pode latir");
            return;
        }
        this.latindo = latindo;
    }

    public Cachorro(String raca){
        this.raca = raca;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getRaca() {
        return raca;
    }

    public void setRaca(String raca) {
        this.raca = raca;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

}
