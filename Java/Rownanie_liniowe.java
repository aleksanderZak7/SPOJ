import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        double a = input.nextDouble();
        double b = input.nextDouble();
        double c = input.nextDouble();
        if (b == c && a == 0)
            System.out.println("NWR");
        else if (a == 0)
            System.out.println("BR");
        else 
        {
            double result = (c - b) / a;
            System.out.printf("%.2f%n", result);
        }
        input.close();
    }
}
