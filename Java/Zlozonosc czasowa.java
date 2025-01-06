import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int k = input.nextInt();
        int maxDepth = 0;
        int currentDepth = 0;
        for (int i = 0; i < k; i++) 
        {
            String line = input.next();
            if (line.equals("for")) 
            {
                currentDepth++;
                maxDepth = Math.max(maxDepth, currentDepth);
            } 
            else if (line.equals("end"))
                currentDepth--;
        }
        if (maxDepth == 0)
            System.out.print("O(1)");
        else if (maxDepth == 1)
            System.out.print("O(n)");
        else
            System.out.print("O(n^" + maxDepth + ")");
        input.close();
    }
}