#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	int qtdePedido = 10;
	int qtdeEstoque = 20;
	int qtdeMinimaPorVenda = 5;
	
	cout << "Entre com o valor do pedido: ";
		qtdePedido = entrada.nextInt();
		
		System.out.print("Entre com o valor do estoque: ");
		qtdeEstoque = entrada.nextInt();
		
		System.out.print("Entre com a quantidade minima por venda: ");
		qtdeMinimaPorVenda = entrada.nextInt();

		
	bool vendaLiberada = qtdePedido <= qtdeEstoque && qtdePedido >= qtdeMinimaPorVenda;
	cout << "Venda Liberado: " << (vendaLiberada ? "true" : "false") << endl;
		
	return 0;
}
