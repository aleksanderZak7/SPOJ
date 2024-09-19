import java.util.Scanner;

public class Main 
{
    public static char rot13(char c) 
    {
        if (c >= 'a' && c <= 'z')
            return (char) ((c - 'a' + 13) % 26 + 'a');
        else if (c >= 'A' && c <= 'Z')
            return (char) ((c - 'A' + 13) % 26 + 'A');
        else if (c >= '0' && c <= '9')
            return (char) ((c - '0' + 5) % 10 + '0');
        else
            return c;
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        while (input.hasNextLine()) 
        {
            String line = input.nextLine();
            for (char c : line.toCharArray())
                System.out.print(rot13(c));
            System.out.println();
        }
        input.close();
    }
}