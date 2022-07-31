package simplePrograms.sellerCalc;
import java.util.Scanner;
/*Faça um algoritmo que leia o nome do vendedor, o seu salário fixo e o total (valor)
de vendas efetuadas por ele no mês. Sabendo que este vendedor ganha 15% de
comissão sobre suas vendas efetuadas, informe seu nome, o salário fixo e o salário
total no final do mês. */
public class seller {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);

        String name;
        float salaryFixed,sales;

        System.out.print("Informe o nome do vendedor: ");
        name = read.nextLine();

        System.out.print("Informe o seu salario fixo: ");
        salaryFixed = read.nextFloat();

        System.out.print("Informe o valor vendido no mes: ");
        sales = read.nextFloat();

        read.close();
        System.out.printf("Nome: %s\n", name);
        System.out.printf("Salario fixo: R$%.2f\n", salaryFixed);
        System.out.printf("Salario total com comissao: R$%.2f\n", ((0.15*sales)+salaryFixed));

    }
}
