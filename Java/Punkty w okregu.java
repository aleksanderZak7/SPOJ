import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int xo = input.nextInt();
        int yo = input.nextInt();
        int r = input.nextInt();
        int n = input.nextInt();
        int rsquared = r * r;
        for (int i = 0; i < n; i++) 
        {
            int xi = input.nextInt();
            int yi = input.nextInt();
            int dx = xi - xo;
            int dy = yi - yo;
            int distSquared = dx * dx + dy * dy;
            if (distSquared < rsquared)
                System.out.println("I");
            else if (distSquared > rsquared)
                System.out.println("O");
            else
                System.out.println("E");
        }
        input.close();
    }
}