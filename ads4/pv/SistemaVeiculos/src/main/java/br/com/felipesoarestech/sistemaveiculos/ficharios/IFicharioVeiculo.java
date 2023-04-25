package br.com.felipesoarestech.sistemaveiculos.ficharios;

import br.com.felipesoarestech.sistemaveiculos.model.Veiculo;

public interface IFicharioVeiculo {

    boolean cadastrar(Veiculo veiculo);

    Veiculo consultar(String placa);

    boolean atualizar(Veiculo veiculo);

    void deletar();
}
