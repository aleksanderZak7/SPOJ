import java.util.HashSet;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    { 
        HashSet<String> tires = new HashSet<>();
        Scanner input = new Scanner(System.in);
        while (input.hasNextLine()) 
        {
            String line = input.nextLine().trim();
            if (tires.contains(line)) 
                tires.remove(line);
             else
                tires.add(line);
        }
        System.out.print(tires.iterator().next());
        input.close();
    }
}