import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) 
        {
            int n = scanner.nextInt();
            int totalLegs = 0;
            for (int j = 0; j < n; j++)
                totalLegs += scanner.nextInt();
            System.out.println(totalLegs + (n - 1));
        }
        scanner.close();
    }
}
