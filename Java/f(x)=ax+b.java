import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        if (a == 0) 
            System.out.println("f(x)=" + b);
        else if (a == 1) 
        {
            if (b != 0)
                System.out.println("f(x)=x" + (b > 0 ? "+" : "") + b);
            else
                System.out.println("f(x)=x");
        } 
        else if (a == -1) 
        {
            if (b != 0)
                System.out.println("f(x)=-x" + (b > 0 ? "+" : "") + b);
            else
                System.out.println("f(x)=-x");
        } 
        else if (b == 0)
            System.out.println("f(x)=" + a + "x");
        else
            System.out.println("f(x)=" + a + "x" + (b > 0 ? "+" : "") + b);
        input.close();
    }
}