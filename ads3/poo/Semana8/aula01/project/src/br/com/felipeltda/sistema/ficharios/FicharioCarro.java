package br.com.felipeltda.sistema.ficharios;

import br.com.felipeltda.sistema.modelos.Carro;

import java.util.ArrayList;

public class FicharioCarro implements CRUD {

    private ArrayList<Carro> carros;

    public FicharioCarro(ArrayList<Carro> carros){
        this.carros = carros;
    }

    @Override
    public void atualizar() {

    }

    @Override
    public void ler() {

    }

    @Override
    public void cadastrar() {

    }

    @Override
    public void remover() {

    }
}
