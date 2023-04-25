package br.com.felipesoarestech.sistemacadastros.logic;
import java.util.List;
import java.io.Serializable;

public interface  GenericLogic<E> extends Serializable{
    public E salvar(E entity);
    public void remover(E entity);
    public List<E> listar();
}
