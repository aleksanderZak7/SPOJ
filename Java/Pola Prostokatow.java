import java.util.Scanner;

public class Main 
{
    public static int calculateArea(int x1, int y1, int x2, int y2) 
    {
        return (x2 - x1) * (y2 - y1);
    }

    public static int intersectionArea(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) 
    {
        int ix1 = Math.max(x1, x3);
        int iy1 = Math.max(y1, y3);
        int ix2 = Math.min(x2, x4);
        int iy2 = Math.min(y2, y4);
        if (ix1 < ix2 && iy1 < iy2)
            return calculateArea(ix1, iy1, ix2, iy2);
        else
            return 0;
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int x1 = input.nextInt();
        int y1 = input.nextInt();
        int x2 = input.nextInt();
        int y2 = input.nextInt();
        int x3 = input.nextInt();
        int y3 = input.nextInt();
        int x4 = input.nextInt();
        int y4 = input.nextInt();
        int area1 = calculateArea(x1, y1, x2, y2);
        int area2 = calculateArea(x3, y3, x4, y4);
        int interArea = intersectionArea(x1, y1, x2, y2, x3, y3, x4, y4);
        System.out.println(area1 + area2 - interArea);
        input.close();
    }
}