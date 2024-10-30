import java.util.Arrays;
import java.util.Scanner;

public class Main 
{
    public static String triangleType(int a, int b, int c) 
    {
        int[] sides = {a, b, c};
        Arrays.sort(sides);
        a = sides[0];
        b = sides[1];
        c = sides[2];
        if (a + b <= c) 
            return "brak";
        int a2 = a * a, b2 = b * b, c2 = c * c;
        if (a2 + b2 == c2) 
            return "prostokatny";
        else if (a2 + b2 < c2)
            return "rozwartokatny";
        return "ostrokatny";
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        while (input.hasNextInt()) 
        {
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();
            System.out.println(triangleType(a, b, c));
        }
        input.close();
    }
}
