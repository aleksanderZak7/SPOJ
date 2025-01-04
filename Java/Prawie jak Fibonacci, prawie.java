import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] sequence = new int[n];
        for (int i = 0; i < n; i++)
            sequence[i] = input.nextInt();
        int count = 0;
        for (int i = 2; i < n; i++)
            if (sequence[i] == sequence[i - 1] + sequence[i - 2])
                count++;
        System.out.print(count);
        input.close();
    }
}