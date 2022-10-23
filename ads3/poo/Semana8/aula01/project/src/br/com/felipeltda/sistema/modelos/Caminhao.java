package br.com.felipeltda.sistema.modelos;

public class Caminhao extends Veiculo{
    private float capacidadeCarga;

    public Caminhao(String placa){
        this.placa = placa;
    }

    public Caminhao(String marca, String modelo, Integer anoFabricacao, Integer anoModelo, float capacidadeCarga, String placa, Double valor) {
        this.anoFabricacao = anoFabricacao;
        this.marca = marca;
        this.modelo = modelo;
        this.anoModelo = anoModelo;
        this.capacidadeCarga = capacidadeCarga;
        this.placa = placa;
        this.preco = valor;
    }

    public float getCapacidadeCarga() {
        return capacidadeCarga;
    }

    public void setCapacidadeCarga(float capacidadeCarga) {
        this.capacidadeCarga = capacidadeCarga;
    }
}
