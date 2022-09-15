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
    private int geradorCodigo(){
        int qtdEnturmacoes = enturmacoes.size();
        int codigo = 0;
        codigo += qtdEnturmacoes;
        return codigo;
    }

    protected int buscaPosicaoAlunoEnturmacao(Aluno aluno){
        for(int i=0; i<enturmacoes.size(); i++){
            if(enturmacoes.get(i).getAlunos().contains(aluno))
                return  i;
        }
        return -1;
    }

    protected String exbirDadosEnturmacao(int i){
        return enturmacoes.get(i).toString();
    }

    private Turma buscaNomeTurma(String nome){
        for (Turma turma : turmas) {
            if ((turma != null) && (Objects.equals(turma.getNome(), nome))) {
                return turma;
            }
        }
        return null;
    }

    private int buscaPosicaoTurmaArray(Turma turma){
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

    protected Aluno buscaNomeAluno(String nome){
        for (Aluno aluno : alunos) {
            if ((aluno != null) && (Objects.equals(aluno.getNome(), nome))) {
                return aluno;
            }
        }
        return null;
    }

    protected boolean turmaVinculada(Turma turma){
        for (Enturmacao enturmacao : enturmacoes) {
            if (enturmacao.getTurma() == turma) {
                return true;
            }
        }
        return false;
    }
    protected boolean alunoVinculado(Aluno aluno){
        for (Enturmacao enturmacao : enturmacoes) {
            if (enturmacao.getAlunos().contains(aluno)) {
                return true;
            }
        }
        return false;
    }
    protected int buscaCodigoEnturmacao(int codigo){
        for (int i=0; i<enturmacoes.size(); i++) {
            if (enturmacoes.get(i).getCodigo() == codigo)
                return i;
        }
        return -1;
    }
    protected boolean turmaExiste(String nomeTurma){
        Turma turma = buscaNomeTurma(nomeTurma);
        return turma != null;
    }
    protected boolean alunoExiste(String nomeAluno){
        Aluno aluno = buscaNomeAluno(nomeAluno);
        return aluno != null;
    }

    protected void removerAlunoEnturmacao(Aluno aluno,int posicao){
        enturmacoes.get(posicao).getAlunos().remove(aluno);
    }

    private String escolherNome(){
        String novoNome;
        System.out.print("Informe um novo nome: ");
        novoNome = entrada.nextLine();
        return novoNome;
    }
    public void cadastrar() {
        System.out.println(" === Cadastrar ENTURMAÇÃO === ");

        System.out.println("Nome da turma: ");
        String nomeTurma = entrada.nextLine();

        System.out.println("Nome do aluno: ");
        String nomeAluno = entrada.nextLine();

        Turma turma = buscaNomeTurma(nomeTurma);
        Aluno aluno = buscaNomeAluno(nomeAluno);

        if(turma != null && aluno != null){
            if(!turmaVinculada(turma) && !alunoVinculado(aluno)){
                Enturmacao enturmacao = new Enturmacao(turma,aluno,geradorCodigo());
                enturmacoes.add(enturmacao);
                System.out.println("Enturmação realizada com sucesso!");
            }else{
                if(!alunoVinculado(aluno) && turmaVinculada(turma)){
                    enturmacoes.get(buscaPosicaoTurmaArray(turma)).getAlunos().add(aluno);
                    System.out.println("Enturmação realizada com sucesso!");
                }else
                    System.out.println("Aluno já enturmado!!");
            }
        }else
            System.out.println("Nome da turma ou aluno inexistente!");
    }
    public void excluir() {
        System.out.println(" --==[Excluir Enturmação]==-- ");
        System.out.println(enturmacoes);
        System.out.println("Informe o codigo da enturmação a qual deseja excluir: ");
        int resp = entrada.nextInt();

        Enturmacao enturmacao = buscaCodigo(resp);
        if (enturmacao != null) {
            System.out.println("Confirma a exclusão? (1-sim) e (2-não) ");
            resp = entrada.nextInt();

            if (resp == 1) {
                enturmacoes.remove(enturmacao);
                System.out.println(" Exclusão efetuada com sucesso. ");
            } else
                System.out.println(" Exclusão não efetuada. ");
        } else
            System.out.println(" Enturmacao nao encontrada!!");
    }
    public void consultar() {
        System.out.println(" --==[Consultar Enturmação]==-- ");
        System.out.println("Qual turma deseja consultar ? ");
        String nomeTurma = entrada.nextLine();

        Turma turma = buscaNomeTurma(nomeTurma);

        if (turma != null){
            int posicao = buscaPosicaoTurmaArray(turma);
            if(posicao != -1)
                System.out.println(enturmacoes.get(posicao).exibirAlunos());
            else
                System.out.println("Turma ainda nao foi enturmada!");
        }else
            System.out.println("turma inexistente!");

    }
    protected ArrayList<Enturmacao> getEnturmacoes() {
        return enturmacoes;
    }
    public void relatorio() {
        System.out.println("[Relatório de ENTURMACOES]\n");
        for (Enturmacao enturmacao : enturmacoes) {
            System.out.println(enturmacao.toString());
        }
    }
    public void alterar(){
        System.out.println(" === Alterar ENTURMACAO ==== ");
        System.out.println(enturmacoes);

        System.out.println("Informe o codigo da enturmacao a qual deseja modificar: ");
        int codigo = entrada.nextInt();
        int posicaoTurmaAtual = buscaCodigoEnturmacao(codigo);

        if(posicaoTurmaAtual != -1){
            System.out.println("Escolha o item a editar!");
            System.out.println("[1] - Turma");
            System.out.println("[2] - Alunos");
            short opcaoMenu = entrada.nextShort();
            entrada.skip("\n");

            switch (opcaoMenu) {
                case 1 -> {
                    String novoNomeTurma = escolherNome();
                    if(turmaExiste(novoNomeTurma)){
                        Turma novaTurma = buscaNomeTurma(novoNomeTurma);
                        if(!turmaVinculada(novaTurma))
                            enturmacoes.get(posicaoTurmaAtual).setTurma(novaTurma);
                        else
                            System.out.println("Esta turma ja esta enturmada, necessario desenturma-la antes!");
                    }else
                        System.out.println("Turma inexistente!");
                }
                case 2 ->{
                    System.out.println(enturmacoes.get(posicaoTurmaAtual).exibirAlunos());
                    System.out.print("Informe o nome do aluno o qual deseja substituir: ");
                    String nomeAlunoAtual = entrada.nextLine();

                    if(alunoExiste(nomeAlunoAtual)){
                        Aluno alunoAtual = buscaNomeAluno(nomeAlunoAtual);
                        if(enturmacoes.get(posicaoTurmaAtual).getAlunos().contains(alunoAtual)){
                            String novoNomeAluno = escolherNome();
                            if(alunoExiste(novoNomeAluno)){
                                Aluno novoAluno = buscaNomeAluno(novoNomeAluno);
                                if(!alunoVinculado(novoAluno)){
                                    int posicaoAlunoAtual = enturmacoes.get(posicaoTurmaAtual).getAlunos().indexOf(alunoAtual);
                                    enturmacoes.get(posicaoTurmaAtual).getAlunos().set(posicaoAlunoAtual,novoAluno);
                                }else
                                    System.out.println("Aluno informado ja esta vinculado a uma turma");
                            }
                        }else
                            System.out.println("Aluno informado nao esta nesta enturmacao");
                    }else
                        System.out.println("Aluno inexistente!!");
                }
            }
        }else
            System.out.println("Codigo inexistente!");
    }
}