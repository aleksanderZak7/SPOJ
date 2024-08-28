import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int sum = 0;
        while(input.hasNextInt())
        {
            sum += input.nextInt();
            System.out.println(sum);
        }
        input.close();
    }
}