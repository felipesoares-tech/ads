package simple_programs.temperature_calc;
import java.util.Scanner;

/*7 - Faça um algoritmo que leia a temperatura em graus Celsius e apresente a
temperatura convertida em graus Fahrenheit. A fórmula de conversão é:
F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */

public class temperature {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        float temp;

        System.out.print("Informe a temperatura em graus Celsius: ");
        temp = read.nextFloat();
        read.close();

        System.out.printf("Temperatura em Fahrenheit: %.2f\n",(temp*9+160)/5);

    }
}
