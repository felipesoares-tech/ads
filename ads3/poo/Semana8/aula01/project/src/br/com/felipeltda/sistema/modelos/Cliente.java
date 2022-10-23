package br.com.felipeltda.sistema.modelos;

import java.util.Objects;

public class Cliente {
    private String nome;
    private String telefone;
    private String cpf;

    public Cliente(String nome, String cpf, String telefone){
        this.nome = nome;
        this.cpf = cpf;
        this.telefone = telefone;
    }

    public Cliente(String cpf){
        this.cpf = cpf;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof Cliente cliente)) return false;
        return Objects.equals(getCpf(), cliente.getCpf());
    }

    @Override
    public int hashCode() {
        return Objects.hash(getCpf());
    }
}
