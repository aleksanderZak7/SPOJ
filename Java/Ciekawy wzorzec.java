import java.util.Scanner;

public class Main 
{
    public static boolean checkForPattern(String word, String pattern) 
    {
        int indexInPattern = 1;
        for (int i = 2; i < pattern.length() * 2; i += 2) 
        {
            if (word.charAt(i) == pattern.charAt(indexInPattern)) 
                indexInPattern++;
            else 
                return false;
        }
        return true;
    }

    public static void main(String[] args) 
    {
        int index = -1;
        Scanner input = new Scanner(System.in);
        String word = input.nextLine();
        String pattern = input.nextLine();
        for (int i = 0; i < word.length(); i++) 
            if (word.charAt(i) == pattern.charAt(0))
                if (checkForPattern(word.substring(i), pattern)) 
                {
                    index = i + 1;
                    break;
                }
        System.out.print(index == -1 ? "brak" : index);
        input.close();
    }
}