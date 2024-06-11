import java.util.Scanner;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i = 0; i < t; i++) 
        {
            int n = input.nextInt();
            int[] list = new int[n];
            for (int j = 0; j < n; j++)
                list[j] = input.nextInt();
            for (int j = 1; j < n; j++)
                System.out.printf("%d ", list[j]);
            System.out.printf("%d\n", list[0]);
        }
        input.close();
    }
}
