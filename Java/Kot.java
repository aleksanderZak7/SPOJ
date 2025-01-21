import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        int i = 0, count = 0;
        while (i < s.length()) 
        {
            int kIndex = -1, oIndex = -1, tIndex = -1;
            for (int j = i; j < s.length(); j++) 
            {
                if (s.charAt(j) == 'k' && kIndex == -1)
                    kIndex = j;
                else if (s.charAt(j) == 'o' && kIndex != -1 && oIndex == -1)
                    oIndex = j;
                else if (s.charAt(j) == 't' && oIndex != -1 && tIndex == -1) 
                {
                    tIndex = j;
                    break;
                }
            }
            if (kIndex != -1 && oIndex != -1 && tIndex != -1) 
            {
                count++;
                i = tIndex + 1;
            } 
            else
                break;
        }
        System.out.print(count == 0 ? "NIE" : count);
        input.close();
    }
}