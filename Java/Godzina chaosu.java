import java.util.Scanner;

public class Main 
{

    public static String toString(int hours, int minutes, boolean output) 
    {
        if (output)
            return String.format("%02d:%02d", hours, minutes);
        else 
        {
            if (hours == 0)
                return String.format("%d", minutes);
            else if (minutes < 10)
                return String.format("%d0%d", hours, minutes);
            else
                return String.format("%d%d", hours, minutes);
        }
    }

    public static boolean isPalindromic(int hours, int minutes) 
    {
        String str = toString(hours, minutes, false);
        int length = str.length();
        for (int i = 0; i < length / 2; i++) 
        {
            if (str.charAt(i) != str.charAt(length - 1 - i))
                return false;
        }
        return true;
    }

    public static void incrementTime(int[] time) 
    {
        int hours = time[0];
        int minutes = time[1];
        if (minutes < 59)
            time[1]++;
        else 
        {
            time[1] = 0;
            if (hours < 23)
                time[0]++;
            else
                time[0] = 0;
        }
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        while (t-- > 0) 
        {
            String timeInput = input.nextLine();
            String[] parts = timeInput.split(":");
            int hours = Integer.parseInt(parts[0]);
            int minutes = Integer.parseInt(parts[1]);
            int[] time = { hours, minutes };
            do 
            {
                incrementTime(time);
            } while (!isPalindromic(time[0], time[1]));
            System.out.println(toString(time[0], time[1], true));
        }
        input.close();
    }
}