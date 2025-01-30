import java.util.List;
import java.util.Arrays;
import java.util.Scanner;
import java.util.ArrayList;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        while (input.hasNextLine()) 
        {
            String line = input.nextLine();
            String[] message = line.split(" ");
            List<String> decoded_message = new ArrayList<>();
            for (String word : message) 
            {
                if (word.endsWith("."))
                    decoded_message.add(word.substring(0, 1) + " ");
                else
                    decoded_message.add(word.substring(0, 1));
            }
            for (String w : decoded_message)
                System.out.print(w);
            System.out.println();
        }
        input.close();
    }
}