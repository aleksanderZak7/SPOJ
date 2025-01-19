import java.util.List;
import java.util.Scanner;
import java.util.ArrayList;

public class Main 
{
    public static String calculateGrades(String activity) 
    {
        List<String> grades = new ArrayList<>();
        List<Character> stack = new ArrayList<>();
        for (char c : activity.toCharArray()) 
        {
            if (!stack.isEmpty() && stack.get(stack.size() - 1) != c) 
                stack.remove(stack.size() - 1);
            else 
            {
                stack.add(c);
                if (stack.size() == 3) 
                {
                    grades.add(c == '+' ? "5" : "1");
                    stack.clear();
                }
            }
        }
        return grades.isEmpty() ? "BRAK" : String.join(" ", grades);
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println(calculateGrades(scanner.nextLine()));
        scanner.close();
    }
}