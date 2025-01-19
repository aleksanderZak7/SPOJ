import java.util.Scanner;

public class Main 
{
    public static String calculateGrades(String activity) 
    {
        int pluses = 0;
        int minuses = 0;
        for (char c : activity.toCharArray()) 
        {
            if (c == '+') 
                pluses++;
            else if (c == '-') 
                minuses++;
        }
        int difference = pluses - minuses;
        if (difference > 0) 
        {
            int fives = difference / 3;
            return fives > 0 ? "5 ".repeat(fives).trim() : "BRAK";
        } 
        else if (difference < 0) 
        {
            int ones = Math.abs(difference) / 3;
            return ones > 0 ? "1 ".repeat(ones).trim() : "BRAK";
        } 
        else
            return "BRAK";
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        System.out.print(calculateGrades(input.nextLine()));
        input.close();
    }
}