import java.util.Scanner;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        while (true) 
        {
            try {
                String symbol = input.next();
                int a = input.nextInt();
                int b = input.nextInt();
                System.out.println(performOperation(symbol.charAt(0), a, b));
            } catch (Exception ex) {
                break;
            }
        }
        input.close();
    }

    private static int performOperation(char symbol, int a, int b) 
    {
        switch (symbol) 
        {
            case '+':
                return a + b;
            case '-':
                return a - b;
            case '*':
                return a * b;
            case '/':
                return a / b;
        }
        return a % b;
    }
}
