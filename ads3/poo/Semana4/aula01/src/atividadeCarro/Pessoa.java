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
    public boolean isPossuiHabilitacao() {
        return possuiHabilitacao;
    }
    public String getNome() {
        return nome;
    }

    public void setCarro(Carro carro) {
        this.carro = carro;
    }
    
    public Pessoa(String nome, int idade){
        this.nome = nome;
        this.idade = idade;

        if(idade>=18)
            setPossuiHabilitacao(true);
    }
    public void passear(){
        System.out.println("Estou passeando");
        if(carro != null) {
            if (isPossuiHabilitacao()){
                carro.ligar();
                carro.acelerar();
                carro.acelerar();
            }
            else
                System.out.println("Voce nao tem habilitacao!");
        }else
            System.out.println("Voce nao tem um carro!");
    }

}