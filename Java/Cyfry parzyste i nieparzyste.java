import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        final long mod = 1000000007;
        int n = input.nextInt();
        input.nextLine();
        while (n-- > 0) 
        {
            String number = input.nextLine();
            long combination = (number.length() > 0 && number.charAt(0) == 'p') ? (number.length() > 1 ? 4 : 5) : 5;
            for (int i = 1; i < number.length(); ++i)
                combination = (combination * 5) % mod;
            System.out.println(combination);
        }
        input.close();
    }
}