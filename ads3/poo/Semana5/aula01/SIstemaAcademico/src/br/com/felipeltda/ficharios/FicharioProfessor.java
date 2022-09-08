package br.com.felipeltda.ficharios;
import br.com.felipeltda.modelos.Professor;

import java.util.ArrayList;
import java.util.Objects;
import java.util.Scanner;


public class FicharioProfessor {
    private final ArrayList<Professor> professores;
    private final Scanner entrada;

    public FicharioProfessor(ArrayList<Professor> professores){
        this.professores = professores;
        entrada = new Scanner(System.in);
    }

    private Professor buscaRegistro(int registro){
        for (Professor professor : professores) {
            if ((professor != null) && (professor.getRegistro() == registro)) {
                return professor;
            }
        }
        return null;
    }
    private Professor buscaNome(String nome){
        for (Professor professor : professores) {
            if ((professor != null) && (Objects.equals(professor.getNome(), nome))) {
                return professor;
            }
        }
        return null;
    }
    private Professor buscaCpf(String cpf){
        for (Professor professor : professores) {
            if ((professor != null) && (Objects.equals(professor.getCpf(), cpf))) {
                return professor;
            }
        }
        return null;
    }
    private Professor busca(){
        short opcao;
        int registro;
        Professor professor =  null;
        String dado;
        System.out.println("===TIPO DE BUSCA===");
        System.out.println("[1] - Por Nome");
        System.out.println("[2] - Por Cpf");
        System.out.println("[3] - Por Registro");
        opcao = entrada.nextShort();
        entrada.skip("\n");

        switch (opcao) {
            case 1 -> {
                System.out.println("Nome: ");
                dado = entrada.nextLine();
                professor = buscaNome(dado);
            }
            case 2 -> {
                System.out.println("Cpf: ");
                dado = entrada.nextLine();
                professor = buscaCpf(dado);
            }
            case 3 -> {
                System.out.println("Registro: ");
                registro = entrada.nextInt();
                professor = buscaRegistro(registro);
            }
            default -> System.out.println("Opcao invalida!!");
        }

        return professor;
    }

    public void cadastrar(){
        String nome, telefone, cpf,email;
        int registro;

        System.out.println(" === Cadastrar PROFESSOR ==== ");
        System.out.print("Nome: ");
        nome = entrada.nextLine();
        System.out.print("Registro: ");
        registro = entrada.nextInt();
        entrada.skip("\n");
        System.out.print("Telefone: ");
        telefone = entrada.nextLine();
        System.out.print("CPF: ");
        cpf = entrada.nextLine();
        System.out.print("E-mail: ");
        email = entrada.nextLine();

        Professor professor;
        professor = new Professor(nome,telefone,registro,cpf,email);
        professores.add(professor);

    }

    public void consultar(){
        System.out.println(" === Consultar PROFESSOR ==== ");
        Professor professor = busca();
        System.out.println(professor != null ? professor : "Cadastro nao encontrado!!");
    }

    public void relatorio() {

        System.out.println("[Relatório de PROFESSORES]");
        for (Professor professor : professores) {
            if (professor != null) {
                System.out.println(professor);
            }

        }

    }
    public void excluir(){
        Professor professor;
        String nome;
        System.out.println("Informe o nome do aluno que deseja excluir: ");
        nome = entrada.nextLine();

        professor = buscaNome(nome);

        if(professor != null){
            System.out.println("Excluido");
        }

    }
    public void alterar(){
        System.out.println(" === Alterar PROFESSOR ==== ");

        short opcao;
        String dado;
        int registro;
        Professor professor = busca();

        if(professor != null){
            System.out.println(professor);
            System.out.println("Escolha o item a editar!");
            System.out.println("[1] - Registro");
            System.out.println("[2] - Nome");
            System.out.println("[3] - Cpf");
            System.out.println("[4] - Telefone");
            System.out.println("[5] - E-mail");
            opcao = entrada.nextShort();
            entrada.skip("\n");

            switch (opcao) {
                case 1 -> {
                    System.out.print("Registro: ");
                    registro = entrada.nextInt();
                    professor.setRegistro(registro);
                }
                case 2 -> {
                    System.out.print("Nome: ");
                    dado = entrada.nextLine();
                    professor.setNome(dado);
                }
                case 3 -> {
                    System.out.print("Cpf: ");
                    dado = entrada.nextLine();
                    professor.setCpf(dado);
                }
                case 4 -> {
                    System.out.print("Telefone: ");
                    dado = entrada.nextLine();
                    professor.setTelefone(dado);
                }
                case 5 -> {
                    System.out.print("E-mail: ");
                    dado = entrada.nextLine();
                    professor.setEmail(dado);
                }
            }
        }else
            System.out.println("Cadastro nao encontrado!!");

    }
}