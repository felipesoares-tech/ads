import java.util.Scanner;
public class Main{
	public static void main(String[] args){
		Scanner read = new Scanner(System.in);
		int sexo;
		float peso,altura,imc;
		
		sexo = read.nextInt();
		peso = read.nextFloat();
		altura = read.nextFloat();
		imc = peso/(altura*altura);
		
		read.close();
		
		if(sexo == 1){
			if(imc < 20.7)
				System.out.println("Abaixo do peso");
			else if(imc >= 20.8 && imc <= 26.4)
				System.out.println("Peso ideal");
			else if(imc >= 26.5 && imc <= 27.8)
				System.out.println("Um pouco acima do peso");
			else if(imc >= 27.9 && imc <= 31.1)
				System.out.println("Acima do peso ideal");
			else
				System.out.println("Obeso");
		
		}else{
			if(imc < 19.1)
				System.out.println("Abaixo do peso");
			else if(imc >= 19.1 && imc <= 25.8)
				System.out.println("Peso ideal");
			else if(imc >= 25.9 && imc <= 27.3)
				System.out.println("Um pouco acima do peso");
			else if(imc >= 27.4 && imc <= 32.3)
				System.out.println("Acima do peso ideal");
			else
				System.out.println("Obeso");
		}
		
	}
}
