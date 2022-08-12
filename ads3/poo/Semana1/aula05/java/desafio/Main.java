import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
            int ano;
            
            ano =  read.nextInt();
            boolean ret = ((ano%400 == 0) || ((ano%4==0) && (ano%100!= 0)));
            System.out.println("Bissexto: " + ret);

            read.close();
        
    }
}

