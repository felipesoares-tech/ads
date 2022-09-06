import br.com.felipeltda.modelos.*;
import br.com.felipeltda.ficharios.*;
import java.util.Scanner;

public class Main {
    public static int menu(int operacaoGeral){
        String[] vet = {"Aluno","Professor","Turma"};
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
    public static void subMenu(FicharioAluno a, FicharioProfessor b, FicharioTurma c, int tipo){
        int operacao;
        do {
            operacao = menu(tipo);

            switch (operacao) {
                case 1:
                    if(tipo == 1)
                        a.cadastrar();
                    else if (tipo == 2)
                        b.cadastrar();
                    else if(tipo == 3)
                        c.cadastrar();
                    break;
                case 2:
                    if(tipo == 1)
                        a.alterar();
                    else if (tipo == 2)
                        b.alterar();
                    else if(tipo == 3)
                        c.alterar();
                    break;
                case  3:
                    /*if(tipo == 1)
                        a.excluir();
                    else if (tipo == 2)
                        b.excluir();
                    else if(tipo == 3)
                        c.excluir();*/
                    break;
                case 4:
                    if(tipo == 1)
                        a.consultar();
                    else if (tipo == 2)
                        b.consultar();
                    else if(tipo == 3)
                        c.consultar();
                    break;
                case 5:
                    if(tipo == 1)
                        a.relatorio();
                    else if (tipo == 2)
                        b.relatorio();
                    else if(tipo == 3)
                        c.relatorio();
                    break;
                default:
                    if (operacao != 6) {
                        System.out.println("Opção inválida.");
                    }
            }
        } while (operacao != 6);

    }
    public static void main(String[] args){
        int opcao;
        Scanner entrada = new Scanner(System.in);
        Aluno[] alunos = new Aluno[40];
        Turma[] turmas = new Turma[3];
        Professor[] professores = new Professor[10];

        FicharioAluno ficharioAluno = new FicharioAluno(alunos);
        FicharioProfessor ficharioProfessor = new FicharioProfessor(professores);
        FicharioTurma ficharioTurma = new FicharioTurma(turmas);

        do {
            System.out.println(" === SISTEMA-ESCOLAR === ");
            System.out.println("1 - Aluno ");
            System.out.println("2 - Professor ");
            System.out.println("3 - Turmas ");
            System.out.println("4 - Sair ");
            opcao = entrada.nextInt();
            entrada.skip("\n");

            switch (opcao) {
                case 1, 2, 3 -> subMenu(ficharioAluno, ficharioProfessor, ficharioTurma, opcao);
                default -> {
                    if (opcao != 4) {
                        System.out.println("Opção inválida.");
                    }
                }
            }
        } while (opcao != 4);
    }
}
