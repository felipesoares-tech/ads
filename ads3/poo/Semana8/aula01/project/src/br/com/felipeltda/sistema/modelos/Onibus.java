package br.com.felipeltda.sistema.modelos;

public class Onibus extends Veiculo{
    private Integer quantidadePassageiros;
    private Integer quantidadeEixos;
    public Onibus(String placa){
        this.placa = placa;
    }

    @Override
    public String toString() {
        return "Onibus{" + "quantidadePassageiros=" + quantidadePassageiros + ", quantidadeEixos=" + quantidadeEixos + ", marca='" + marca + '\'' + ", modelo='" + modelo + '\'' + ", anoFabricacao=" + anoFabricacao + ", anoModelo=" + anoModelo + ", preco=" + preco + ", placa='" + placa + '\'' + '}';
    }

    public Integer getQuantidadePassageiros() {
        return quantidadePassageiros;
    }

    public void setQuantidadePassageiros(Integer quantidadePassageiros) {
        this.quantidadePassageiros = quantidadePassageiros;
    }

    public Integer getQuantidadeEixos() {
        return quantidadeEixos;
    }

    public void setQuantidadeEixos(Integer quantidadeEixos) {
        this.quantidadeEixos = quantidadeEixos;
    }

    public Onibus(String marca, String modelo, Integer anoFabricacao, Integer anoModelo, Integer quantidadeEixos, Integer quantidadePassageiros, String placa, Double valor) {
        this.anoFabricacao = anoFabricacao;
        this.marca = marca;
        this.modelo = modelo;
        this.anoModelo = anoModelo;
        this.quantidadeEixos = quantidadeEixos;
        this.quantidadePassageiros = quantidadePassageiros;
        this.placa = placa;
        this.preco = valor;
    }
}
