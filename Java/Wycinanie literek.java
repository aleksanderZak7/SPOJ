import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        while (input.hasNextLine()) 
        {
            String data = input.nextLine();
            System.out.println(data.substring(2).replace(data.substring(0, 1), ""));
        }
        input.close();
    }
}
