import br.com.felipeltda.aula0201.Cliente;

public class Main {
    public static void main(String[] args) {

        Cliente cliente = new Cliente("Felipe");

        cliente.atualizarLimite(200.00);
        cliente.atualizarSituacao(true);
        cliente.atualizarLimite(200.00);
        cliente.atualizarSituacao(false);
        System.out.println("Limite de credito: R$"+ cliente.getLimiteCredito());
    }

}
