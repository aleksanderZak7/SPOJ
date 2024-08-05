import java.lang.Math;
import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int d = input.nextInt();
        for(int i = 0; i < d; i++)
        {
            int a = input.nextInt();
            int b = input.nextInt();
            int r = a % b;
            if (r < 0)
                r += Math.abs(b);
            System.out.println(r);
        }
        input.close();
    }
}