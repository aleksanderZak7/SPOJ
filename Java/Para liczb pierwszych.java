import java.util.Scanner;

public class Main 
{
    public static boolean isPrime(int n) 
    {
        if (n < 2) 
            return false;
        for (int i = 2; i <= Math.sqrt(n); i++)
            if (n % i == 0) 
                return false;
        return true;
    }

    public static String findPrimeSum(int s) 
    {
        for (int x = 2; x < s; x++)
            if (isPrime(x) && isPrime(s - x))
                return "TAK " + x + " " + (s - x);
        return "NIE";
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i = 0; i < t; i++) 
        {
            int s = input.nextInt();
            System.out.println(findPrimeSum(s));
        }
        input.close();
    }
}