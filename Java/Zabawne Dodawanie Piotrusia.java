import java.util.Scanner;

class Main 
{
    static int trials;

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        for (int i = 0; i < t; i++) 
        {
            String number = input.nextLine();
            trials = 0;
            System.out.println(palindrom(number) + " " + trials);
        }
        input.close();
    }

    static String palindrom(String number) 
    {
        String reverseNumber = "";
        for (int j = 0; j < number.length(); j++) 
        {
            char ch = number.charAt(j);
            reverseNumber = ch + reverseNumber;
        }
        if (number.equals(reverseNumber))
            return number;
        else 
        {
            int intNumber = Integer.parseInt(number);
            int intReverseNumber = Integer.parseInt(reverseNumber);
            trials++;
            return palindrom((intNumber + intReverseNumber) + "");
        }
    }
}
