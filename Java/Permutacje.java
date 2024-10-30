import java.util.Map;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;
import java.util.Collections;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int Z = input.nextInt();
        while (Z-- > 0) 
        {
            int n = input.nextInt();
            Map<String, Integer> frequencyMap = new HashMap<>();
            for (int i = 0; i < n; i++) 
            {
                String word = input.next();
                char[] letters = word.toCharArray();
                Arrays.sort(letters);
                String sortedWord = new String(letters);
                frequencyMap.put(sortedWord, frequencyMap.getOrDefault(sortedWord, 0) + 1);
            }
            int maxCount = Collections.max(frequencyMap.values());
            System.out.println(maxCount);
        }
        input.close();
    }
}