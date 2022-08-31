package atividadeCarro;

public class Pessoa {
    private final String nome;
    private final int idade;
    private Carro carro;
    private boolean possuiHabilitacao;
    private String modelo;

    public void verificarPotencia(){
        if(carro != null)
            System.out.println("A potencia do carro e : "+ carro.getMotor());
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

    public void verificarModelo(){
        if(carro != null)
            System.out.println(carro.getModelo());
        else
            System.out.println("Eu nao tenho carro, entao nao posso verificar o modelo");

    }
    private String getModelo() {
        return modelo;
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