import java.util.Arrays;
import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] numbers = new int[n];
        for (int i = 0; i < n; i++) 
            numbers[i] = input.nextInt();
        Arrays.sort(numbers);
        int result = (n % 2 != 0) ? numbers[n / 2] : numbers[(n + 1) / 2];
        System.out.println(result);
        input.close();
    }
}