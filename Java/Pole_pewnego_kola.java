import java.util.Scanner;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        double r = input.nextDouble();
        double d = input.nextDouble();
        double S = 3.141592654 * (r * r - (d / 2) * (d / 2));
        S = Math.round(S * 100.0) / 100.0;
        System.out.println(S);
        input.close();
    }
}
