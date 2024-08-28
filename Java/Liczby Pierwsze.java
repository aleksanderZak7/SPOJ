import java.util.Scanner;

public class Main 
{
    public static boolean isPrime(int number) 
    {
        if (number <= 1)
            return false;
        for (int i = 2; i <= Math.sqrt(number); ++i)
            if (number % i == 0)
                return false;
        return true;
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) 
        {
            int number = scanner.nextInt();
            if (isPrime(number))
                System.out.println("TAK");
            else
                System.out.println("NIE");
        }
        scanner.close();
    }
}