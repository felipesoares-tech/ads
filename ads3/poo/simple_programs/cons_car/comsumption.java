package simple_programs.cons_car;
import java.util.Scanner;
/*Faça um algoritmo para determinar o consumo médio de um automóvel sendo
fornecida a distância total percorrida pelo automóvel e o total de combustível gasto. */

public class comsumption {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
        float spent, distance;

        System.out.print("Informe a distancia total: ");
        distance = read.nextFloat();

        System.out.print("Informe o total de combustivel gasto: ");
        spent = read.nextFloat();

        read.close();
        System.out.printf("O veiculo em questao faz %.2fkm/L\n", distance/spent);


    }
}
