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

    private int buscarTurmaArray(Turma turma){
        for (int i=0; i <enturmacoes.size(); i++){
            if(enturmacoes.get(i).getTurma() == turma)
                return i;
        }
        return -1;
    }
    private Enturmacao buscaCodigo(int codigo){
        for (Enturmacao enturmacao : enturmacoes) {
            if ((enturmacao != null) && (codigo == enturmacao.getCodigo())) {
                return enturmacao;
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

    private boolean turmaEnturmada(Turma turma){
        for (Enturmacao enturmacao : enturmacoes) {
            if (enturmacao.getTurma() == turma) {
                return true;
            }
        }
        return false;
    }
    private boolean alunoEnturmado(Aluno aluno){
        for (Enturmacao enturmacao : enturmacoes) {
            if (enturmacao.getAlunos().contains(aluno)) {
                return true;
            }
        }
        return false;
    }

    public void cadastrar() {
        String nomeTurma, nomeAluno;

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

            if(!turmaEnturmada(turma) && !alunoEnturmado(aluno)){
                Enturmacao enturmacao = new Enturmacao(turma,aluno);
                enturmacoes.add(enturmacao);
                System.out.println("Enturmação realizada com sucesso!");
            }else{
                if(!alunoEnturmado(aluno)){
                    enturmacoes.get(buscarTurmaArray(turma)).getAlunos().add(aluno);
                    System.out.println("Enturmação realizada com sucesso!");
                }
                    System.out.println("Aluno ja enturmado!!!");
            }

        }else
            System.out.println("Nome da turma ou aluno inexistente!");
    }

    public void excluir() {
        int resposta;
        Enturmacao enturmacao;

        System.out.println(" --==[Excluir Enturmação]==-- ");
        System.out.println("Informe o codigo da enturmação a qual deseja excluir: ");
        resposta = entrada.nextInt();

        enturmacao = buscaCodigo(resposta);

        if (enturmacao != null) {
            System.out.println("Confirma a exclusão? (1-sim) e (2-não) ");
            resposta = entrada.nextInt();

            if (resposta == 1) {
                enturmacoes.remove(enturmacao);
                System.out.println(" Exclusão efetuada com sucesso. ");

            } else {
                System.out.println(" Exclusão não efetuada. ");
            }
        } else {
            System.out.println(" Enturmacao nao encontrada!!");
        }
    }

    public void consultar() {
        int pos;

        System.out.println(" --==[Consultar Enturmação]==-- ");
        System.out.println("Qual a posição do vetor deseja consultar? ");
        pos = entrada.nextInt();
        entrada.skip("\n");

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
            System.out.println(enturmacao);
            System.out.println("---------------------");
        }

    }


}