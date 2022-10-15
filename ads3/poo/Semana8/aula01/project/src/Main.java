import java.util.Scanner;

public class Main {
    static Scanner entrada = new Scanner(System.in);

    public static short menu(){
        String[] veiculos = {"Carro", "Caminhao", "Onibus"};
        System.out.println("==="+veiculos+"===");
        System.out.println("Cadastrar - "+veiculos);
        System.out.println("Consultar - "+veiculos);
        System.out.println("Atualizar - "+veiculos);
        System.out.println("Remover - "+veiculos);
        short opcao = entrada.nextShort();
        entrada.skip("\n");
        return opcao;
    }
    public static void main(String[] args) {
        System.out.printf("");


    }
}
