package simple_programs.grades_avarage;
import java.util.Scanner;
/*Escreva um algoritmo que leia o nome de um aluno e as notas das três provas que
ele obteve no bimestre. No final, informar o nome do aluno e a sua média (aritmética). */
public class avarage {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);

        String name;
        float sum=0,n;
        System.out.print("Digite o nome do aluno: ");
        name = read.nextLine();

        for(int i=0; i<3; i++){
            System.out.printf("Digite a nota nº %d: ", i+1);
            n = read.nextFloat();
            sum += n;
        }
        read.close();
        System.out.printf("Nome do aluno = %s\n", name);
        System.out.printf("Media = %.2f\n", sum/3);
    }
}
