import java.util.*;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int D = input.nextInt(); 
        for (int i = 0; i < D; i++) 
        {
            int N = input.nextInt();
            int[] points = new int[N];
            for (int j = 0; j < N; j++)
                points[j] = input.nextInt();
            Arrays.sort(points);
            int mx = points[N - 1]; 
            int how_many = 0; 
            for (int point : points)
                if (point == mx)
                    how_many++;
            StringBuilder output = new StringBuilder();
            for (int j = 0; j < how_many; j++)
                output.append(mx).append(" ");
            for (int j = 0; j < N - how_many; j++)
                output.append(points[j]).append(" ");
            System.out.println(output.toString().trim());
        }
        input.close();
    }
}
