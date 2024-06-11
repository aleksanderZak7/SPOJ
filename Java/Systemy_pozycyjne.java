import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i = 0; i < t; i++) 
        {
            int n = input.nextInt();
            System.out.println(changeSystem(n, 16) + " " + changeSystem(n, 11));
        }
        input.close();
    }

    private static String changeSystem(int n, int system) 
    {
        List<Character> results = new ArrayList<>();
        char[] symbols = "0123456789ABCDEF".toCharArray();
        while (n != 0) 
        {
            results.add(symbols[n % system]);
            n /= system;
        }
        StringBuilder resultBuilder = new StringBuilder();
        for (int i = results.size() - 1; i >= 0; i--)
            resultBuilder.append(results.get(i));
        return resultBuilder.toString();
    }
}
