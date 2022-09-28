import br.com.felipeltda.figuras.Quadrado;
import br.com.felipeltda.figuras.Trapezio;
import br.com.felipeltda.figuras.Triangulo;

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
