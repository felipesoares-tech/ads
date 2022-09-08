package br.com.felipeltda.modelos;

import java.util.ArrayList;
import java.util.Objects;

public class Enturmacao {
    private int codigo;
    private Turma turma;
    protected ArrayList<Aluno> alunos;

    public Enturmacao(Turma turma, Aluno aluno) {
        this.codigo = 0;
        this.turma = turma;
        alunos = new ArrayList<>();
        this.alunos.add(aluno);
    }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public ArrayList<Aluno> getAlunos() {
        return alunos;
    }

    public void setAlunos(ArrayList<Aluno> alunos) {
        this.alunos = alunos;
    }

    public Turma getTurma() {
        return turma;
    }

    public void setTurma(Turma turma) {
        this.turma = turma;
    }

    @Override
    public String toString() {
        return "Enturmacao{" +
                "codigo=" + codigo +
                ", turma=" + turma +
                ", \nalunos=" + alunos +
                '}';
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Enturmacao enturmacao = (Enturmacao) o;
        return Objects.equals(codigo, enturmacao.codigo);
    }

    @Override
    public int hashCode() {
        return Objects.hash(codigo);
    }


}