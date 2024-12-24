import java.util.List;
import java.util.Scanner;
import java.util.ArrayList;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int k = input.nextInt();
        int n = input.nextInt();
        int x = (n - (k * (k - 1)) / 2) / k;
        List<Integer> result = new ArrayList<>();
        for (int i = 0; i < k; ++i)
            result.add(x + i);
        for (final int num : result)
            System.out.print(num + " ");
        input.close();
    }
}