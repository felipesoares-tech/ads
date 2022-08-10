package simple_programs.change_simple;
import java.util.Scanner;

/*6 - Leia dois valores para as variáveis A e B e efetue as trocas dos valores de forma
que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o
valor da variável A. Apresentar os valores trocados. */
public class change {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int a, b;
        System.out.print("Informe o valor de A: ");
        a = read.nextInt();
        System.out.print("Informe o valor de B: ");
        b = read.nextInt();

        int aux = a;
        a = b;
        b = aux;

        System.out.printf("Valor de A: %d\nValor de B:%d\n",a,b);
        read.close();

    }
}