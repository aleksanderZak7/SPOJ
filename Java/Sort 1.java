import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        for (int i = 0; i < t; i++) 
        {
            int n = input.nextInt();
            input.nextLine();
            String[][] points = new String[n][3];
            for (int j = 0; j < n; j++) 
            {
                String pointStr = input.nextLine();
                String[] data = pointStr.split(" ");
                int x = Integer.parseInt(data[1]);
                int y = Integer.parseInt(data[2]);
                int distance = x * x + y * y;
                points[j] = new String[]{pointStr, String.valueOf(distance)};
            }
            Arrays.sort(points, Comparator.comparingInt(p -> Integer.parseInt(p[1])));
            for (String[] point : points)
                System.out.println(point[0]);
        }
        input.close();
    }
}
