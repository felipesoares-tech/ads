import atividadeCarro.*;

public class Main {
    public static void main(String[] args) {
        Pessoa pessoa = new Pessoa("Felipe",22);
        Carro carro = new Carro("Ferrari");
        pessoa.passear();
        pessoa.setCarro(carro);
        pessoa.passear();

    }
}