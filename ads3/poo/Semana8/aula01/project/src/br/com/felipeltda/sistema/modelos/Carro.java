package br.com.felipeltda.sistema.modelos;

public class Carro extends Veiculo{
    private Integer quantidadePortas;

    public Carro(String marca, String modelo, Integer anoFabricacao, Integer anoModelo, Integer quantidadePortas) {
        this.anoFabricacao = anoFabricacao;
        this.marca = marca;
        this.modelo = modelo;
        this.anoModelo = anoModelo;
        this.quantidadePortas = quantidadePortas;
    }
}
