package sum_vet;
import java.util.Scanner;
public class Program{
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
        int vet[] = new int[10],sum=0;

        for(int i=0; i<10; i++){
            System.out.printf("Informe o %dº valor: ",i+1);
            vet[i] = read.nextInt();
            sum += vet[i];
        }
        System.out.printf("\nResultado do somatorio = %d\n\n",sum);
        read.close();
        for(int i=0; i<10; i++){
            System.out.printf("Posicao: %d, valor: %d\n",i,vet[i]);
        }

    }
}