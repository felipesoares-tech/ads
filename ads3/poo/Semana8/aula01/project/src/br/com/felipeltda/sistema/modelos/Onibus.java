package br.com.felipeltda.sistema.modelos;

public class Onibus extends Veiculo{
    private Integer quantidadePassageiros;
    private Integer quantidadeEixos;

    public Onibus(String marca, String modelo, Integer anoFabricacao, Integer anoModelo, Integer quantidadeEixos,Integer quantidadePassageiros) {
        this.anoFabricacao = anoFabricacao;
        this.marca = marca;
        this.modelo = modelo;
        this.anoModelo = anoModelo;
        this.quantidadeEixos = quantidadeEixos;
        this.quantidadePassageiros = quantidadePassageiros;
    }
}
