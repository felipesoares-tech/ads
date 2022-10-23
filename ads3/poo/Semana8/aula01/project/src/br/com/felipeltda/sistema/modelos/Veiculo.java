package br.com.felipeltda.sistema.modelos;

import java.util.Objects;

public abstract class Veiculo {
    protected String marca;
    protected String modelo;
    protected Integer anoFabricacao;
    protected Integer anoModelo;
    protected Double preco;
    protected String placa;

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof Veiculo veiculo)) return false;
        return Objects.equals(getPlaca(), veiculo.getPlaca());
    }

    @Override
    public int hashCode() {
        return Objects.hash(getPlaca());
    }

    public String getPlaca() {
        return placa;
    }

    public String getMarca() {
        return marca;
    }
    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public Integer getAnoFabricacao() {
        return anoFabricacao;
    }

    public void setAnoFabricacao(Integer anoFabricacao) {
        this.anoFabricacao = anoFabricacao;
    }

    public Integer getAnoModelo() {
        return anoModelo;
    }

    public void setAnoModelo(Integer anoModelo) {
        this.anoModelo = anoModelo;
    }

    public Double getPreco() {
        return preco;
    }
    public void setPreco(Double preco) {
        this.preco = preco;
    }
}
