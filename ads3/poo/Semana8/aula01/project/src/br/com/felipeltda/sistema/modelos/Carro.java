package br.com.felipeltda.sistema.modelos;

public class Carro extends Veiculo{
    private Integer quantidadePortas;

    public Carro(String placa){
        this.placa = placa;
    }

    public Integer getQuantidadePortas() {
        return quantidadePortas;
    }

    public void setQuantidadePortas(Integer quantidadePortas) {
        this.quantidadePortas = quantidadePortas;
    }

    public Carro(String marca, String modelo, Integer anoFabricacao, Integer anoModelo, Integer quantidadePortas, String placa, Double valor) {
        this.anoFabricacao = anoFabricacao;
        this.marca = marca;
        this.modelo = modelo;
        this.anoModelo = anoModelo;
        this.quantidadePortas = quantidadePortas;
        this.placa = placa;
        this.preco = valor;
    }
}
