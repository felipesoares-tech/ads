package br.com.felipeltda.ficharios;
import br.com.felipeltda.modelos.*;

import java.util.Objects;
import java.util.Scanner;

// adicionar os metodos alterar, excluir e consultar
// não permitir exclusão de alunos vinculados a turmas
public class FicharioAluno {
    private Aluno alunos[];
    private final Scanner entrada;


    public FicharioAluno(Aluno alunos[]){
        this.alunos = alunos;
        entrada = new Scanner(System.in);
    }


    private int buscaMatricula(String matricula){
        for (int i=0; i < alunos.length; i++){
            if((this.alunos[i] != null) && (Objects.equals(this.alunos[i].getMatricula(), matricula))){
                return i;
            }
        }
        return -1;
    }
    private int buscaNome(String nome){
        for (int i=0; i < alunos.length; i++){
            if((this.alunos[i] != null) && (Objects.equals(this.alunos[i].getNome(), nome))){
                return i;
            }
        }
        return -1;
    }
    private int buscaCpf(String cpf){
        for (int i=0; i < alunos.length; i++){
            if((this.alunos[i] != null) && (Objects.equals(this.alunos[i].getCpf(), cpf))){
                return i;
            }
        }
        return -1;
    }

    private int busca(){
        short opcao;
        int retornoBusca = 0;
        String dado;

        System.out.println("[1] - Por nome");
        System.out.println("[2] - Por Cpf");
        System.out.println("[3] - Por Matricula");
        opcao = entrada.nextShort();
        entrada.skip("\n");

        switch (opcao){

            case 1:
                System.out.println("Nome: ");
                dado = entrada.nextLine();
                retornoBusca = buscaNome(dado);
                break;
            case 2:
                System.out.println("Cpf: ");
                dado = entrada.nextLine();
                retornoBusca = buscaCpf(dado);
                break;
            case 3:
                System.out.println("Matricula: ");
                dado = entrada.nextLine();
                retornoBusca = buscaMatricula(dado);
                break;
        }

        return retornoBusca;
    }

    public void cadastrar(){
        String nome, telefone, matricula, cpf,email;
        int contador = 0;

        while (alunos[contador] != null){
            contador++;
        }

        if(contador < 40){
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
            alunos[contador] = aluno;
        } else {
            System.out.println("Cadastros esgotados!");
        }

    }

    public void alterar(){
        System.out.println(" === Alterar ALUNO ==== ");

        short opcao;
        String dado;
        int retornoBusca = busca();

        if(retornoBusca >=0){
            System.out.println(alunos[retornoBusca].toString());
            System.out.println("Escolha o item a editar!");
            System.out.println("[1] - Matricula");
            System.out.println("[2] - Nome");
            System.out.println("[3] - Telefone");
            System.out.println("[4] - Cpf");
            System.out.println("[5] - E-mail");
            opcao = entrada.nextShort();
            entrada.skip("\n");

            switch (opcao){
                case 1:
                    System.out.print("Matrícula: ");
                    dado = entrada.nextLine();
                    alunos[retornoBusca].setMatricula(dado);
                    break;
                case 2:
                    System.out.print("Nome: ");
                    dado = entrada.nextLine();
                    alunos[retornoBusca].setNome(dado);
                    break;
                case 3:
                    System.out.print("Telefone: ");
                    dado = entrada.nextLine();
                    alunos[retornoBusca].setTelefone(dado);
                    break;
                case 4:
                    System.out.print("Cpf: ");
                    dado = entrada.nextLine();
                    alunos[retornoBusca].setCpf(dado);
                    break;
                case 5:
                    System.out.print("E-mail: ");
                    dado = entrada.nextLine();
                    alunos[retornoBusca].setEmail(dado);
                    break;
            }
        }else
            System.out.println("Cadastro nao encontrado!!");

    }
    public void relatorio() {

        System.out.println("[Relatório de ALUNOS]");
        for (int j = 0; j < alunos.length; j++) {
            if (alunos[j] != null) {
                System.out.println(alunos[j].toString());
                System.out.println("---------------------");
            }

        }

    }

}
