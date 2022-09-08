package br.com.felipeltda.modelos;

public class Aluno extends Pessoa{
    private String matricula;

    public Aluno(String nome,String telefone,String matricula, String cpf,String email){
        this.telefone = telefone;
        this.nome = nome;
        this.matricula = matricula;
        this.cpf = cpf;
        this.email = email;

    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

    public String getMatricula() {
        return matricula;
    }

    @Override
    public String toString() {
        return "\nmatricula='" + matricula + '\'' +
                ", nome='" + nome + '\'' +
                ", cpf='" + cpf + '\'' +
                ", telefone='" + telefone + '\'' +
                ", email='" + email + '\'';
    }
}
