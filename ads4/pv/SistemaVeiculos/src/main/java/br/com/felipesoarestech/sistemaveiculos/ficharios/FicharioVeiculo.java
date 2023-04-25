package br.com.felipesoarestech.sistemaveiculos.ficharios;
import br.com.felipesoarestech.sistemaveiculos.model.Veiculo;
import java.util.ArrayList;


public class FicharioVeiculo implements IFicharioVeiculo {

    private ArrayList<Veiculo> veiculos;
    

    public FicharioVeiculo() {
        this.veiculos = new ArrayList<>();
    }

    public ArrayList<Veiculo> getVeiculos() {
        return veiculos;
    }

    public void setVeiculos(ArrayList<Veiculo> veiculos) {
        this.veiculos = veiculos;
    }

    public boolean cadastrar(Veiculo veiculo) {
        return this.veiculos.add(veiculo);
    }

    public Veiculo consultar(String placa) {
        int index = this.veiculos.indexOf(new Veiculo(placa.trim()));
        return this.veiculos.get(index);
    }

    public boolean atualizar(Veiculo veiculo) {
        if (!this.veiculos.contains(veiculo)) {
            this.cadastrar(veiculo);
            return true;
        }
        return false;
    }

    public void deletar() {

    }

}
