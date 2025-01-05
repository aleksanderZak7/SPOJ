import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        int increase = 0;
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] heights = new int[n];
        for (int i = 0; i < n; i++)
            heights[i] = input.nextInt();
        for (int i = 1; i < n - 1; i++)
            if (heights[i - 1] < heights[i] && heights[i] > heights[i + 1])
                increase++;
        System.out.print(increase);
        input.close();
    }
}