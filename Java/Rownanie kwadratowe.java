import java.util.Scanner;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        while (true) 
        {
            try {
                double a = input.nextDouble();
                double b = input.nextDouble();
                double c = input.nextDouble();
                System.out.println((int) equation(a, b, c));
            } catch (Exception ex) {
                break;
            }
        }
        input.close();
    }

    public static double equation(double a, double b, double c) 
    {
        double delta = (b * b - 4 * a * c);
        if (delta > 0)
            return 2;
        else if (delta == 0)
            return 1;
        else
            return 0;
    }
}
