import br.com.felipeltda.aula01.*;


public class Main {
    public static void main(String[] args) {
        Pessoa pessoa = new Pessoa("Felipe",22);
        Motor motor = new Motor();
        Carro carro = new Carro("Ferrari",motor);

        pessoa.verificarNome();
        pessoa.passear();
        pessoa.verificarPotencia();
        pessoa.setCarro(carro);
        pessoa.mostrarDocumento();
        pessoa.verificarPotencia();

    }
}