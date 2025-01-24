import java.util.Map;
import java.util.HashMap;
import java.util.Scanner;
import java.util.Collections;

public class Main 
{
    public static void main(String[] args) 
    {
        Map<String, Integer> daysOfTheWeek = new HashMap<>();
        daysOfTheWeek.put("pon", 0);
        daysOfTheWeek.put("wt", 0);
        daysOfTheWeek.put("sr", 0);
        daysOfTheWeek.put("czw", 0);
        daysOfTheWeek.put("pt", 0);
        daysOfTheWeek.put("sob", 0);
        daysOfTheWeek.put("niedz", 0);
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();
        String[] trainingDays = input.nextLine().split(" ");
        for (String day : trainingDays)
            daysOfTheWeek.put(day, daysOfTheWeek.get(day) + 1);
        int maxValue = Collections.max(daysOfTheWeek.values());
        System.out.print(maxValue + " " + n);
        input.close();
    }
}