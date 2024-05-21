import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int D = input.nextInt();
        for (int i = 0; i < D; i++) 
        {
            int base = input.nextInt();
            int exponent = input.nextInt();
            System.out.println(lastDigitOfPower(base, exponent));
        }
        input.close();
    }

    private static int lastDigitOfPower(int base, int exponent) 
    {
        base = base % 10;
        if (exponent == 0)
            return 1;
        int expMod = exponent % 4;
        if (expMod == 0)
            expMod = 4;
        int result = 1;
        for (int i = 0; i < expMod; i++)
            result = (result * base) % 10;
        return result;
    }
}
