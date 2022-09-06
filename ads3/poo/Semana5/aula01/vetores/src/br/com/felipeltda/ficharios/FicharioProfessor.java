package br.com.felipeltda.ficharios;

import br.com.felipeltda.modelos.Professor;

import java.util.Objects;
import java.util.Scanner;


public class FicharioProfessor {
    private final Professor[] professores;
    private final Scanner entrada;

    public FicharioProfessor(Professor[] professores){
        this.professores = professores;
        entrada = new Scanner(System.in);
    }

    private int buscaRegistro(int registro){
        for (int i=0; i < professores.length; i++){
            if((this.professores[i] != null) && (registro == this.professores[i].getRegistro())){
                return i;
            }
        }
        return -1;
    }
    private int buscaNome(String nome){
        for (int i=0; i < professores.length; i++){
            if((this.professores[i] != null) && (Objects.equals(this.professores[i].getNome(), nome))){
                return i;
            }
        }
        return -1;
    }
    private int busca(){
        short opcao;
        int retornoBusca,registro;
        String dado;

        System.out.println("[1] - Por Nome");
        System.out.println("[2] - Por Registro");
        opcao = entrada.nextShort();
        entrada.skip("\n");

        switch (opcao) {
            case 1 -> {
                System.out.println("Nome: ");
                dado = entrada.nextLine();
                retornoBusca = buscaNome(dado);
            }
            case 2 -> {
                System.out.println("Registro: ");
                registro = entrada.nextInt();
                retornoBusca = buscaRegistro(registro);
            }
            default -> retornoBusca = -1;
        }

        return retornoBusca;
    }

    public void cadastrar(){
        String nome, telefone, cpf,email;
        int contador = 0,registro;

        while (professores[contador] != null){
            contador++;
        }

        if(contador < 40){
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
            professores[contador] = professor;
        } else {
            System.out.println("Cadastros esgotados!");
        }

    }

    public void consultar(){
        System.out.println(" === Consultar PROFESSOR ==== ");
        int retornoBusca = busca();
        System.out.println(retornoBusca >= 0 ? professores[retornoBusca].toString() : "Cadastro nao encontrado!!");
    }

    public void relatorio() {

        System.out.println("[Relatório de PROFESSORES]");
        for (int j = 0; j < professores.length; j++) {
            if (professores[j] != null) {
                System.out.println(professores[j]);
            }

        }

    }
    public void alterar(){
        System.out.println(" === Alterar PROFESSOR ==== ");

        short opcao;
        String dado;
        int retornoBusca = busca(),registro;

        if(retornoBusca >=0){
            System.out.println(professores[retornoBusca].toString());
            System.out.println("Escolha o item a editar!");
            System.out.println("[1] - Registro");
            System.out.println("[2] - Nome");
            System.out.println("[3] - Telefone");
            System.out.println("[4] - Cpf");
            System.out.println("[5] - E-mail");
            opcao = entrada.nextShort();
            entrada.skip("\n");

            switch (opcao) {
                case 1 -> {
                    System.out.print("Registro: ");
                    registro = entrada.nextInt();
                    professores[retornoBusca].setRegistro(registro);
                }
                case 2 -> {
                    System.out.print("Nome: ");
                    dado = entrada.nextLine();
                    professores[retornoBusca].setNome(dado);
                }
                case 3 -> {
                    System.out.print("Telefone: ");
                    dado = entrada.nextLine();
                    professores[retornoBusca].setTelefone(dado);
                }
                case 4 -> {
                    System.out.print("Cpf: ");
                    dado = entrada.nextLine();
                    professores[retornoBusca].setCpf(dado);
                }
                case 5 -> {
                    System.out.print("E-mail: ");
                    dado = entrada.nextLine();
                    professores[retornoBusca].setEmail(dado);
                }
            }
        }else
            System.out.println("Cadastro nao encontrado!!");

    }
}
