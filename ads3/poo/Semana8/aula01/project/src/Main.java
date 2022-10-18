import br.com.felipeltda.sistema.ficharios.FicharioCaminhao;
import br.com.felipeltda.sistema.ficharios.FicharioCarro;
import br.com.felipeltda.sistema.ficharios.FicharioOnibus;
import br.com.felipeltda.sistema.modelos.Caminhao;
import br.com.felipeltda.sistema.modelos.Carro;
import br.com.felipeltda.sistema.modelos.Onibus;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static Scanner entrada = new Scanner(System.in);

    public static int menu(int opcao){
        String[] opcoes = {"Carro", "Caminhao", "Onibus", "Vendas"};
        System.out.println("==="+opcoes[opcao-1]+"===");
        System.out.println("1 - Cadastrar - "+opcoes[opcao-1]);
        System.out.println("2 - Consultar - "+opcoes[opcao-1]);
        System.out.println("3 - Atualizar - "+opcoes[opcao-1]);
        System.out.println("4 - Remover - "+opcoes[opcao-1]);
        System.out.println("0 - Voltar ao menu principal");

        return entrada.nextInt();
    }
    public static void main(String[] args) {
        int opcao;

        ArrayList<Carro> carros = new ArrayList<>();
        ArrayList<Caminhao> caminhoes = new ArrayList<>();
        ArrayList<Onibus> onibus = new ArrayList<>();

        FicharioCaminhao ficharioCaminhao = new FicharioCaminhao(caminhoes);
        FicharioCarro ficharioCarro = new FicharioCarro(carros);
        FicharioOnibus ficharioOnibus = new FicharioOnibus(onibus);


        ficharioCarro.cadastrar();



        do {
            System.out.println(" === SISTEMA-VENDAS === ");
            System.out.println("1 - Carro ");
            System.out.println("2 - Caminhao ");
            System.out.println("3 - Onibus");
            System.out.println("4 - Vendas ");
            System.out.println("0 - Sair ");
            opcao = entrada.nextInt();
            entrada.skip("\n");

            int operacao;
            switch (opcao) {

                case 1->{
                    do{
                        operacao = menu(opcao);
                        switch (operacao){
                           case 1 -> System.out.println("");
                            default -> {if (operacao != 0 ) System.out.println("Opcao invalida");}
                        }
                    }while(operacao != 0);
                }
                case 2 ->{
                    do{
                        operacao = menu(opcao);
                        switch (operacao){
                            case 1 -> System.out.println("");
                            default -> {if (operacao != 0 ) System.out.println("Opcao invalida");}
                        }
                    }while(operacao != 0);
                }
                case 3 ->{
                    do{
                        operacao = menu(opcao);
                        switch (operacao){
                            case 1 -> System.out.println("");
                            default -> {if (operacao != 0 ) System.out.println("Opcao invalida");}
                        }
                    }while(operacao != 0);
                }
                case 4 ->{
                    do{
                        operacao = menu(opcao);
                        switch (operacao){
                            case 1 -> System.out.println("");
                            default -> {if (operacao != 0 ) System.out.println("Opcao invalida");}
                        }
                    }while(operacao != 0);
                }
                default -> {if (opcao != 0) { System.out.println("Opção inválida.");}
                }
            }
        } while (opcao != 0);


    }
}
