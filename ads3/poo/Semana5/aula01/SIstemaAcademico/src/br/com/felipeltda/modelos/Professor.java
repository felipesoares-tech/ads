package br.com.felipeltda.modelos;
import java.util.Objects;

public class Professor extends Pessoa{

    private int registro;
    public Professor(String nome, String telefone, int registro, String cpf, String email){
        this.nome = nome;
        this.telefone = telefone;
        this.registro = registro;
        this.cpf = cpf;
        this.email = email;

    }
    public int getRegistro() {
        return registro;
    }

    public void setRegistro(int registro) {
        this.registro = registro;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof Professor professor)) return false;
        return getRegistro() == professor.getRegistro();
    }

    @Override
    public int hashCode() {
        return Objects.hash(getRegistro());
    }

    @Override
    public String toString() {
        return "Professor{" +
                "registro=" + registro +
                ", nome='" + nome + '\'' +
                ", cpf='" + cpf + '\'' +
                ", telefone='" + telefone + '\'' +
                ", email='" + email + '\'' +
                '}';
    }
}