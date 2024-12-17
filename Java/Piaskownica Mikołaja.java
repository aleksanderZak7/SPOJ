import java.util.Arrays;
import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int[] boards = new int[4];
        for (int i = 0; i < 4; i++)
            boards[i] = input.nextInt();
        Arrays.sort(boards);
        System.out.println(boards[0] * boards[2]);
        input.close();
    }
}