import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        double n = input.nextDouble();
        double v1 = input.nextDouble();
        double v2 = input.nextDouble();
        System.out.printf("%.2f%n",  (n / (v1 * 1000.0)) * v2 * 1000.0);
        input.close();
    }
}