import br.com.felipe.ltda.figuras.Quadrado;
import br.com.felipe.ltda.figuras.Trapezio;
import br.com.felipe.ltda.figuras.Triangulo;

public class Main {
    public static void main(String[] args) {
        Quadrado quadrado = new Quadrado();
        Triangulo triangulo = new Triangulo();
        Trapezio trapezio = new Trapezio();

        quadrado.desenha();
        triangulo.desenha();
        trapezio.desenha();
    }
}
