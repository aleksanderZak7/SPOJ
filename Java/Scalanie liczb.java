import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        Long a1 = input.nextLong();
        Long a2 = input.nextLong();
        Long b1 = input.nextLong();
        Long b2 = input.nextLong();
        System.out.print(Long.parseLong(a1 + "" + a2) + Long.parseLong(b1 + "" + b2));
        input.close();
    }
}