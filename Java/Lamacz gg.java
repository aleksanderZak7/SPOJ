import java.util.Map;
import java.util.HashMap;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        Map<Character, Integer> firstLetterValue = new HashMap<>();
        Map<Character, Integer> secondLetterValue = new HashMap<>();
        for (char c = 'A'; c <= 'P'; c++) 
        {
            firstLetterValue.put(c, c - 'A'); 
            secondLetterValue.put(c, (c - 'A') * 16);
        }
        while (input.hasNextLine()) 
        {
            String encodedPassword = input.nextLine();
            StringBuilder decodedPassword = new StringBuilder();
            for (int i = 0; i < encodedPassword.length(); i += 2) 
            {
                char firstChar = encodedPassword.charAt(i);
                char secondChar = encodedPassword.charAt(i + 1);
                int first = firstLetterValue.get(firstChar);
                int second = secondLetterValue.get(secondChar);
                char decodedChar = (char) (first + second);
                decodedPassword.append(decodedChar);
            }
            System.out.println(decodedPassword);
        }
        input.close();
    }
}