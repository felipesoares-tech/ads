package br.com.felipeltda.sistema.ficharios;
import br.com.felipeltda.sistema.modelos.Cliente;

import java.util.ArrayList;
import java.util.Scanner;

public class FicharioClientes implements CRUD{
    private ArrayList<Cliente> clientes;
    private Scanner sc;

    public FicharioClientes(ArrayList clientes){
        this.clientes = clientes;
        sc = new Scanner(System.in);
    }

    private Cliente buscaCliente(String cpf){
        Cliente cliente = new Cliente(cpf);

        if(clientes.contains(cliente))
            return clientes.get(clientes.indexOf(cliente));
        else
            return null;
    }
    @Override
    public void cadastrar() {
        System.out.println("Nome: ");
        String nome = sc.nextLine();

        System.out.println("Telefone: ");
        String telefone = sc.nextLine();

        System.out.println("CPF: ");
        String cpf = sc.nextLine();

        Cliente cliente = new Cliente(nome,cpf,telefone);
        if(!clientes.contains(cliente))
            clientes.add(cliente);
        else
            System.out.println("Cliente já cadastrado!");
    }

    @Override
    public void consultar() {
        System.out.println("Informe o cpf do cliente: ");
        String cpf = sc.nextLine();

        Cliente cliente = buscaCliente(cpf);

        if (cliente != null)
            System.out.println(cliente);
        else
            System.out.println("Cliente não encontrado!");
    }

    @Override
    public void atualizar() {
        System.out.println("Informe o CPF do cliente: ");
        String cpf = sc.nextLine();

        Cliente cliente = buscaCliente(cpf);

        if (cliente != null){
            System.out.println(cliente);
            System.out.println("Escolha o dado a ser atualizado!");

            System.out.println("1 - Nome");
            System.out.println("2 - Telefone");
            System.out.print(":");
            short opcao = sc.nextShort();
            sc.skip("\n");
            switch (opcao){
                case 1 -> {
                    System.out.println("Nome: ");
                    String nome = sc.nextLine();
                    clientes.get(clientes.indexOf(cliente)).setNome(nome);
                }
                case 2 -> {
                    System.out.println("Telefone: ");
                    String telefone = sc.nextLine();
                    clientes.get(clientes.indexOf(cliente)).setTelefone(telefone);
                }
            }

        }else
            System.out.println("Cliente não encontrado!");
    }

    @Override
    public void remover() {
        System.out.println("Informe o CPF do cliente: ");
        String cpf = sc.nextLine();

        Cliente cliente = buscaCliente(cpf);

        if (cliente != null){
            System.out.print("1 - Confirmar exclusão\n2 - Cancelar\n:");
            short opcao = sc.nextShort();
            sc.skip("\n");

            if (opcao == 1){
                clientes.remove(cliente);
                System.out.println("Exclusão realizada com sucesso!");
            }
        }else
            System.out.println("Cliente não encontrado!");
    }

    public void relatorio(){
        for (Cliente cliente : clientes) {
            System.out.println(cliente);
        }
    }
}
