import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        final String[] coordinators = {"DAWID", "GRZESIEK", "MACIEK", "MARCIN", "MARIUSZ", "RAFAL"};
        int t = input.nextInt();
        for (int i = 0; i < t; i++) 
        {
            int n = input.nextInt();
            System.out.println(coordinators[(n - 1) / 7 % coordinators.length]);
        }
        input.close();
    }
}