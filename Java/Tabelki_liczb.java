import java.util.Scanner;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for(int i = 0; i < t; i++) 
        {
            int l = input.nextInt();
            int k = input.nextInt();
            int[][] table = new int[l][k];
            for(int j = 0; j < l; j++) 
                for(int m = 0; m < k; m++)
                    table[j][m] = input.nextInt();
            rotateRows(table);
            for(int[] row : table) 
            {
                for(int num : row)
                    System.out.print(num + " ");
                System.out.println();
            }
        }
        input.close();
    }

    private static void rotateRows(int[][] table) 
    {
        int l = table.length;
        int k = table[0].length;
        int[] temp = new int[4];
        temp[0] = table[0][0];
        temp[1] = table[l-1][0];
        temp[2] = table[l-1][k-1];
        temp[3] = table[1][k-1];
        for(int i = 0; i < k - 1; i++) 
            table[0][i] = table[0][i + 1];
        for(int i = l - 1; i > 0; i--)
            table[i][0] = table[i - 1][0];
        for(int i = k - 1; i > 0; i--)
            table[l - 1][i] = table[l - 1][i - 1];
        for(int i = 0; i < l - 1; i++)
            table[i][k - 1] = table[i + 1][k - 1];
        table[1][0] = temp[0];
        table[l-1][1] = temp[1];
        table[l-2][k-1] = temp[2];
        table[0][k-1] = temp[3];
    }
}
