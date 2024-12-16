import java.util.Set;
import java.util.List;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner; 
import java.util.ArrayList; 

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Set<String> emotes = new HashSet<>(Arrays.asList(":)", ":(", ";)", ":D", ":P", "xD", ":>", "<3"));
        int n = scanner.nextInt();
        scanner.nextLine();
        for (int i = 0; i < n; i++) 
        {
            int m = scanner.nextInt();
            scanner.nextLine();
            String[] words = scanner.nextLine().split(" ");
            List<String> filtered = new ArrayList<>();
            for (String word : words) 
                if (!emotes.contains(word))
                    filtered.add(word);
            System.out.println(String.join(" ", filtered));
        }
    }
}