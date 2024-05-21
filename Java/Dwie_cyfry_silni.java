import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int D = input.nextInt();
        for (int i = 0; i < D; i++) 
        {
            int number = input.nextInt();
            System.out.println(getLastTwoDigitsOfFactorial(number));
        }
        input.close();
    }

    private static String getLastTwoDigitsOfFactorial(int number) 
    {
        if (number > 9)
            return "0 0";
        int factorial = 1;
        for (int i = 2; i <= number; i++)
            factorial *= i;
        int lastTwoDigits = factorial % 100;
        return (lastTwoDigits / 10) + " " + (lastTwoDigits % 10);
    }
}
