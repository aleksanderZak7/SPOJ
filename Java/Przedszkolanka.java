import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        for (int i = 0; i < N; i++) 
        {
            int a = input.nextInt();
            int b = input.nextInt();
            System.out.println((a * b) / NWD(a, b));
        }
        input.close();
    }

    private static int NWD(int a, int b) 
    {
        while (b != 0) 
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}
