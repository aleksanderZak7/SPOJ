import java.util.Scanner;

public class Main
{
    public static boolean canFit(double A1, double B1, double A2, double B2) 
    {
        if (A1 < B1) 
        {
            double temp = A1;
            A1 = B1;
            B1 = temp;
        }
        if (A2 < B2) 
        {
            double temp = A2;
            A2 = B2;
            B2 = temp;
        }
        if (A1 > A2 && B1 > B2) 
            return true;
        else if (A1 <= A2 && B1 <= B2)
            return false;
        double d1 = Math.sqrt(A1 * A1 + B1 * B1);
        double d2 = Math.sqrt(A2 * A2 + B2 * B2);
        if (d1 <= d2)
            return false;
        double halfD2Squared = (0.5 * d2) * (0.5 * d2);
        double halfB1Squared = (0.5 * B1) * (0.5 * B1);
        double halfA1Squared = (0.5 * A1) * (0.5 * A1);
        if (halfD2Squared < halfB1Squared || halfD2Squared < halfA1Squared)
            return false;
        double a = 0.5 * A1 - Math.sqrt(halfD2Squared - halfB1Squared);
        double b = 0.5 * B1 - Math.sqrt(halfD2Squared - halfA1Squared);
        double c = Math.sqrt(a * a + b * b);
        return c > B2;
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t-- > 0) 
        {
            double A = input.nextDouble();
            double B = input.nextDouble();
            double C = input.nextDouble();
            double D = input.nextDouble();
            System.out.println(canFit(A, B, C, D) ? "TAK" : "NIE");
        }
        input.close();
    }
}