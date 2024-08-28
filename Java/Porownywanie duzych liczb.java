import java.util.Scanner;

class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        while (input.hasNextLine()) 
        {
            String[] data = input.nextLine().split(" ");
            int result = compareNumbers(data[0], data[1], data[2]);
            System.out.println(result);
        }
        input.close();
    }

    private static int compareNumbers(String num1, String operator, String num2) 
    {
        switch (operator) 
        {
            case "==":
                return num1.equals(num2) ? 1 : 0;
            case "!=":
                return !num1.equals(num2) ? 1 : 0;
            case ">=":
                if (num1.length() > num2.length()) 
                    return 1;
                if (num1.length() < num2.length()) 
                    return 0;
                for (int i = 0; i < num1.length(); i++) 
                {
                    if (num1.charAt(i) > num2.charAt(i)) 
                        return 1;
                    if (num1.charAt(i) < num2.charAt(i)) 
                        return 0;
                }
                return 1;
            case "<=":
                if (num1.length() < num2.length()) 
                    return 1;
                if (num1.length() > num2.length()) 
                    return 0;
                for (int i = 0; i < num1.length(); i++) 
                {
                    if (num1.charAt(i) < num2.charAt(i)) 
                        return 1;
                    if (num1.charAt(i) > num2.charAt(i)) 
                        return 0;
                }
                return 1;
        }
        return 0;
    }
}