import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        String bin1 = input.next();
        String bin2 = input.next();
        String bin3 = input.next();
        String bin4 = input.next();
        System.out.println(String.format("%02d:%02d", Integer.parseInt(bin1, 2) * 10 + Integer.parseInt(bin2, 2),Integer.parseInt(bin3, 2) * 10 + Integer.parseInt(bin4, 2)));
        input.close();
    }
}