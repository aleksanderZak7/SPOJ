import java.util.Scanner;

public class Main
{
    private static int hexToDec(char high, char low) 
    {
        int value = 0;
        value += (low >= 'A') ? (low - 'A' + 10) : (low - '0');
        value += (high >= 'A') ? (high - 'A' + 10) * 16 : (high - '0') * 16;
        return value;
    }

    public static void main(String[] args) 
    {
        int index = 1;
        Scanner input = new Scanner(System.in);
        String line = input.next();
        while (index < line.length()) 
        {
            int sum = 0;
            for (int i = 0; i < 3; i++) 
            {
                char high = line.charAt(index++);
                char low = line.charAt(index++);
                sum += hexToDec(high, low);
            }
            index++;
            System.out.print((char)sum);
        }
        input.close();
    }
}