package br.com.felipeltda.sistema.ficharios;
import br.com.felipeltda.sistema.modelos.Carro;
import br.com.felipeltda.sistema.modelos.Onibus;

import java.util.ArrayList;
import java.util.Scanner;

public class FicharioCarro implements CRUD {

    private ArrayList<Carro> carros;
    private Scanner sc;
    public FicharioCarro(ArrayList<Carro> carros){
        this.carros = carros;
        sc = new Scanner(System.in);
    }

    private Carro buscaCarro(String placa){
        Carro carro = new Carro(placa);

        if(carros.contains(carro))
            return carros.get(carros.indexOf(carro));
        else
            return null;
    }

    @Override
    public void atualizar() {
        System.out.println("Informe a placa do veículo: ");
        String placa = sc.nextLine();

        Carro carro = buscaCarro(placa);

        if (carro != null){
            System.out.println(carro);
            System.out.println("Escolha o dado a ser atualizado!");

            System.out.println("1 - Marca");
            System.out.println("2 - Modelo");
            System.out.println("3 - Ano fabricação");
            System.out.println("4 - Ano modelo");
            System.out.println("5 - Valor");
            System.out.println("6 - Qtd portas");
            System.out.print(":");
            short opcao = sc.nextShort();
            sc.skip("\n");

            switch (opcao){
                case 1 -> {
                    System.out.println("Marca: ");
                    String marca = sc.nextLine();
                    carros.get(carros.indexOf(carro)).setMarca(marca);
                }
                case 2 -> {
                    System.out.println("Modelo: ");
                    String modelo = sc.nextLine();
                    carros.get(carros.indexOf(carro)).setModelo(modelo);
                }
                case 3 -> {
                    System.out.println("Ano fabricação: ");
                    Integer anoFabricacao = sc.nextInt();
                    sc.skip("\n");
                    carros.get(carros.indexOf(carro)).setAnoFabricacao(anoFabricacao);
                }
                case 4 -> {
                    System.out.println("Ano modelo: ");
                    Integer anoModelo = sc.nextInt();
                    sc.skip("\n");
                    carros.get(carros.indexOf(carro)).setAnoModelo(anoModelo);
                }
                case 5 -> {
                    System.out.println("Valor: ");
                    Double valor = sc.nextDouble();
                    sc.skip("\n");
                    carros.get(carros.indexOf(carro)).setPreco(valor);
                }
                case 6 -> {
                    System.out.println("Quantidade de portas: ");
                    Integer qtdPortas = sc.nextInt();
                    sc.skip("\n");
                    carros.get(carros.indexOf(carro)).setQuantidadePortas(qtdPortas);
                }
            }

        }else
            System.out.println("Carro não encontrado!");
    }

    @Override
    public void consultar() {
        System.out.println("Informe a placa do veículo: ");
        String placa = sc.nextLine();

        Carro carro = buscaCarro(placa);

        if (carro != null)
            System.out.println(carro);
        else
            System.out.println("Carro não encontrado!");
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

        System.out.println("Quantidade de portas: ");
        Integer quantidadePortas = sc.nextInt();

        sc.skip("\n");

        Carro carro = new Carro(marca,modelo,anoFabricacao,anoModelo,quantidadePortas,placa,valor);
        if(!carros.contains(carro))
            carros.add(carro);
        else
            System.out.println("Veículo já cadastrado!");
    }

    @Override
    public void remover() {
        System.out.println("Informe a placa do veículo: ");
        String placa = sc.nextLine();

        Carro carro = buscaCarro(placa);

        if (carro != null){
            System.out.print("1 - Confirmar exclusão\n2 - Cancelar\n:");
            short opcao = sc.nextShort();
            sc.skip("\n");

            if (opcao == 1){
                carros.remove(carro);
                System.out.println("Exclusão realizada com sucesso!");
            }
        }else
            System.out.println("Carro não encontrado!");
    }

    public void relatorio(){
        for (Carro carro : carros) {
            System.out.println(carro);
        }
    }

    public ArrayList<Carro> getCarros() {
        return carros;
    }

    public void setCarros(ArrayList<Carro> carros) {
        this.carros = carros;
    }
}
