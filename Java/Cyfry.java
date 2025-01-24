import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = Integer.parseInt(input.nextLine());
        while (t-- > 0) 
        {
            String word = input.nextLine();
            char firstDigit = '\0', lastDigit = '\0';
            for (char c : word.toCharArray()) 
            {
                if (Character.isDigit(c))
                 {
                    if (firstDigit == '\0')
                        firstDigit = c;
                    else
                        lastDigit = c;
                }
            }
            if (firstDigit != '\0' && lastDigit != '\0')
                System.out.println(firstDigit + " " + lastDigit);
            else
                System.out.println("BRAK");
        }
        input.close();
    }
}