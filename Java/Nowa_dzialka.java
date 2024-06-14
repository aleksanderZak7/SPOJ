import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int D = input.nextInt();
        for(int i = 0; i < D; i++)
        {
            int X = input.nextInt();
            System.out.println(X * X);
        }
        input.close();
    }
}