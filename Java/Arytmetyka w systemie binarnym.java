import java.util.Scanner;
import java.util.ArrayList;

public class Main 
{
    public static void main(String[] args) 
    {
        long a_dec = 0;
        long b_dec = 0;
        Scanner scanner = new Scanner(System.in);
        int k = scanner.nextInt();
        int n = scanner.nextInt();
        ArrayList<Integer> a = new ArrayList<>();
        ArrayList<Integer> b = new ArrayList<>();
        for (int i = 0; i < k; i++)
            a.add(scanner.nextInt());
        for (int i = 0; i < n; i++)
            b.add(scanner.nextInt());
        for (int bit : a)
            a_dec = (a_dec << 1) | bit;
        for (int bit : b)
            b_dec = (b_dec << 1) | bit;
        long sum_dec = a_dec + b_dec;
        if (sum_dec == 0)
            System.out.print(0);
        else 
        {
            StringBuilder sum_bin = new StringBuilder();
            while (sum_dec > 0) 
            {
                sum_bin.insert(0, sum_dec % 2);
                sum_dec /= 2;
            }
            System.out.print(sum_bin.toString());
        }
        scanner.close();
    }
}