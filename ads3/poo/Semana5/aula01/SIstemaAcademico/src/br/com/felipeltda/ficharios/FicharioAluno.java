package br.com.felipeltda.ficharios;
import br.com.felipeltda.modelos.Aluno;

import java.util.ArrayList;
import java.util.Objects;
import java.util.Scanner;

public class FicharioAluno {
    private final ArrayList<Aluno> alunos;
    private final Scanner entrada;
    private final FicharioEnturmacao ficharioEnturmacao;

    public FicharioAluno(ArrayList<Aluno> alunos,FicharioEnturmacao ficharioEnturmacao ){
        this.alunos = alunos;
        entrada = new Scanner(System.in);
        this.ficharioEnturmacao = ficharioEnturmacao;
    }

    private Aluno buscaMatricula(String matricula){
        for (Aluno aluno : alunos) {
            if ((aluno != null) && (Objects.equals(aluno.getMatricula(), matricula))) {
                return aluno;
            }
        }
        return null;
    }
    private Aluno buscaNome(String nome){
        for (Aluno aluno : alunos) {
            if ((aluno != null) && (Objects.equals(aluno.getNome(), nome))) {
                return aluno;
            }
        }
        return null;
    }
    private Aluno buscaCpf(String cpf){
        for (Aluno aluno : alunos) {
            if ((aluno != null) && (Objects.equals(aluno.getCpf(), cpf))) {
                return aluno;
            }
        }
        return null;
    }

    private Aluno busca(){
        short opcao;
        Aluno aluno =  null;
        String dado;
        System.out.println("===TIPO DE BUSCA===");
        System.out.println("[1] - Por Nome");
        System.out.println("[2] - Por Cpf");
        System.out.println("[3] - Por Matricula");
        opcao = entrada.nextShort();
        entrada.skip("\n");

        switch (opcao) {
            case 1 -> {
                System.out.print("Nome: ");
                dado = entrada.nextLine();
                aluno = buscaNome(dado);
            }
            case 2 -> {
                System.out.print("Cpf: ");
                dado = entrada.nextLine();
                aluno = buscaCpf(dado);
            }
            case 3 -> {
                System.out.print("Matricula: ");
                dado = entrada.nextLine();
                aluno = buscaMatricula(dado);
            }
            default -> System.out.println("Opcao invalida!!");
        }
        return aluno;
    }

    private void exibirEnturmacao(int i){
        System.out.println("O Aluno informado encontra-se na enturmacao abaixo!!");
        System.out.println(ficharioEnturmacao.exbirDadosEnturmacao(i));
    }

    public void consultar(){
        System.out.println(" === Consultar ALUNO ==== ");
        Aluno aluno = busca();
        System.out.println(aluno != null ? aluno.exibirDados() : "Cadastro nao encontrado!!");
    }
    public void desvincular(){
        System.out.println(" --==[Desvincular Aluno]==-- ");
        System.out.println("Digite o nome do aluno: ");
        String nomeAluno = entrada.nextLine();

        if(ficharioEnturmacao.alunoExiste(nomeAluno)){
            Aluno aluno = buscaNome(nomeAluno);
            if(ficharioEnturmacao.alunoVinculado(aluno)){
                int posicao = ficharioEnturmacao.buscaPosicaoAlunoEnturmacao(aluno);
                exibirEnturmacao(posicao);
                System.out.println("Tem certeza que deseja desvincular o aluno? (1-sim) e (2-não) ");
                int resp = Integer.parseInt(entrada.nextLine());

                if(resp == 1){
                    ficharioEnturmacao.removerAlunoEnturmacao(aluno,posicao);
                    System.out.println("Aluno desvinculado com sucesso!");
                }else
                    System.out.println("Operacao cancelada!");
            }else
                System.out.println("Aluno ja esta desvinculado!");

        }else
            System.out.println("Aluno inexistente!!");

    }

    public void excluir(){
        Aluno aluno;
        String nome;
        System.out.println(alunos);
        System.out.println("Informe o nome do aluno que deseja excluir: ");
        nome = entrada.nextLine();
        aluno = buscaNome(nome);

        if(aluno == null){
            throw new RuntimeException("Aluno inexistente!");
        }

        try{
            if(ficharioEnturmacao.alunoVinculado(aluno)){
                System.out.println("Nao foi possivel excluir o aluno em questao, pois o mesmo esta vinculado a uma turma");
            }else{
                int resposta;
                System.out.println("Confirma a exclusão? (1-sim) e (2-não) ");
                resposta = Integer.parseInt(entrada.nextLine());
                if(resposta == 1){
                    alunos.remove(aluno);
                    System.out.println("Exclusão efetuada com sucesso!");
                    return;
                }
                System.out.println("Exclusão não efetuada.");
            }
        }catch (RuntimeException e){
            System.out.println(e.getMessage());
        }

    }

    public void cadastrar(){
        String nome, telefone, matricula, cpf,email;

        System.out.println(" === Cadastrar ALUNO ==== ");
        System.out.print("Nome: ");
        nome = entrada.nextLine();
        System.out.print("Matrícula: ");
        matricula = entrada.nextLine();
        System.out.print("Telefone: ");
        telefone = entrada.nextLine();
        System.out.print("CPF: ");
        cpf = entrada.nextLine();
        System.out.print("E-mail: ");
        email = entrada.nextLine();

        Aluno aluno;
        aluno = new Aluno(nome,telefone,matricula,cpf,email);
        if(!alunos.contains(aluno)){
            alunos.add(aluno);
            return;
        }
        System.out.println("Aluno ja cadastrado!");

    }

    public void alterar(){
        System.out.println(" === Alterar ALUNO ==== ");

        short opcao;
        String dado;
        Aluno aluno = busca();

        if(aluno != null){
            System.out.println(aluno.exibirDados());
            System.out.println("Escolha o item a editar!");
            System.out.println("[1] - Matricula");
            System.out.println("[2] - Nome");
            System.out.println("[3] - Cpf");
            System.out.println("[4] - Telefone");
            System.out.println("[5] - E-mail");
            opcao = entrada.nextShort();
            entrada.skip("\n");

            switch (opcao) {
                case 1 -> {
                    System.out.print("Matrícula: ");
                    dado = entrada.nextLine();
                    aluno.setMatricula(dado);
                }
                case 2 -> {
                    System.out.print("Nome: ");
                    dado = entrada.nextLine();
                    aluno.setNome(dado);
                }
                case 3 -> {
                    System.out.print("Cpf: ");
                    dado = entrada.nextLine();
                    aluno.setCpf(dado);
                }
                case 4 -> {
                    System.out.print("Telefone: ");
                    dado = entrada.nextLine();
                    aluno.setTelefone(dado);
                }
                case 5 -> {
                    System.out.print("E-mail: ");
                    dado = entrada.nextLine();
                    aluno.setEmail(dado);
                }
            }
        }else
            System.out.println("Cadastro nao encontrado!!");

    }
    public void relatorio() {
        System.out.println("[Relatório de ALUNOS]");
        System.out.println(alunos);
    }
}