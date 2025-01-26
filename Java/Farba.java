import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();
        System.out.print((int)Math.ceil((2 * (a * c + b * c)) / 5.0) + (int)Math.ceil((a * b) / 3.0));
        input.close();
    }
}