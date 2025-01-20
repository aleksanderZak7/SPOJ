import java.util.Scanner;

public class Main 
{
    public static int factorialInRange(int a, int b) 
    {
        int n = 0;
        int count = 0;
        long factorial = 1;
        while (factorial <= b) 
        {
            if (a <= factorial && factorial <= b)
                count++;
            n++;
            if(n > 0)
                factorial *= n;
        }
        return count;
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        System.out.print(factorialInRange(a, b));
        input.close();
    }
}