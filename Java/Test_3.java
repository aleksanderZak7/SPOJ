import java.util.Scanner;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        boolean output = true;
        boolean forty_two = false;
        int lifes = 3;
        while (input.hasNextInt()) 
        {
            int number = input.nextInt();
            if (output)
                System.out.println(number);
            if (number != 42)
                forty_two = true;
            else
            {
                if (forty_two) 
                {
                    forty_two = false;
                    lifes--;
                    if (lifes == 0)
                        output = false;
                }
            }

        }
        input.close();
    }
}
