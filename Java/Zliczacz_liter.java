import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        String alfabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int n = input.nextInt();
        input.nextLine(); 
        List<String> L = new ArrayList<>();
        Set<Character> S = new HashSet<>();
        for (int i = 0; i < n; i++) 
        {
            String x = input.nextLine().replace(" ", "");
            L.add(x);
            for (char c : x.toCharArray())
                S.add(c);
        }
        for (char i : alfabet.toCharArray()) 
        {
            if (S.contains(i)) 
            {
                int result = 0;
                for (String sentence : L) 
                {
                    for (char c : sentence.toCharArray())
                        if (c == i)
                            result++;
                }
                System.out.println(i + " " + result);
            }
        }
        input.close();
    }
}
