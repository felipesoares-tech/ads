package br.com.felipeltda.aula01;

public class Pessoa {
    private final String nome;
    private final int idade;
    private Carro carro;
    private boolean possuiHabilitacao;

    public void mostrarDocumento(){
        if(carro != null){
            System.out.println("-------------Documento do carro---------");
            System.out.println("Propietario: "+carro.getDono().nome);
            System.out.println("Modelo: "+carro.getModelo());
            System.out.println("Cor: "+carro.getCor());
            System.out.println("----------------------------------------");
            return;
        }
        System.out.println("Nao tenho carro, entao nao tenho documento!");
    }

    public void verificarPotencia(){
        if(carro != null)
            System.out.println("A potencia do carro e : "+ carro.getMotor().getPotencia());
        else
            System.out.println("Eu nao tenho carro, entao nao posso verificar a potencia");
    }

    public void mostrarHabilitacao(){
        System.out.println(isPossuiHabilitacao() ? "Oba, eu ja tenho habilitacao" : "Vish, nao tenho habilitacao");
    }

    public void verificarIdade(){
        System.out.println("Eu tenho + "+getIdade()+" anos");
    }
    public void verificarNome(){
        System.out.println("Meu nome e: "+getNome());
    }
    private int getIdade() {
        return idade;
    }

    private void setPossuiHabilitacao(boolean possuiHabilitacao) {
        this.possuiHabilitacao = possuiHabilitacao;
    }
    private boolean isPossuiHabilitacao() {
        return possuiHabilitacao;
    }
    private String getNome() {
        return nome;
    }

    public void setCarro(Carro carro) {
        this.carro = carro;
        carro.setDono(this);
        System.out.println("Oba, ganhei um carro!");
    }

    public Pessoa(String nome, int idade){
        this.nome = nome;
        this.idade = idade;

        if(idade>=18)
            setPossuiHabilitacao(true);
        else
            setPossuiHabilitacao(false);
    }
    public void passear(){
        if(carro != null) {
            if (isPossuiHabilitacao()){
                carro.ligar();
                carro.acelerar();
                carro.acelerar();
            }
            else
                System.out.println("Voce nao tem habilitacao!");
        }else
            System.out.println("Estou andando, podia estar de carro, mas nao ganhei carro!");
    }

}