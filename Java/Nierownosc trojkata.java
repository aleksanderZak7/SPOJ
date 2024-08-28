import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        while(input.hasNextDouble())
        {
            double a = input.nextDouble();
            double b = input.nextDouble();
            double c = input.nextDouble();
            int output = 0;
            if(a + b > c && a > 0 && b > 0 && c > 0)
                if(a + c > b)
                    if(c + b > a)
                        output = 1;
            System.out.println(output);
        }
        input.close();
    }
}
