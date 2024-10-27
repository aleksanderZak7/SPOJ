import java.util.List;
import java.util.Scanner;
import java.util.ArrayList;

public class Main 
{
    private static void calculateBellTimes(int currentHour, int currentMinute, List<Integer> breaks) 
    {
        final int lessonDuration = 45;
        boolean first = true;
        for (int i = 0; i <= breaks.size(); i++) 
        {
            if (!first) System.out.print(',');
            System.out.print(String.format("%i:%i", currentHour, currentMinute));
            first = false;
            currentMinute += lessonDuration;
            currentHour += currentMinute / 60;
            currentMinute %= 60;
            if (i < breaks.size()) 
            {
                System.out.print(',');
                System.out.print(String.format("%i:%i", currentHour, currentMinute));
                currentMinute += breaks.get(i);
                currentHour += currentMinute / 60;
                currentMinute %= 60;
            }
        }
        System.out.println();
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        String startTime = input.next();
        int startHour = Integer.parseInt(startTime.substring(0, 2));
        int startMinute = Integer.parseInt(startTime.substring(3, 2));
        List<Integer> breaks = new ArrayList<>();
        while (input.hasNextInt()) 
        {
            breaks.add(input.nextInt());
        }
        calculateBellTimes(startHour, startMinute, breaks);
        input.close();
    }
}