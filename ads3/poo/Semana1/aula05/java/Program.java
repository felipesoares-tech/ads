import java.util.Scanner;
public class Program{
	public static void main(String[] args){
		Scanner entrada = new Scanner(System.in);
		int qtdePedido;
		int qtdeEstoque;
		int qtdeMinimaPorVenda;
		
		System.out.print("Entre com o valor do pedido: ");
		qtdePedido = entrada.nextInt();
		
		System.out.print("Entre com o valor do estoque: ");
		qtdeEstoque = entrada.nextInt();
		
		System.out.print("Entre com a quantidade minima por venda: ");
		qtdeMinimaPorVenda = entrada.nextInt();
		
		boolean vendaLiberada = qtdePedido <= qtdeEstoque && qtdePedido >= qtdeMinimaPorVenda;
		System.out.println("Venda Liberado: "+vendaLiberada);
		

	}
}
