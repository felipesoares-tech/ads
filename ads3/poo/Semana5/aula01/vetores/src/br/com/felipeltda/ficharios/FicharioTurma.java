package br.com.felipeltda.ficharios;
import br.com.felipeltda.modelos.Turma;

import java.util.ArrayList;
import java.util.Objects;
import java.util.Scanner;

public class FicharioTurma {
    private final ArrayList<Turma> turmas;
    private final Scanner entrada;

    public FicharioTurma(ArrayList<Turma> turmas){
        this.turmas = turmas;
        entrada = new Scanner(System.in);
    }

    private Turma busca(){
        short opcao;
        Turma turma = null;
        String nome;
        int codigo;
        Scanner entrada = new Scanner(System.in);

        System.out.println("[1] - Por Nome");
        System.out.println("[2] - Por Codigo");
        opcao = entrada.nextShort();
        entrada.skip("\n");

        switch (opcao) {
            case 1 -> {
                System.out.println("Nome: ");
                nome = entrada.nextLine();
                turma = buscaNome(nome);
            }
            case 2 -> {
                System.out.println("Codigo: ");
                codigo = entrada.nextShort();
                turma = buscaCodigo(codigo);
            }
            default -> System.out.println("Opcao invalida!!");
        }

        return turma;
    }

    private Turma buscaNome(String nome){
        for (Turma turma : turmas) {
            if ((turma != null) && (Objects.equals(turma.getNome(), nome))) {
                return turma;
            }
        }
        return null;
    }
    private Turma buscaCodigo(int codigo){
        for (Turma turma : turmas) {
            if ((turma != null) && (turma.getCodigo() == codigo)) {
                return turma;
            }
        }
        return null;
    }
    public void consultar(){
        System.out.println(" === Consultar TURMAS ==== ");
        Turma turma = busca();
        System.out.println(turma != null ? turma : "Cadastro nao encontrado!!");
    }

    public void relatorio() {
        System.out.println("[Relatório de TURMAS]");
        for (Turma turma : turmas) {
            if (turma != null) {
                System.out.println(turma);
            }
        }
    }

    public void cadastrar(){
        String nomeTurma;
        int codigo;
        Scanner entrada = new Scanner(System.in);

        System.out.println(" === Cadastrar TURMA ==== ");
        System.out.print("Nome: ");
        nomeTurma = entrada.nextLine();
        System.out.print("Codigo: ");
        codigo = entrada.nextInt();

        Turma turma;
        turma = new Turma(nomeTurma,codigo);
        turmas.add(turma);

    }
    public void excluir(){
        Turma turma;
        String nome;
        System.out.println("Informe o nome da turma que deseja excluir: ");
        nome = entrada.nextLine();

        turma = buscaNome(nome);

        if(turma != null){
            System.out.println("Excluido");
        }
    }

    public void alterar(){
        System.out.println(" === Alterar TURMAS ==== ");

        short opcao;
        String dado;
        int codigo;
        Turma turma = busca();

        if(turma != null){
            System.out.println(turma);
            System.out.println("Escolha o item a editar!");
            System.out.println("[1] - Código");
            System.out.println("[2] - Nome");

            opcao = entrada.nextShort();
            entrada.skip("\n");

            switch (opcao) {
                case 1 -> {
                    System.out.print("Codigo: ");
                    codigo = entrada.nextInt();
                    turma.setCodigo(codigo);
                }
                case 2 -> {
                    System.out.print("Nome: ");
                    dado = entrada.nextLine();
                    turma.setNome(dado);
                }
            }
        }else
            System.out.println("Cadastro nao encontrado!!");

    }
}
