package br.com.felipeltda.ficharios;

import br.com.felipeltda.modelos.Turma;

import java.util.Objects;
import java.util.Scanner;

public class FicharioTurma {
    private Turma turmas[];

    public FicharioTurma(Turma turmas[]){
        this.turmas = turmas;
    }

    private int busca(){
        short opcao;
        int retornoBusca;
        String nome;
        short codigo;
        Scanner entrada = new Scanner(System.in);

        System.out.println("[1] - Por Nome");
        System.out.println("[2] - Por Codigo");
        opcao = entrada.nextShort();
        entrada.skip("\n");

        switch (opcao) {
            case 1 -> {
                System.out.println("Nome: ");
                nome = entrada.nextLine();
                retornoBusca = buscaNome(nome);
            }
            case 2 -> {
                System.out.println("Codigo: ");
                codigo = entrada.nextShort();
                retornoBusca = buscaCodigo(codigo);
            }
            default -> retornoBusca = -1;
        }

        return retornoBusca;
    }

    private int buscaNome(String nome){
        for (int i=0; i < turmas.length; i++){
            if((this.turmas[i] != null) && (Objects.equals(this.turmas[i].getNome(), nome))){
                return i;
            }
        }
        return -1;
    }
    private int buscaCodigo(short codigo){
        for (int i=0; i < turmas.length; i++){
            if((this.turmas[i] != null) && (turmas[i].getCodigo() == codigo)){
                return i;
            }
        }
        return -1;
    }
    public void consultar(){
        System.out.println(" === Consultar TURMA ==== ");
        int retornoBusca = busca();
        System.out.println(retornoBusca >= 0 ? turmas[retornoBusca].toString() : "Cadastro nao encontrado!!");
    }

    public void relatorio() {

        System.out.println("[Relatório de TURMAS]");
        for (int j = 0; j < turmas.length; j++) {
            if (turmas[j] != null) {
                System.out.println(turmas[j].toString());
                System.out.println("---------------------");
            }

        }

    }

    public void cadastrar(){
        String nome;
        short codigo;
        int contador = 0;
        Scanner entrada = new Scanner(System.in);

        while (turmas[contador] != null){
            contador++;
        }

        if(contador < 3){
            System.out.println(" === Cadastrar TURMA ==== ");
            System.out.print("Nome: ");
            nome = entrada.nextLine();
            System.out.print("Codigo: ");
            codigo = entrada.nextShort();

            Turma turma;
            turma = new Turma(nome,codigo);
            turmas[contador] = turma;
        } else {
            System.out.println("Cadastros esgotados!");
        }
    }
}
