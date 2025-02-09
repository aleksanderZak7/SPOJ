import java.util.Scanner;

public class Main
{
    public static String runningShoesDecision(final int k) 
    {
        double miles = k / 1.609344;
        if (miles < 300) 
            return "NIE";
        else if (miles < 500) 
            return "SPRAWDZIMY TWOJE OBECNE BUTY";
        return "TAK";
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int k = input.nextInt();
        System.out.print(runningShoesDecision(k));
        input.close();
    }
}