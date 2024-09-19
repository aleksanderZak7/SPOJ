import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for(int i = 0; i < t; i++)
        {
            int c = input.nextInt();
            int k = input.nextInt();
            int w = input.nextInt();
            if (c * w <= k)
                System.out.println("yes");
            else
                System.out.println("no");
        }
        input.close();
    }
}
