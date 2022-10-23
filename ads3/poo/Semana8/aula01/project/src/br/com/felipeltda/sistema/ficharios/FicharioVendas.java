package br.com.felipeltda.sistema.ficharios;
import br.com.felipeltda.sistema.modelos.Venda;

import java.util.ArrayList;
import java.util.Scanner;

public class FicharioVendas{
    private ArrayList<Venda> vendas;
    private Scanner sc;
    private FicharioCaminhao ficharioCaminhao;
    private FicharioOnibus ficharioOnibus;
    private FicharioCarro ficharioCarro;
    private FicharioClientes ficharioClientes;
    private ArrayList<Object> veiculos;

    public FicharioVendas(FicharioClientes ficharioClientes, FicharioCarro ficharioCarro, FicharioOnibus ficharioOnibus, FicharioCaminhao ficharioCaminhao){
        this.ficharioCaminhao = ficharioCaminhao;
        this.ficharioClientes = ficharioClientes;
        this.ficharioCarro = ficharioCarro;
        this.ficharioOnibus = ficharioOnibus;
        sc = new Scanner(System.in);

        veiculos = new ArrayList<>();
        veiculos.addAll(ficharioCaminhao.getCaminhoes());
        veiculos.addAll(ficharioCarro.getCarros());
        veiculos.addAll(ficharioOnibus.getArrayOnibus());

    }

    public void realizarVenda() {
        System.out.println("CPF do cliente: ");
        String cpf = sc.nextLine();

        System.out.println("Placa do veículo: ");
        String placa = sc.nextLine();




    }

}
