import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt();
        int k1 = input.nextInt();
        int n2 = input.nextInt();
        int k2 = input.nextInt();
        System.out.println(n1 * k1 + n2 * k2);
        input.close();
    }
}