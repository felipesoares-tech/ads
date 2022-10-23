package br.com.felipeltda.sistema.ficharios;
import br.com.felipeltda.sistema.modelos.Caminhao;
import br.com.felipeltda.sistema.modelos.Carro;

import java.util.ArrayList;
import java.util.Scanner;

public class FicharioCaminhao implements CRUD {
    private ArrayList<Caminhao> caminhoes;
    private Scanner sc;

    private Caminhao buscaCaminhao(String placa){
        Caminhao caminhao = new Caminhao(placa);
        if(caminhoes.contains(caminhao))
            return caminhoes.get(caminhoes.indexOf(caminhao));
        else
            return null;
    }

    public ArrayList<Caminhao> getCaminhoes() {
        return caminhoes;
    }

    public FicharioCaminhao(ArrayList<Caminhao> caminhoes){
        this.caminhoes = caminhoes;
        sc = new Scanner(System.in);
    }

    @Override
    public void cadastrar() {
        System.out.println("Placa: ");
        String placa = sc.nextLine();

        System.out.println("Marca: ");
        String marca = sc.nextLine();

        System.out.println("Modelo: ");
        String modelo = sc.nextLine();

        System.out.println("Ano fabricação: ");
        Integer anoFabricacao = sc.nextInt();

        System.out.println("Ano modelo: ");
        Integer anoModelo = sc.nextInt();

        System.out.println("Valor: ");
        Double valor = sc.nextDouble();

        System.out.println("Capacidade de carga: ");
        float capacidadeCarga = sc.nextFloat();

        sc.skip("\n");

        Caminhao caminhao = new Caminhao(marca,modelo,anoFabricacao,anoModelo,capacidadeCarga,placa,valor);
        if(!caminhoes.contains(caminhao))
            caminhoes.add(caminhao);
        else
            System.out.println("Veículo já cadastrado!");
    }

    @Override
    public void remover() {
        System.out.println("Informe a placa do veículo: ");
        String placa = sc.nextLine();

        Caminhao caminhao = buscaCaminhao(placa);

        if (caminhao != null){
            System.out.print("1 - Confirmar exclusão\n2 - Cancelar\n:");
            short opcao = sc.nextShort();
            sc.skip("\n");

            if (opcao == 1){
                caminhoes.remove(caminhao);
                System.out.println("Exclusão realizada com sucesso!");
            }
        }else
            System.out.println("Carro não encontrado!");
    }

    @Override
    public void consultar() {
        System.out.println("Informe a placa do veículo: ");
        String placa = sc.nextLine();

        Caminhao caminhao = buscaCaminhao(placa);

        if (caminhao != null)
            System.out.println(caminhao);
        else
            System.out.println("Caminhao não encontrado!");
    }

    @Override
    public void atualizar() {
        System.out.println("Informe a placa do veículo: ");
        String placa = sc.nextLine();

        Caminhao caminhao = buscaCaminhao(placa);

        if (caminhao != null){
            System.out.println(caminhao);
            System.out.println("Escolha o dado a ser atualizado!");

            System.out.println("1 - Marca");
            System.out.println("2 - Modelo");
            System.out.println("3 - Ano fabricação");
            System.out.println("4 - Ano modelo");
            System.out.println("5 - Valor");
            System.out.println("6 - Capacidade de carga");
            System.out.print(":");
            short opcao = sc.nextShort();
            sc.skip("\n");

            switch (opcao){
                case 1 -> {
                    System.out.println("Marca: ");
                    String marca = sc.nextLine();
                    caminhoes.get(caminhoes.indexOf(caminhao)).setMarca(marca);
                }
                case 2 -> {
                    System.out.println("Modelo: ");
                    String modelo = sc.nextLine();
                    caminhoes.get(caminhoes.indexOf(caminhao)).setModelo(modelo);
                }
                case 3 -> {
                    System.out.println("Ano fabricação: ");
                    Integer anoFabricacao = sc.nextInt();
                    sc.skip("\n");
                    caminhoes.get(caminhoes.indexOf(caminhao)).setAnoFabricacao(anoFabricacao);
                }
                case 4 -> {
                    System.out.println("Ano modelo: ");
                    Integer anoModelo = sc.nextInt();
                    sc.skip("\n");
                    caminhoes.get(caminhoes.indexOf(caminhao)).setAnoModelo(anoModelo);
                }
                case 5 -> {
                    System.out.println("Valor: ");
                    Double valor = sc.nextDouble();
                    sc.skip("\n");
                    caminhoes.get(caminhoes.indexOf(caminhao)).setPreco(valor);
                }
                case 6 -> {
                    System.out.println("Capacidade de carga: ");
                    float capacidadeCarga = sc.nextFloat();
                    sc.skip("\n");
                    caminhoes.get(caminhoes.indexOf(caminhao)).setCapacidadeCarga(capacidadeCarga);
                }
            }

        }else
            System.out.println("Caminhao não encontrado!");
    }
    public void relatorio(){
        for (Caminhao caminhao : caminhoes) {
            System.out.println(caminhao);
        }
    }
}
