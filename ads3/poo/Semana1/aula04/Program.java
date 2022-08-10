import java.util.Scanner;
public class Program{
	public static void main(String[] args){
		Scanner ler = new Scanner(System.in);
		String nome;
		double valorHora;
		int horasTrabalhadas;
		double descontos;

		System.out.print("Informe o nome: ");
		nome = ler.nextLine();

		System.out.print("Informe o valor da hora: ");
		valorHora = ler.nextDouble();

		System.out.print("Informe a quantidade de horas trabalhadas: ");
		horasTrabalhadas = ler.nextInt();

		System.out.print("Informe o valor descontado: ");
		descontos = ler.nextDouble();

		System.out.printf("\n\nFolha de pagamento: %s\n",nome);
		System.out.printf("%d x R$%.2f = R$%.2f\n",horasTrabalhadas,valorHora,valorHora*horasTrabalhadas);
                System.out.printf("Descontos: R$%.2f\n",descontos);
                System.out.printf("Total devido: %.2f\n",(valorHora*horasTrabalhadas)-descontos);

		ler.close();

	}
}
