package br.com.felipe.ltda.figuras;

import br.com.felipe.ltda.figuras.FiguraAbstrata;

public class Quadrado extends FiguraAbstrata {
    @Override
    public void desenha() {
        System.out.println("Desenho de um quadrado");
    }
}
