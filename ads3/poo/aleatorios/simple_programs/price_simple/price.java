package simple_programs.price_simple;
import java.util.Scanner;
/*Elaborar um algoritmo que efetue a apresentação do valor da conversão em real
(R$) de um valor lido em dólar (US$). O algoritmo deverá solicitar o valor da cotação
do dólar e também a quantidade de dólares disponíveis com o usuário. */
public class price {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
        float value,price;
        System.out.print("Informe o valor disponivel em U$: ");
        value = read.nextFloat();
        System.out.print("Informe a cotacao atual do dolar: ");
        price = read.nextFloat();

        read.close();
        System.out.printf("Valor disponivel em reais = R$%.2f\n",value*price);
    }
}
