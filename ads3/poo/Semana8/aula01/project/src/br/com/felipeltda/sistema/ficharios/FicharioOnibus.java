package br.com.felipeltda.sistema.ficharios;
import br.com.felipeltda.sistema.modelos.Onibus;
import java.util.ArrayList;
import java.util.Scanner;

public class FicharioOnibus implements CRUD {
    private ArrayList<Onibus> arrayOnibus;
    private Scanner sc;

    private Onibus buscaOnibus(String placa){
        Onibus onibus = new Onibus(placa);

        if(arrayOnibus.contains(onibus))
            return arrayOnibus.get(arrayOnibus.indexOf(onibus));
        else
            return null;
    }

    public FicharioOnibus(ArrayList<Onibus> onibus){
        this.arrayOnibus = onibus;
        sc = new Scanner(System.in);
    }

    @Override
    public void consultar() {
        System.out.println("Informe a placa do veículo: ");
        String placa = sc.nextLine();

        Onibus onibus = buscaOnibus(placa);

        if (onibus != null)
            System.out.println(onibus);
        else
            System.out.println("Onibus não encontrado!");

    }
    @Override
    public void remover() {
        System.out.println("Informe a placa do veículo: ");
        String placa = sc.nextLine();

        Onibus onibus = buscaOnibus(placa);

        if (onibus != null){
            System.out.print("1 - Confirmar exclusão\n2 - Cancelar\n:");
            short opcao = sc.nextShort();
            sc.skip("\n");

            if (opcao == 1){
                arrayOnibus.remove(onibus);
                System.out.println("Exclusão realizada com sucesso!");
            }
        }else
            System.out.println("Onibus não encontrado!");

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

        System.out.println("Quantidade de passageiros: ");
        Integer quantidadePassageiros = sc.nextInt();

        System.out.println("Quantidade de eixos: ");
        Integer quantidadeEixos = sc.nextInt();
        sc.skip("\n");

        Onibus onibus = new Onibus(marca,modelo,anoFabricacao,anoModelo,quantidadeEixos,quantidadePassageiros,placa,valor);
        if(!arrayOnibus.contains(onibus))
            arrayOnibus.add(onibus);
        else
            System.out.println("Veículo já cadastrado!");

    }
    @Override
    public void atualizar() {
        System.out.println("Informe a placa do veículo: ");
        String placa = sc.nextLine();

        Onibus onibus = buscaOnibus(placa);

        if (onibus != null){
            System.out.println(onibus);
            System.out.println("Escolha o dado a ser atualizado!");

            System.out.println("1 - Marca");
            System.out.println("2 - Modelo");
            System.out.println("3 - Ano fabricação");
            System.out.println("4 - Ano modelo");
            System.out.println("5 - Valor");
            System.out.println("6 - Qtd passageiros");
            System.out.println("7 - Qtd eixos");
            System.out.print(":");
            short opcao = sc.nextShort();
            sc.skip("\n");

            switch (opcao){
                case 1 -> {
                    System.out.println("Marca: ");
                    String marca = sc.nextLine();
                    arrayOnibus.get(arrayOnibus.indexOf(onibus)).setMarca(marca);
                }
                case 2 -> {
                    System.out.println("Modelo: ");
                    String modelo = sc.nextLine();
                    arrayOnibus.get(arrayOnibus.indexOf(onibus)).setModelo(modelo);
                }
                case 3 -> {
                    System.out.println("Ano fabricação: ");
                    Integer anoFabricacao = sc.nextInt();
                    sc.skip("\n");
                    arrayOnibus.get(arrayOnibus.indexOf(onibus)).setAnoFabricacao(anoFabricacao);
                }
                case 4 -> {
                    System.out.println("Ano modelo: ");
                    Integer anoModelo = sc.nextInt();
                    sc.skip("\n");
                    arrayOnibus.get(arrayOnibus.indexOf(onibus)).setAnoModelo(anoModelo);
                }
                case 5 -> {
                    System.out.println("Valor: ");
                    Double valor = sc.nextDouble();
                    sc.skip("\n");
                    arrayOnibus.get(arrayOnibus.indexOf(onibus)).setPreco(valor);
                }
                case 6 -> {
                    System.out.println("Quantidade de passageiros: ");
                    Integer quantidadePassageiros = sc.nextInt();
                    sc.skip("\n");
                    arrayOnibus.get(arrayOnibus.indexOf(onibus)).setQuantidadePassageiros(quantidadePassageiros);
                }
                case 7 -> {
                    System.out.println("Quantidade de eixos: ");
                    Integer quantidadeEixos = sc.nextInt();
                    sc.skip("\n");
                    arrayOnibus.get(arrayOnibus.indexOf(onibus)).setQuantidadeEixos(quantidadeEixos);
                }
            }

        }else
            System.out.println("Onibus não encontrado!");
    }
    public void relatorio(){
        for (Onibus onibus : arrayOnibus) {
            System.out.println(onibus);
        }
    }

    public ArrayList<Onibus> getArrayOnibus() {
        return arrayOnibus;
    }

    public void setArrayOnibus(ArrayList<Onibus> arrayOnibus) {
        this.arrayOnibus = arrayOnibus;
    }
}
