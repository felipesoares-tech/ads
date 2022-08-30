import atividadeCarro.*;

public class Main {
    public static void main(String[] args) {
        Pessoa pessoa = new Pessoa("Felipe",22);
        Carro carro = new Carro("Ferrari");
        System.out.println("Meu nome e "+pessoa.getNome());
        pessoa.passear();
        System.out.println(pessoa.getCarro() ? "Tenho um carro, modelo: "+ pessoa.getModelo() : "Nao tenho um carro");
        pessoa.setCarro(carro);
        pessoa.passear();
        System.out.println(pessoa.getCarro() ? "Tenho um carro, modelo: "+ pessoa.getModelo() : "Nao tenho um carro");
        pessoa.ligarCarro();
        pessoa.acelerarCarro();
        pessoa.acelerarCarro();
        pessoa.acelerarCarro();
        pessoa.acelerarCarro();
        pessoa.frearCarro();
        pessoa.desligarCarro();
        pessoa.frearCarro();
        pessoa.frearCarro();
        pessoa.frearCarro();
        pessoa.frearCarro();
        pessoa.desligarCarro();

    }
}