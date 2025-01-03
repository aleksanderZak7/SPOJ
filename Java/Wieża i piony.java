import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int M = input.nextInt();
        int N = input.nextInt();
        input.nextLine();
        String[] board = new String[M];
        for (int i = 0; i < M; i++)
            board[i] = input.nextLine();
        int[] rowCounts = new int[M];
        int[] colCounts = new int[N];
        for (int i = 0; i < M; i++)
            for (int j = 0; j < N; j++)
                if (board[i].charAt(j) == '#') 
                {
                    rowCounts[i]++;
                    colCounts[j]++;
                }
        int maxAttacked = 0;
        for (int i = 0; i < M; i++)
            for (int j = 0; j < N; j++)
                if (board[i].charAt(j) == '.') 
                    maxAttacked = Math.max(maxAttacked, rowCounts[i] + colCounts[j]);
        System.out.print(maxAttacked);
        input.close();
    }
}