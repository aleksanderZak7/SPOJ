import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int D = input.nextInt();
        for (int i = 0; i < D; i++) 
        {
            int L = input.nextInt();
            int C = input.nextInt();
            if (L == 1 || C % (L - 1) != 0)
                System.out.println("TAK");
            else
                System.out.println("NIE");
        }
        input.close();
    }
}
