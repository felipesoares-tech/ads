package br.com.felipeltda.aula01;

public class Carro {

    private int velocidade;
    private boolean ligado;
    private final String model;
    private Pessoa owner;
    Motor motor;


    public String getColor() {
        return "Vermelha";
    }

    public Pessoa getOwner() {
        return owner;
    }

    public void setOwner(Pessoa owner) {
        this.owner = owner;
    }

    public Motor getMotor() {
        return motor;
    }

    public String getModel() {
        return model;
    }

    public Carro(String model){
        this.model = model;
        this.motor = new Motor("Motor em V");
    }

    public void turnOn(){
        if(ligado) {
            System.out.println("O carro ja esta ligado !!");
            return;
        }
        System.out.println("Carro ligado!");
        ligado = true;
    }
    public void turnOff(){
        if(ligado) {
            if(velocidade == 0){
                System.out.println("Carro desligado!");
                ligado = false;
            }else {
                System.out.println("Nao foi possivel desligar, Carro em movimento, velocidade: " + velocidade + "km/h");
            }
            return;
        }
        System.out.println("O Carro ja esta desligado!");
    }
    public void accelerate(){
        if(ligado){
            if(velocidade < 100){
                velocidade+=20;
                System.out.println("Acelerando, velocidade atual: " + velocidade + "km/h");
            }else{
                System.out.println("Nao foi possivel acelerar,Velocidade maxima atingida!!");
            }
            return;
        }
        System.out.println("Nao foi possivel acelerar, carro desligado");
    }
    public void breakCar(){
        if (ligado){
            if(velocidade != 0){
                velocidade-=20;
                System.out.println("Freando, velocidade atual: " + velocidade + "km/h");
            }else{
                System.out.println("Velocidade minima atingida");
            }
            return;
        }
        System.out.println("Nao foi possivel frear, carro desligado");
    }
}