package br.com.felipeltda.modelos;
import java.util.ArrayList;
import java.util.Objects;

public class Enturmacao {
    private int codigo;
    private Turma turma;
    protected ArrayList<Aluno> alunos;

    public Enturmacao(Turma turma, Aluno aluno, int codigo) {
        this.codigo = codigo;
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

    public String toString() {
        return (codigo+1)+"ª"+" Enturmacao"+"{" + "codigo="+codigo+ " turma=" + turma.getNome() + ", alunos=" + alunos+'}';
    }
    public String exibirAlunos(){
        return "turma=" + turma.getNome() + ", alunos=" + alunos+'}';
    }

    public void setTurma(Turma turma) {
        this.turma = turma;
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