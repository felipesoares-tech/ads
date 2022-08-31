import br.edu.iftm.casa.modelo.Cachorro;

public class Main {
    public static void main(String[] args) {
        Cachorro dog = new Cachorro("Vira lata");
        System.out.println("Raça do dog: "+dog.getRaca());
        dog.setNome("Bicho");
        System.out.println("Nome do dog: "+dog.getNome());
        dog.setDormindo(false);
        System.out.println(dog.getNome() + (dog.isDormindo() ? " Esta dormindo" : " Nao esta dormindo"));
        dog.setLatindo(true);
        System.out.println(dog.getNome() + (dog.isLatindo() ? " Esta latindo" : " Nao esta latindo"));
    }
}
