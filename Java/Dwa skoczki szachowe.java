import java.util.Scanner;

public class Main
{
    public static int[] chessPositionToCoordinates(String pos) 
    {
        int x = pos.charAt(0) - 'a' + 1;
        int y = pos.charAt(1) - '0';
        return new int[]{x, y};
    }

    public static String isValidMove(String pos1, String pos2) 
    {
        int[][] knightMoves = { {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2} };
        int[] coords1 = chessPositionToCoordinates(pos1);
        int[] coords2 = chessPositionToCoordinates(pos2);
        for (int[] move : knightMoves)
            if (coords1[0] + move[0] == coords2[0] && coords1[1] + move[1] == coords2[1])
                return "TAK";
        return "NIE";
    }

    public static void main(String[] args)
     {
        Scanner input = new Scanner(System.in);
        String knight1 = input.next();
        String knight2 = input.next();
        System.out.println(isValidMove(knight1, knight2));
        input.close();
    }
}