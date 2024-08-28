import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        while(input.hasNextLine())
        {
            char[] letters =input.nextLine().toCharArray();
            String output = "";
            for(int i = letters.length - 1; i >= 0; i--)
            {
                output += letters[i];
            }
            System.out.println(output);
        }
        input.close();
    }
}