import br.com.felipeltda.sistema.ficharios.FicharioCaminhao;
import br.com.felipeltda.sistema.ficharios.FicharioCarro;
import br.com.felipeltda.sistema.ficharios.FicharioClientes;
import br.com.felipeltda.sistema.ficharios.FicharioOnibus;
import br.com.felipeltda.sistema.modelos.Caminhao;
import br.com.felipeltda.sistema.modelos.Carro;
import br.com.felipeltda.sistema.modelos.Cliente;
import br.com.felipeltda.sistema.modelos.Onibus;

import java.util.ArrayList;
import java.util.Objects;
import java.util.Scanner;

public class Main {
    static Scanner entrada = new Scanner(System.in);

    public static int menu(int opcao){
        String[] opcoes = {"Carro", "Caminhao", "Onibus", "Vendas" , "Clientes"};
        System.out.println("==="+opcoes[opcao-1]+"===");
        System.out.println("1 - Cadastrar");
        System.out.println("2 - Consultar");
        System.out.println("3 - Atualizar");
        System.out.println("4 - Remover");
        System.out.println("5 - Relatorio");
        System.out.println("0 - Voltar ao menu principal");

        return entrada.nextInt();
    }
    public static void main(String[] args) {
        int opcao;

        ArrayList<Carro> carros = new ArrayList<>();
        ArrayList<Caminhao> caminhoes = new ArrayList<>();
        ArrayList<Onibus> onibus = new ArrayList<>();
        ArrayList<Cliente> clientes = new ArrayList<>();

        FicharioCaminhao ficharioCaminhao = new FicharioCaminhao(caminhoes);
        FicharioCarro ficharioCarro = new FicharioCarro(carros);
        FicharioOnibus ficharioOnibus = new FicharioOnibus(onibus);
        FicharioClientes ficharioClientes = new FicharioClientes(clientes);

        do {
            System.out.println(" === SISTEMA-VENDAS === ");
            System.out.println("1 - Carro ");
            System.out.println("2 - Caminhao ");
            System.out.println("3 - Onibus");
            System.out.println("4 - Vendas ");
            System.out.println("5 - Clientes ");
            System.out.println("0 - Sair ");
            opcao = entrada.nextInt();
            entrada.skip("\n");

            int operacao;
            switch (opcao) {

                case 1->{
                    do{
                        operacao = menu(opcao);
                        switch (operacao){
                           case 1 -> ficharioCarro.cadastrar();
                           case 2 -> ficharioCarro.consultar();
                           case 3 -> ficharioCarro.atualizar();
                           case 4 -> ficharioCarro.remover();
                           case 5 -> ficharioCarro.relatorio();
                            default -> {if (operacao != 0 ) System.out.println("Opcao invalida");}
                        }
                    }while(operacao != 0);
                }
                case 2 ->{
                    do{
                        operacao = menu(opcao);
                        switch (operacao){
                            case 1 -> ficharioCaminhao.cadastrar();
                            case 2 -> ficharioCaminhao.consultar();
                            case 3 -> ficharioCaminhao.atualizar();
                            case 4 -> ficharioCaminhao.remover();
                            case 5 -> ficharioCaminhao.relatorio();
                            default -> {if (operacao != 0 ) System.out.println("Opcao invalida");}
                        }
                    }while(operacao != 0);
                }
                case 3 ->{
                    do{
                        operacao = menu(opcao);
                        switch (operacao){
                            case 1 -> ficharioOnibus.cadastrar();
                            case 2 -> ficharioOnibus.consultar();
                            case 3 -> ficharioOnibus.atualizar();
                            case 4 -> ficharioOnibus.remover();
                            case 5 -> ficharioOnibus.relatorio();
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
                case 5 -> {
                    do{
                        operacao = menu(opcao);
                        switch (operacao){
                            case 1 -> ficharioClientes.cadastrar();
                            case 2 -> ficharioClientes.consultar();
                            case 3 -> ficharioClientes.atualizar();
                            case 4 -> ficharioClientes.remover();
                            case 5 -> ficharioClientes.relatorio();
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
