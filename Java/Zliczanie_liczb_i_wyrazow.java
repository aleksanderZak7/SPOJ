import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        while (input.hasNextLine()) 
        {
            String[] data = input.nextLine().split(" ");
            int numbers = 0;
            int words = 0;
            for (String word : data) 
            {
                boolean isNumber = true;
                for (char symbol : word.toCharArray()) 
                {
                    if (!Character.isDigit(symbol)) 
                    {
                        isNumber = false;
                        break;
                    }
                }
                if (isNumber)
                    numbers++;
                else
                    words++;
            }
            System.out.println(numbers + " " + words);
        }
        input.close();
    }
}