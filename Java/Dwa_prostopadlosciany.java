import java.util.Arrays;
import java.util.Scanner;

class Main
{
    public static boolean canFit(int[] first, int[] second) 
    {
        Arrays.sort(first);
        Arrays.sort(second);
        return (first[0] <= second[0] && first[1] <= second[1] && first[2] <= second[2]) || (first[0] >= second[0] && first[1] >= second[1] && first[2] >= second[2]);
    }

    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int[] first = new int[3];
        for (int i = 0; i < 3; i++)
            first[i] = input.nextInt();
        int[] second = new int[3];
        for (int i = 0; i < 3; i++)
            second[i] = input.nextInt();
        if (canFit(first, second))
            System.out.println("tak");
        else
            System.out.println("nie");
        input.close();
    }
}