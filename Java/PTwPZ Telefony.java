import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        char[] letterToDigit = {'2', '2', '2', '3', '3', '3', '4', '4', '4', '5', '5', '5', '6', '6', '6', '7', '7', '7', '7', '8', '8', '8', '9', '9', '9', '9' };
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        for (int i = 0; i < N; i++) 
        {
            String text = input.next();
            StringBuilder result = new StringBuilder();
            for (char c : text.toCharArray())
                result.append(letterToDigit[c - 'A']);
            System.out.println(result.toString());
        }
        input.close();
    }
}
