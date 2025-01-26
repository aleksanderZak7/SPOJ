import java.util.Scanner;

public class Main 
{
    public static void printPyramid(int n, String s) 
    {
        int mid = n / 2;
        for (int i = mid; i >= 0; i--) 
        {
            String left = ".".repeat(i);
            String middle = s.substring(i, n - i);
            System.out.println(left + middle + left);
        }
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String s = input.next();
        printPyramid(n, s);
        input.close();
    }
}