import java.util.Map;
import java.util.HashMap;
import java.util.Scanner;

public class Main
{
    private static int calculateScore(String cards) 
    {
        Map<Character, Integer> cardValues = new HashMap<>();
        char[] cardOrder = "23456789TJQKA".toCharArray();
        for (int i = 0; i < cardOrder.length; i++)
            cardValues.put(cardOrder[i], i + 2);
        int score = 0;
        for (char card : cards.toCharArray())
            score += cardValues.get(card);
        return score;
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        String jasio = input.nextLine().trim();
        String stasio = input.nextLine().trim();
        int jasioScore = calculateScore(jasio);
        int stasioScore = calculateScore(stasio);
        if (jasioScore > stasioScore)
            System.out.print("JASIO");
        else if (stasioScore > jasioScore)
            System.out.print("STASIO");
        else
            System.out.print("REMIS");
        input.close();
    }
}