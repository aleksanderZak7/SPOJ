import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine();
        String[] results = new String[t];
        for (int i = 0; i < t; i++) 
        {
            String line = scanner.nextLine();
            String[] parts = line.split(" ");
            String s1 = parts[0];
            String s2 = parts[1];
            results[i] = stringMerge(s1, s2);
        }
        for (String result : results)
            System.out.println(result);
        scanner.close();
    }

    public static String stringMerge(String s1, String s2) 
    {
        StringBuilder mergedString = new StringBuilder();
        int minLength = Math.min(s1.length(), s2.length());
        for (int i = 0; i < minLength; i++)
            mergedString.append(s1.charAt(i)).append(s2.charAt(i));
        return mergedString.toString();
    }
}
