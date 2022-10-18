package br.com.felipeltda.sistema.ficharios;
import br.com.felipeltda.sistema.modelos.Onibus;
import java.util.ArrayList;
import java.util.Scanner;

public class FicharioOnibus implements CRUD {
    private ArrayList<Onibus> arrayOnibus;
    private Scanner sc;

    public FicharioOnibus(ArrayList<Onibus> onibus){
        this.arrayOnibus = onibus;
        sc = new Scanner(System.in);
    }

    @Override
    public void ler() {

    }
    @Override
    public void remover() {


    }
    @Override
    public void cadastrar() {
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
        Integer quantidadeEixeos = sc.nextInt();

        Onibus onibus = new Onibus(marca,modelo,anoFabricacao,anoModelo,quantidadeEixeos,quantidadePassageiros);
        arrayOnibus.add(onibus);

    }
    @Override
    public void atualizar() {

    }
}
