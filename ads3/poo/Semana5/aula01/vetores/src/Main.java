import br.com.felipeltda.modelos.*;
import br.com.felipeltda.ficharios.*;

import java.util.Scanner;
// completar os menus
// todos devem ter os metodos cadastrar, alterar, excluir, consultar e relatorio

public class Main {

    public static int menu(int operacaoGeral){
        String vet[] = {"Aluno","Professor","Turma"};
        Scanner entrada = new Scanner(System.in);
        int operacao;

            System.out.println("==="+vet[operacaoGeral-1].toUpperCase()+"===");
            System.out.println("1 - Cadastrar "+vet[operacaoGeral-1]);
            System.out.println("2 - Alterar "+vet[operacaoGeral-1]);
            System.out.println("3 - Excluir "+vet[operacaoGeral-1]);
            System.out.println("4 - Consultar "+vet[operacaoGeral-1]);
            System.out.println("5 - Relatório "+vet[operacaoGeral-1]);
            System.out.println("6 - Voltar ao menu principal");
            System.out.println("Opção: ");
            operacao = entrada.nextInt();

            return operacao;
    }
    public static void main(String[] args){
        Scanner entrada = new Scanner(System.in);
        Aluno alunos [] = new Aluno[40];
        Turma turmas [] = new Turma[3];
        Professor professores [] = new Professor[10];

        FicharioAluno ficharioAluno = new FicharioAluno(alunos);
        FicharioProfessor ficharioProfessor = new FicharioProfessor(professores);
        FicharioTurma ficharioTurma = new FicharioTurma(turmas);


        int operacaoGeral, operacaoCadastro;
        do {
            System.out.println(" === ALUNO === ");
            System.out.println("1 - Aluno ");
            System.out.println("2 - Professor ");
            System.out.println("3 - Turmas ");
            System.out.println("4 - Sair ");
            operacaoGeral = entrada.nextInt();
            entrada.skip("\n");

            switch (operacaoGeral){
                case 1: // cadastro de aluno
                    do {
                        operacaoCadastro = menu(operacaoGeral);

                        switch (operacaoCadastro) {
                            case 1:
                                ficharioAluno.cadastrar();
                                break;
                            case 2:
                                ficharioAluno.alterar();
                                break;
                            case  3:
                                break;
                            case 4:
                                ficharioAluno.consultar();
                                break;
                            case 5:
                                ficharioAluno.relatorio();
                                break;
                            default:
                                if (operacaoCadastro != 6) {
                                    System.out.println("Opção inválida.");
                                }
                        }

                    } while (operacaoCadastro != 6);
                    break; // fim do case aluno
                case 2: //cadastro professor
                    do {
                        operacaoCadastro = menu(operacaoGeral);

                        switch (operacaoCadastro) {
                            case 1:
                                ficharioProfessor.cadastrar();
                                break;
                            case 2:
                                //ficharioAluno.alterar();
                                break;
                            case  3:
                                break;
                            case 4:
                                //ficharioAluno.consultar();
                                break;
                            case 5:
                                ficharioProfessor.relatorio();
                                break;
                            default:
                                if (operacaoCadastro != 6) {
                                    System.out.println("Opção inválida.");
                                }
                        }

                    } while (operacaoCadastro != 6);
                    break;
                case 3:
                    do {
                        operacaoCadastro = menu(operacaoGeral);

                        switch (operacaoCadastro) {
                            case 1:
                                ficharioTurma.cadastrar();
                                break;
                            case 2:
                            case 3:
                            case 4:
                            case 5:
                                ficharioTurma.relatorio();
                                break;
                            default:
                                if (operacaoCadastro != 6) {
                                    System.out.println("Opção inválida.");
                                }
                        }

                    } while (operacaoCadastro != 6);
                    break;
                default:
                    if (operacaoGeral != 4) {
                        System.out.println("Opção inválida.");
                    }
            }
        } while ( operacaoGeral != 4);

    }
}
