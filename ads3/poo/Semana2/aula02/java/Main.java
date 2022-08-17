import java.util.Scanner;
public class Main{
	public static boolean primo(int num){
		for(int i = 1,cont=0; i<=num; i++){
			if(num%i == 0)
				cont++;
				
			if(cont>2 || num == 1)
				return false;
		}
		return true;
	}
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int valor = sc.nextInt();
		sc.close();
		
		if(primo(valor))
			System.out.println("eh um numero primo");
		else
			System.out.println("nao eh um numero primo");
		
	}
}
