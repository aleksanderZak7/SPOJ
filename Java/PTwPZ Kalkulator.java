import java.util.Scanner;

class Main 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int N = Integer.parseInt(input.nextLine());

        for (int i = 0; i < N; i++) 
        {
            String data = input.nextLine();
            int result = 0;
            boolean add = false;
            boolean subtract = false;
            for (int j = 0; j < data.length(); j++) 
            {
                char symbol = data.charAt(j);
                if (symbol == '+') 
                {
                    add = true;
                    subtract = false;
                } 
                else if (symbol == '-') 
                {
                    subtract = true;
                    add = false;
                } else 
                {
                    int number = Character.getNumericValue(symbol);
                    if (add) 
                    {
                        result += number;
                        add = false;
                    } 
                    else if (subtract) 
                    {
                        result -= number;
                        subtract = false;
                    } 
                    else
                        result = number;
                }
            }
            System.out.println(result);
        }
        input.close();
    }
}
