import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        double amount = input.nextDouble();
        final int[] coins = {500, 200, 100, 50, 20, 10, 5, 2, 1};
        int amountInGr = (int)Math.round(amount * 100);
        int count = 0;
        for (int coin : coins)
        {
            count += amountInGr / coin;
            amountInGr %= coin;
        }
        System.out.print(count);
        input.close();
    }
}