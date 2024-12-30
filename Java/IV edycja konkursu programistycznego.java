import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int sum = 5;
        for (int i = 0; i < 5; i++)
            sum += input.nextInt();
        System.out.println(sum);
        input.close();
    }
}