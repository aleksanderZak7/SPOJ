import java.util.Scanner;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int D = input.nextInt();
        for (int i = 0; i < D; i++) 
        {
            int N = input.nextInt();
            int[] result = findTreasure(N, input);
            printResult(result);
        }
        input.close();
    }

    private static int[] findTreasure(int N, Scanner input) 
    {
        int North_steps = 0;
        int West_steps = 0;
        for (int i = 0; i < N; i++) 
        {
            int direction = input.nextInt();
            int steps = input.nextInt();
            if (direction == 0)
                North_steps += steps;
            else if (direction == 1)
                North_steps -= steps;
            else if (direction == 2)
                West_steps += steps;
            else
                West_steps -= steps;
        }
        int well = (North_steps == 0 ? 1 : 0) + (West_steps == 0 ? 1 : 0);
        return new int[]{well, North_steps, West_steps};
    }

    private static void printResult(int[] result) 
    {
        if (result[0] == 2)
            System.out.println("studnia");
        else 
        {
            if (result[1] != 0)
                System.out.println((result[1] > 0 ? "0 " : "1 ") + Math.abs(result[1]));
            if (result[2] != 0)
                System.out.println((result[2] > 0 ? "2 " : "3 ") + Math.abs(result[2]));
        }
    }
}
