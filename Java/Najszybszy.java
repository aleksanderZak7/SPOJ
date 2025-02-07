import java.util.Arrays;
import java.util.Scanner;

public class Main 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int[] times = {input.nextInt(), input.nextInt(), input.nextInt()};
        int minTime = Arrays.stream(times).min().getAsInt();
        if (Arrays.stream(times).filter(t -> t == minTime).count() == 1)
            System.out.println("TAK " + (Arrays.asList(times[0], times[1], times[2]).indexOf(minTime) + 1));
        else
            System.out.println("NIE");
        input.close();
    }
}