import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int d = input.nextInt();
        while (d-- > 0) 
        {
            int stasWin = input.nextInt();
            int stasLoss = input.nextInt();
            int wiesWin = input.nextInt();
            int wiesLoss = input.nextInt();
            int grzWin = input.nextInt();
            int grzLoss = input.nextInt();
            int totalGames = stasWin + stasLoss;
            System.out.println(((stasLoss + wiesLoss + grzLoss) - totalGames) + " " + ((stasWin + wiesWin + grzWin) - totalGames));
        }
        input.close();
    }
}