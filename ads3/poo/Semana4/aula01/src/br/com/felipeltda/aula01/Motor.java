package br.com.felipeltda.aula01;

public class Motor {
    private final String engineType;

    public String getEngineType() {
        return engineType;
    }

    public Motor(String engineType){
        this.engineType = engineType;
    }
    public double getPower() {
        return 500.00;
    }

}
