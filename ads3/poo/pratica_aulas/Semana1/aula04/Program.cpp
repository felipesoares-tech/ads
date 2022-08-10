#include <iostream>

int main(int argc, char *argv[]){
	using namespace std;

	double valorHora;
	int horasTrabalhadas;
	double descontos;
	string nome;

	cout << "Informe o nome: ";
	cin >> nome;
	setbuf(stdin,NULL);
	cout << "Informe o valor da hora: ";
	cin >> valorHora;

	cout << "Informe a quantidade de horas trabalhadas: ";
	cin >> horasTrabalhadas;

	cout << "Informe o valor descontado: ";
	cin >> descontos;

	cout << "\n\nFolha de pagamento: " << nome << endl;
	cout << horasTrabalhadas << " x R$" << valorHora << "= R$" << (valorHora*horasTrabalhadas) << endl;
        cout << "Descontos: R$" << descontos << endl;
        cout << "Total devido: R$" << ((valorHora*horasTrabalhadas)-descontos) << endl;

	return 0;
}
