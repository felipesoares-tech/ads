import br.com.felipeltda.atividade01.Carro;
import br.com.felipeltda.atividade01.Pessoa;
import br.com.felipeltda.aula01.*;


public class Main {
    public static void main(String[] args) {
        Pessoa people = new Pessoa("Felipe",18);
        Carro car = new Carro("Ferrari");

        /*apresentacoes*/
        people.sayName();
        people.sayAge();
        people.showLicense();

        /*acoes*/
        people.walk();
        people.setCar(car);
        people.showDocument();
        people.walk();
        people.checkPower();

    }
}