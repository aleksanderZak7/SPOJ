import java.util.Scanner;
import java.util.Vector;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();
        Vector<String> syllables = new Vector<>(n);
        for (int i = 0; i < n; i++)
            syllables.add(input.next());
        for (int i = 0; i < n - 1; i++) 
        {
            if (syllables.get(i).equals("ma") && syllables.get(i + 1).equals("ma")) 
            {
                System.out.println("mama");
                break;
            } 
            else if (syllables.get(i).equals("ta") && syllables.get(i + 1).equals("ta")) 
            {
                System.out.println("tata");
                break;
            }
        }
        input.close();
    }
}