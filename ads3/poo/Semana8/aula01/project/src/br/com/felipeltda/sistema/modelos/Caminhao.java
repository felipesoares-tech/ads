package br.com.felipeltda.sistema.modelos;

public class Caminhao extends Veiculo{
    private float capacidadeCarga;

    public Caminhao(String marca, String modelo, Integer anoFabricacao, Integer anoModelo, Integer capacidadeCarga) {
        this.anoFabricacao = anoFabricacao;
        this.marca = marca;
        this.modelo = modelo;
        this.anoModelo = anoModelo;
        this.capacidadeCarga = capacidadeCarga;
    }

}
