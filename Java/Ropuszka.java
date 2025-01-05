import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int n = input.nextInt();
        String result = (n == 33) ? "WRACAJ" : (a < b) ? "W LEWO" : "W PRAWO";
        System.out.print(result);
        input.close();
    }
}