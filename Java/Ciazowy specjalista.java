import java.util.Scanner;
import java.lang.Math;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int D = input.nextInt();
        for(int i = 0; i < D; i++)
        {
            double X = input.nextDouble();
            double Y = input.nextDouble();
            double Z = input.nextDouble();
            System.out.println(Math.round(Math.abs((12 / (Z - 1) * ((X + Y) - (Z * Y))))));
        }
        input.close();
    }
}