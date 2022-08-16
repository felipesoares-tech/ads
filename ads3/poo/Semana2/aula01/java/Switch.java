import java.util.Scanner;
public class Switch{
	public static void main(String[] args){
		Scanner entrada = new Scanner(System.in);
		System.out.print("Avalie o nosso atendimento(1 a 5):");
		
		int nota;
		String descricaoNota;
		nota = entrada.nextInt();
		
		
		System.out.println("Sua avaliação foi: " + switch(nota){
			case 1 -> "Muito ruim";
			case 2 -> "Ruim";
			case 3 -> "Razoavel";
			case 4 -> "Muito Bom";
			case 5 -> "Excelente";
			default -> "Opcao Invalida!";
				
		});	
	}
}
