import java.util.HashSet;
import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int k = input.nextInt();
        input.nextLine();
        HashSet<Character> doubledLetters = new HashSet<>();
        String[] letters = input.nextLine().split(" ");
        for (String letter : letters)
            doubledLetters.add(letter.charAt(0));
        String word = input.nextLine();
        StringBuilder result = new StringBuilder();
        for (char c : word.toCharArray())
        {
            result.append(c);
            if (doubledLetters.contains(c))
                result.append(c);
        }
        System.out.print(result);
        input.close();
    }
}