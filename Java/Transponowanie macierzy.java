import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        int n = scanner.nextInt();
        int[][] matrix = new int[m][n];
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++)
                matrix[i][j] = scanner.nextInt();
        }
        int[][] transposed = new int[n][m];
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++)
                transposed[j][i] = matrix[i][j];
        }
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++)
                System.out.print(transposed[i][j] + " ");
        }
        System.out.println();
    }
}