package br.com.felipeltda.modelos;

public class Turma {
    private int codigo;
    private String nome;

    public Turma(String nome, int codigo){
        this.nome = nome;
        this.codigo = codigo;
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
        return "Turma{" +
                "codigo=" + codigo +
                ", nome='" + nome + '\'' +
                '}';
    }
}
