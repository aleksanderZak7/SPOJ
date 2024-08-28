import java.util.Scanner;

class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        while(true)
        {
            String n = input.nextLine();
            if( n.equals("0"))
                break;
            char[] numbers = n.toCharArray();
            int sum = 0;
            for(char number : numbers)
                sum += Character.getNumericValue(number);
            if(sum % 3 == 0 && Character.getNumericValue(numbers[numbers.length - 1]) % 5 == 0)
                System.out.println("TAK");
            else 
                System.out.println("NIE");
        }
        input.close();
    }
}