import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        String rook1 = scanner.next();
        String rook2 = scanner.next();
        System.out.println((rook1.charAt(0) == rook2.charAt(0) || rook1.charAt(1) == rook2.charAt(1)) ? "TAK" : "NIE");
    }
}