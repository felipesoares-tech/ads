package br.com.felipeltda.aula01;

public class Carro {

    private int velocidade;
    private boolean ligado;
    private final String modelo;
    private final Motor motor;

    public double getMotor() {
        return motor.getPotencia();
    }

    public String getModelo() {
        return modelo;
    }

    public Carro(String modelo, Motor motor){
        this.modelo = modelo;
        this.motor = motor;
    }

    public void ligar(){
        if(ligado) {
            System.out.println("O carro ja esta ligado !!");
            return;
        }
        System.out.println("Carro ligado!");
        ligado = true;
    }
    public void desligar(){
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
    public void acelerar(){
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
    public void frear(){
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