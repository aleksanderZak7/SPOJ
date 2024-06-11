import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i = 0; i < t; i++) 
        {
            int s = input.nextInt();
            int n = calculateSteps(s);
            System.out.println(n);
        }
        input.close();
    }

    private static int calculateSteps(int x) 
    {
        int n = 0;
        while (x != 1) 
        {
            if (x % 2 == 0)
                x /= 2;
            else
                x = 3 * x + 1;
            n++;
        }
        return n;
    }
}
