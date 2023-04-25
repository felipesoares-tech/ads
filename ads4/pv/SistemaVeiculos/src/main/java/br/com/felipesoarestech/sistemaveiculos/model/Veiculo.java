package br.com.felipesoarestech.sistemaveiculos.model;

import java.util.Objects;

public class Veiculo {

    private String placa;
    private String cor;
    private String modelo;
    private Integer ano;
    private Double valor;

    public Veiculo(String placa, String cor, String modelo, Integer ano, Double valor) {
        this.placa = placa.toUpperCase();
        this.cor = cor;
        this.modelo = modelo;
        this.ano = ano;
        this.valor = valor;
    }

    public Veiculo(String placa) {
        this.placa = placa;

    }

    public String getPlaca() {
        return placa;
    }

    public void setPlaca(String placa) {
        this.placa = placa;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public Integer getAno() {
        return ano;
    }

    public void setAno(Integer ano) {
        this.ano = ano;
    }

    public Double getValor() {
        return valor;
    }

    public void setValor(Double valor) {
        this.valor = valor;
    }

    @Override
    public String toString() {
        return "Veiculo{" + "placa=" + placa + ", cor=" + cor + ", modelo=" + modelo + ", ano=" + ano + ", valor=" + valor + '}';
    }

    @Override
    public int hashCode() {
        int hash = 7;
        hash = 83 * hash + Objects.hashCode(this.placa);
        return hash;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null) {
            return false;
        }
        if (getClass() != obj.getClass()) {
            return false;
        }
        final Veiculo other = (Veiculo) obj;
        return Objects.equals(this.placa, other.placa);
    }

}
