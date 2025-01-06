import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int y = input.nextInt();
        for (int i = x; i <= y; i++) 
        {
            if (i % 6 == 0) 
                System.out.print("ab");
            else if (i % 2 == 0)
                System.out.print('a'); 
            else if (i % 3 == 0) 
                System.out.print('b');
        }
        input.close();
    }
}