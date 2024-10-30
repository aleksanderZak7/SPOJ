import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        String gesture = input.next().trim();
        switch (gesture) 
        {
            case "kamien":
                System.out.println("papier");
                break;
            case "nozyce":
                System.out.println("kamien");
                break;
            case "papier":
                System.out.println("nozyce");
                break;
            default:
                System.out.println("przegrales");
        }
        input.close();
    }
}