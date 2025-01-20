import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        int r = input.nextInt();
        System.out.print((((((int)(n % 10)) * 2 + 5) * 50 + 1771) - r) % 100);
        input.close();
    }
}