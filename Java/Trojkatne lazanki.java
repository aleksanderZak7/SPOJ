import java.util.Set;
import java.util.HashSet;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        boolean success = false;
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        Set<Long> triangleSizes = new HashSet<>();
        for (int i = 0; i < n; i++) 
        {
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();
            int p = a + b + c;
            long s = (long) p * (p - a) * (p - b) * (p - c);
            if (triangleSizes.contains(s))
                success = true;
            triangleSizes.add(s);
        }
        System.out.print(success ? "Tak" : "Nie");
    }
}