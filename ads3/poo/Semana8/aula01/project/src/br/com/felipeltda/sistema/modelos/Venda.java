package br.com.felipeltda.sistema.modelos;

import java.time.LocalDate;

public class Venda {
    private Veiculo veiculo;
    private Cliente cliente;
    private LocalDate data;
    private Double preco;

    public Venda(Veiculo veiculo, Cliente cliente, LocalDate data, Double preco) {
        this.veiculo = veiculo;
        this.cliente = cliente;
        this.data = data;
        this.preco = preco;
    }

    public Veiculo getVeiculo() {
        return veiculo;
    }

    public void setVeiculo(Veiculo veiculo) {
        this.veiculo = veiculo;
    }

    public Cliente getCliente() {
        return cliente;
    }

    public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }

    public LocalDate getData() {
        return data;
    }

    public void setData(LocalDate data) {
        this.data = data;
    }

    public Double getPreco() {
        return preco;
    }

    public void setPreco(Double preco) {
        this.preco = preco;
    }
}
