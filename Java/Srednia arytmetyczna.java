import java.util.Scanner;
import java.lang.Math;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i = 0; i < t; i++) 
        {
            int n = input.nextInt();
            int[] numbers = new int[n];
            for (int j = 0; j < n; j++)
                numbers[j] = input.nextInt();
            System.out.println(findClosestToAverage(numbers));
        }
        input.close();
    }

    private static int findClosestToAverage(int[] numbers) 
    {
        int sum = 0;
        for (int number : numbers)
            sum += number;
        double average = (double) sum / numbers.length;
        int closestNumber = numbers[0];
        double smallestDifference = Math.abs(numbers[0] - average);
        for (int number : numbers) 
        {
            double currentDifference = Math.abs(number - average);
            if (currentDifference < smallestDifference) 
            {
                smallestDifference = currentDifference;
                closestNumber = number;
            }
        }
        return closestNumber;
    }
}
