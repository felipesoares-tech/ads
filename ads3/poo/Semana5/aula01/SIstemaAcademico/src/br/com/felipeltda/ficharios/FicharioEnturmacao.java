package br.com.felipeltda.ficharios;
import br.com.felipeltda.modelos.*;

import java.util.ArrayList;
import java.util.Objects;
import  java.util.Scanner;

public class FicharioEnturmacao {
    private final ArrayList<Turma> turmas;
    private final ArrayList<Aluno> alunos;
    private final ArrayList<Enturmacao> enturmacoes;
    private final Scanner entrada;

    public FicharioEnturmacao(ArrayList<Enturmacao> enturmacoes,ArrayList<Turma> turmas, ArrayList<Aluno> alunos){
        this.turmas = turmas;
        this.alunos = alunos;
        this.enturmacoes = enturmacoes;
        entrada = new Scanner(System.in);
    }

    private Turma buscaNomeTurma(String nome){
        for (Turma turma : turmas) {
            if ((turma != null) && (Objects.equals(turma.getNome(), nome))) {
                return turma;
            }
        }
        return null;
    }

    private Aluno buscaNomeAluno(String nome){
        for (Aluno aluno : alunos) {
            if ((aluno != null) && (Objects.equals(aluno.getNome(), nome))) {
                return aluno;
            }
        }
        return null;
    }

    public int verificarEnturmacoes(String nomeTurma){
        for (int i =0; i<enturmacoes.size(); i++){
            if(Objects.equals(enturmacoes.get(i).getTurma().getNome(), nomeTurma)){
                return i;
            }
        }
        return -1;
    }

    public void cadastrar() {
        String nomeTurma, nomeAluno;
        int ind;

        Turma turma;
        Aluno aluno;

        System.out.println(" === Cadastrar ENTURMAÇÃO === ");

        System.out.println("Nome da turma: ");
        nomeTurma = entrada.nextLine();

        System.out.println("Nome do aluno: ");
        nomeAluno = entrada.nextLine();

        turma = buscaNomeTurma(nomeTurma);
        aluno = buscaNomeAluno(nomeAluno);

        if(turma != null && aluno != null){
            ind = verificarEnturmacoes(nomeTurma);
            if(ind == -1){
                Enturmacao enturmacao = new Enturmacao(turma,aluno);
                enturmacoes.add(enturmacao);
            }else
                enturmacoes.get(ind).getAlunos().add(aluno);

            System.out.println("Enturmação realizada com sucesso!");
        }else
            System.out.println("Nome da turma ou aluno inexistente!");
    }

    public void excluir() {
        int pos, resp;

        System.out.println(" --==[Excluir Enturmação]==-- ");
        System.out.println("Qual a posição do vetor deseja excluir? ");
        pos = entrada.nextInt();
        entrada.skip("\n");

        if (enturmacoes.get(pos) != null) {
            System.out.println(enturmacoes.get(pos));
            System.out.println("Confirma a exclusão? (1-sim) e (2-não) ");
            resp = entrada.nextInt();
            entrada.skip("\n");

            if (resp == 1) {
                enturmacoes.remove(pos); // exclui um objeto do vetor
                System.out.println(" Exclusão efetuada com sucesso. ");

            } else {
                System.out.println(" Exclusão não efetuada. ");
            }
        } else {
            System.out.println(" Posição inválida. ");
        }
    }

    public void consultar() {
        int pos;

        System.out.println(" --==[Consultar Enturmação]==-- ");
        System.out.println("Qual a posição do vetor deseja consultar? ");
        pos = entrada.nextInt();
        entrada.skip("\n");

        // TODO:testa se existe uma enturmação na posição escolhida pelo usuário
        if (enturmacoes.get(pos) != null) {
            System.out.println(enturmacoes.get(pos));
        } else {
            System.out.println(" Posição inválida. ");
        }
    }


    public ArrayList<Enturmacao> getEnturmacoes() {
        return enturmacoes;
    }

    public void relatorio() {

        System.out.println("[Relatório de ENTURMACOES]");

        for(Enturmacao enturmacao: enturmacoes){
            System.out.println(enturmacao.toString());
            System.out.println("---------------------");
        }

    }


}