package br.com.felipeltda.modelos;

public class Turma {
    private short codigo;
    private String nome;

    private Aluno alunos[];

    // deve ter um codigo, um nome e um vetor de alunos
    public Turma(String nome, short codigo){
        this.nome = nome;
        this.codigo = codigo;
    }

    public short getCodigo() {
        return codigo;
    }

    public void setCodigo(short codigo) {
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Aluno[] getAlunos() {
        return alunos;
    }

    public void setAlunos(Aluno[] alunos) {
        this.alunos = alunos;
    }

    @Override
    public String toString() {
        return "Turma{" +
                "codigo=" + codigo +
                ", nome='" + nome + '\'' +
                '}';
    }
}