import java.util.Scanner;

class Main 
{
    public static void main(String[] arg) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i = 0; i < t; i++) 
        {
            int a = input.nextInt();
            int b = input.nextInt();
            System.out.println(NWD(a, b));
        }
        input.close();
    }

    private static int NWD(int a, int b)
     {
        while (b != 0) 
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}
