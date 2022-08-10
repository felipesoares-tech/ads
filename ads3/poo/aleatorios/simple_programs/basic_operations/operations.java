package simple_programs.basic_operations;
import java.util.Scanner;
/*Faça um algoritmo que receba dois números e ao final mostre a soma, subtração,
multiplicação e a divisão dos números lidos.*/
public class operations {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
        int n1,n2;

        System.out.print("Informe o valor de n1: ");
        n1 = read.nextInt();

        System.out.print("Informe o valor de n2: ");
        n2 = read.nextInt();
        read.close();

        System.out.printf("Soma =  %d\n", n1+n2);
        System.out.printf("Subtracao =  %d\n", n1-n2);
        System.out.printf("Divisao =  %d\n", n1/n2);
        System.out.printf("Multiplicacao =  %d\n", n1*n2);


    }
}
