import java.util.Arrays;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        final int MIN = -10;
        final int MAX = 10;
        final int WIDTH = 30;
        int[] occurrences = new int[MAX - MIN + 1];
        Scanner input = new Scanner(System.in);
        while (input.hasNextInt()) 
        {
            int number = input.nextInt();
            if (number >= MIN && number <= MAX)
                occurrences[number - MIN]++;
        }
        int maxOccurrence = Arrays.stream(occurrences).max().getAsInt();
        if (maxOccurrence > 0) 
        {
            for (int i = MIN; i <= MAX; i++) 
            {
                System.out.printf("%4d:|", i);
                int starsCount = (int) Math.round(WIDTH * occurrences[i - MIN] / (double) maxOccurrence);
                for (int j = 0; j < WIDTH; j++) 
                {
                    if (j < starsCount)
                        System.out.print('*');
                    else
                        System.out.print(' ');
                }
                System.out.println("|");
            }
        }
        input.close();
    }
}