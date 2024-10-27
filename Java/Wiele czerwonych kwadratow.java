import java.util.Scanner;

public class Main 
{
    public static long countRed(long x, long y) 
    {
        if (x < y) 
        {
            long temp = x;
            x = y;
            y = temp;
        }
        if (x < 2 || y == 0)
            return 0;
        if (y < 2)
            return x / 2;
        else
            return ((6 + (y / 2 - 1) * 4) / 2) * (y / 2) + ((x - y + (y % 2)) / 2) * y;
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        long XLD = input.nextLong();
        long YLD = input.nextLong();
        long XPG = input.nextLong();
        long YPG = input.nextLong();
        System.out.println(countRed(XPG, YPG) + countRed(XLD, YLD) - countRed(XPG, YLD) - countRed(XLD, YPG));
        input.close();
    }
}