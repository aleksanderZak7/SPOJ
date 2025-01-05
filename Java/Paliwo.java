import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        double n = input.nextDouble();
        double b = input.nextDouble();
        System.out.printf("%.2f %.2f",(b - n) / 2, n + ((b - n) / 2));
        input.close();
    }
}