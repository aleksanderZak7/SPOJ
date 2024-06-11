import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        final int SECONDS_IN_A_DAY = 86400;
        Scanner input = new Scanner(System.in);
        int numCases = input.nextInt();
        for (int i = 0; i < numCases; i++) 
        {
            int totalCookies = 0;
            int N = input.nextInt();
            int M = input.nextInt();
            for (int j = 0; j < N; j++) 
            {
                int bakingTime = input.nextInt();
                totalCookies += SECONDS_IN_A_DAY / bakingTime;
            }
            System.out.println((int) Math.ceil((double) totalCookies / M));
        }
        input.close();
    }
}