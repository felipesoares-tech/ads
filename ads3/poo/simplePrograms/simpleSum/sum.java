package simplePrograms.simpleSum;
import java.util.Scanner;

public class sum{
    public static void main(String[] args){
        int n1,n2;
        Scanner read = new Scanner(System.in);

        System.out.print("Informe o valor de n1: ");
        n1 = read.nextInt();
        System.out.print("Informe o valor de n2: ");
        n2 = read.nextInt();

        read.close();
        System.out.printf("O resultado da soma e = %d\n", n1+n2);

    }
}