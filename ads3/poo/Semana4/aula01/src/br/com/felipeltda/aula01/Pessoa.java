package br.com.felipeltda.aula01;

public class Pessoa {
    private final String name;
    private final int age;
    private Carro car;
    private boolean licensed;

    public void showDocument(){
        if(car != null){
            System.out.println("-------------Documento do carro---------");
            System.out.println("Propietario: "+car.getOwner().name);
            System.out.println("Modelo: "+car.getModel());
            System.out.println("Cor: "+car.getColor());
            System.out.println("Tipo do motor: "+car.getMotor().getEngineType());
            System.out.println("----------------------------------------");
        }
    }

    public void checkPower(){
        if(car != null)
            System.out.println("A potencia do carro e : "+ car.getMotor().getPower());
        else
            System.out.println("Eu nao tenho carro, entao nao posso verificar a potencia");
    }

    public void showLicense(){
        System.out.println(isLicensed() ? "Eu ja tenho habilitacao" : "Nao tenho habilitacao");
    }

    public void sayAge(){
        System.out.println("Eu tenho "+getAge()+" anos");
    }
    public void sayName(){
        System.out.println("Meu nome e: "+getName());
    }
    private int getAge() {
        return age;
    }

    private void setLicensed(boolean licensed) {
        this.licensed = licensed;
    }
    private boolean isLicensed() {
        return licensed;
    }
    private String getName() {
        return name;
    }

    public void setCar(Carro car) {
        this.car = car;
        car.setOwner(this);
        System.out.println("Oba, ganhei um carro!");
    }

    public Pessoa(String name, int age){
        this.name = name;
        this.age = age;

        setLicensed(age >= 18);
    }
    public void walk(){
        if(car != null) {
            if (isLicensed()){
                car.turnOn();
                car.accelerate();
                car.accelerate();
                car.breakCar();
                car.breakCar();
                car.turnOff();
            }
            else
                System.out.println("Nao tenho habilitacao, vou ir a pe!");
        }else
            System.out.println("Nao tenho carro, entao vou a pe!");
    }

}