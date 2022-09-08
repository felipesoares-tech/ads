import java.util.ArrayList;
import java.util.Scanner;
import br.com.felipeltda.ficharios.*;
import br.com.felipeltda.modelos.*;

public class Main {
    public static int menu(int operacaoGeral){
        String[] vet = {"Aluno","Professor","Turma","Enturmacao"};
        Scanner entrada = new Scanner(System.in);
        int operacao;

        System.out.println("==="+vet[operacaoGeral-1].toUpperCase()+"===");
        System.out.println("1 - Cadastrar "+vet[operacaoGeral-1]);
        System.out.println("2 - Alterar "+vet[operacaoGeral-1]);
        System.out.println("3 - Excluir "+vet[operacaoGeral-1]);
        System.out.println("4 - Consultar "+vet[operacaoGeral-1]);
        System.out.println("5 - Relatório "+vet[operacaoGeral-1]);
        System.out.println("0 - Voltar ao menu principal");
        System.out.println("Opção: ");
        operacao = entrada.nextInt();

        return operacao;
    }

    public static void main(String[] args){
        int opcao;
        int operacao;
        Scanner entrada = new Scanner(System.in);
        ArrayList<Turma> turmas  = new ArrayList<>();
        ArrayList<Professor> professores = new ArrayList<>();
        ArrayList<Aluno> alunos = new ArrayList<>();
        ArrayList<Enturmacao> enturmacoes = new ArrayList<>();
        FicharioEnturmacao ficharioEnturmacao = new FicharioEnturmacao(enturmacoes,turmas, alunos);

        FicharioAluno ficharioAluno = new FicharioAluno(alunos,ficharioEnturmacao);
        FicharioProfessor ficharioProfessor = new FicharioProfessor(professores);
        FicharioTurma ficharioTurma = new FicharioTurma(turmas);


        do {
            System.out.println(" === SISTEMA-ESCOLAR === ");
            System.out.println("1 - Aluno ");
            System.out.println("2 - Professor ");
            System.out.println("3 - Turmas ");
            System.out.println("4 - Enturmações ");
            System.out.println("0 - Sair ");
            opcao = entrada.nextInt();
            entrada.skip("\n");

            switch (opcao) {
                case 1->{
                    do{
                        operacao = menu(opcao);
                        switch (operacao){
                            case 1 -> ficharioAluno.cadastrar();
                            case 2 -> ficharioAluno.alterar();
                            case 3 -> ficharioAluno.excluir();
                            case 4 -> ficharioAluno.consultar();
                            case 5 -> ficharioAluno.relatorio();
                            default -> {if (operacao != 6 ) System.out.println("Opcao invalida");}
                        }
                    }while(operacao != 0);
                }
                case 2 ->{
                    do{
                        operacao = menu(opcao);
                        switch (operacao){
                            case 1 -> ficharioProfessor.cadastrar();
                            case 2 -> ficharioProfessor.alterar();
                            case 3 -> ficharioProfessor.excluir();
                            case 4 -> ficharioProfessor.consultar();
                            case 5 -> ficharioProfessor.relatorio();
                            default -> {if (operacao != 6 ) System.out.println("Opcao invalida");}
                        }
                    }while(operacao != 0);

                }
                case 3 ->{
                    do{
                        operacao = menu(opcao);
                        switch (operacao){
                            case 1 -> ficharioTurma.cadastrar();
                            case 2 -> ficharioTurma.alterar();
                            case 3 -> ficharioTurma.excluir();
                            case 4 -> ficharioTurma.consultar();
                            case 5 -> ficharioTurma.relatorio();
                            default -> {if (operacao != 6 ) System.out.println("Opcao invalida");}
                        }
                    }while(operacao != 0);

                }
                case 4 ->{
                    do{
                        operacao = menu(opcao);
                        switch (operacao){
                            case 1 -> ficharioEnturmacao.cadastrar();
                            //case 2 -> ficharioEnturmacao.alterar();
                            case 3 -> ficharioEnturmacao.excluir();
                            case 4 -> ficharioEnturmacao.consultar();
                            case 5 -> ficharioEnturmacao.relatorio();
                            default -> {if (operacao != 0 ) System.out.println("Opcao invalida");}
                        }
                    }while(operacao != 0);

                }
                default -> {if (opcao != 0) { System.out.println("Opção inválida.");
                }
                }
            }
        } while (opcao != 0);
    }
}