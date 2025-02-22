import java.util.Map;
import java.util.List;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;
import java.util.ArrayList;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();
        List<String> indices = new ArrayList<>();
        Map<String, List<String>> anagramGroups = new HashMap<>();
        Map<String, Integer> firstOccurrence = new HashMap<>();
        for (int i = 0; i < n; i++) 
        {
            String index = input.nextLine();
            indices.add(index);
            char[] sortedChars = index.toCharArray();
            Arrays.sort(sortedChars);
            String sortedIndex = new String(sortedChars);
            anagramGroups.putIfAbsent(sortedIndex, new ArrayList<>());
            if (!firstOccurrence.containsKey(sortedIndex))
                firstOccurrence.put(sortedIndex, i);
            anagramGroups.get(sortedIndex).add(index);
        }
        String bestGroup = "";
        int maxSize = 0, earliestIndex = n;
        for (Map.Entry<String, List<String>> group : anagramGroups.entrySet()) 
        {
            int size = group.getValue().size();
            int firstIndex = firstOccurrence.get(group.getKey());
            if (size > maxSize || (size == maxSize && firstIndex < earliestIndex)) 
            {
                maxSize = size;
                earliestIndex = firstIndex;
                bestGroup = group.getKey();
            }
        }
        for (String index : anagramGroups.get(bestGroup))
            System.out.println(index);
        input.close();
    }
}