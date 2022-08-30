package atividadeCarro;

public class Pessoa {
    private String nome;
    private int idade;
    private boolean possuiHabilitacao;
    private Carro carro;

    public String getModelo() {
        return modelo;
    }

    private String modelo;

    public boolean getCarro() {
        if (carro != null){
            modelo = carro.getModelo();
            return true;
        }
        else
            return false;
    }

    public void setPossuiHabilitacao(boolean possuiHabilitacao) {
        this.possuiHabilitacao = possuiHabilitacao;
    }
    public String getNome() {
        return nome;
    }

    public boolean isPossuiHabilitacao() {
        return possuiHabilitacao;
    }

    public void setCarro(Carro carro) {
        this.carro = carro;
    }

    public void ligarCarro(){
        if(carro != null){
            if(isPossuiHabilitacao())
                carro.ligar();
            else
                System.out.println("Você não tem habilitação!!");
        }else
            System.out.println("Você não possui carro");

    }

    public void desligarCarro(){
        if(carro != null){
            if(isPossuiHabilitacao())
                carro.desligar();
            else
                System.out.println("Você não tem habilitação!!");
        }else
            System.out.println("Você não possui carro");
    }

    public void acelerarCarro(){
        carro.acelerar();
    }
    public void frearCarro(){
        carro.frear();
    }
    public Pessoa(String nome, int idade){
        this.nome = nome;
        this.idade = idade;

        if(idade>=18)
            setPossuiHabilitacao(true);
    }
    public void passear(){
        System.out.println("Estou passeando");
    }

}