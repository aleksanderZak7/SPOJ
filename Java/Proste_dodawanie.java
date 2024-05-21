import java.util.Scanner;

class Main 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for(int i = 0; i < t; i++)
        {
            int n = input.nextInt();
            int sum = 0;
            for(int j = 0; j < n; j++)
            {
                int number = input.nextInt();
                sum += number;
            }
            System.out.println(sum);
        }
        input.close();
    }
}
