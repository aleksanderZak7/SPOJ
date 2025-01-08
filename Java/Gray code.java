import java.util.Scanner;

public class Main
{
    public static void gray(int n, int[] tab, int k, boolean direction) 
    {
        if (k == n) 
        {
            for (int bit : tab)
                System.out.print(bit);
            System.out.println();
            return;
        }
        if (direction) 
        {
            tab[k] = 0;
            gray(n, tab, k + 1, true);
            tab[k] = 1;
            gray(n, tab, k + 1, false);
        } 
        else 
        {
            tab[k] = 1;
            gray(n, tab, k + 1, true);
            tab[k] = 0;
            gray(n, tab, k + 1, false);
        }
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for(int i = 0; i < t; i++) 
        {
            int n = input.nextInt();
            int[] tab = new int[n];
            gray(n, tab, 0, true);
            if (i > t - 1)
                System.out.println();
        }
        input.close();
    }
}