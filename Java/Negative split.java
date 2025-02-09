import java.util.List;
import java.util.Scanner;
import java.util.ArrayList;

public class Main
{
    private static int timeToSeconds(String time) 
    {
        String[] parts = time.split(":");
        return Integer.parseInt(parts[0]) * 3600 + Integer.parseInt(parts[1]) * 60 + Integer.parseInt(parts[2]);
    }

    public static void analyzeResults(int n, List<String> results) 
    {
        int a = 0, b = 0, c = 0, d = 0;
        for (String result : results) 
        {
            String[] timesStr = result.split(" ");
            int[] times = new int[6];
            for (int i = 0; i < 6; ++i) 
            {
                times[i] = timeToSeconds(timesStr[i]);
            }
            if (times[0] > (times[3] - times[2]) && times[1] >= times[0] && times[2] >= times[1] && times[3] >= times[2]) 
            {
                ++b;
                if (times[4] <= times[5]) 
                    ++a;
            } 
            else 
            {
                ++d;
                if (times[4] <= times[5]) 
                    ++c;
            }
        }
        System.out.print(a + "/" + b + " " + c + "/" + d);
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int n = Integer.parseInt(input.nextLine());
        List<String> results = new ArrayList<>();
        for (int i = 0; i < n; ++i)
            results.add(input.nextLine());
        analyzeResults(n, results);
        input.close();
    }
}