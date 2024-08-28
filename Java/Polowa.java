import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        for (int i = 0; i < t; i++) 
        {
            String str = input.nextLine();
            System.out.println(processString(str));
        }
        input.close();
    }

    private static String processString(String str) 
    {
        int half = str.length() / 2;
        return str.substring(0, half);
    }
}