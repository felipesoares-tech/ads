package br.com.felipeltda.modelos;

import java.util.ArrayList;

public class Turma {
    private static int geradorCodigo;
    private int codigo;
    private String nome;

    private final ArrayList<Aluno> alunos;

    public ArrayList<Aluno> getAlunos() {
        return alunos;
    }

    public Turma(String nome){
        this.nome = nome;
        this.codigo = ++geradorCodigo;
        alunos = new ArrayList<>();
    }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }


    @Override
    public String toString() {
        return "nome="+nome+" codigo="+codigo;
    }
}