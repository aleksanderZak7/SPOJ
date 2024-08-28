import java.util.Set;
import java.util.Scanner;
import java.util.TreeSet;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        while (input.hasNextLine()) 
        {
            String[] data = input.nextLine().split(" ");
            int j = Integer.parseInt(data[0]) - 1;
            Set<Integer> uniqueNumbers = new TreeSet<>((a, b) -> b - a);
            for (int i = 1; i < data.length; i++)
                uniqueNumbers.add(Integer.parseInt(data[i]));
            Integer[] sortedNumbers = uniqueNumbers.toArray(new Integer[0]);
            if (j < sortedNumbers.length)
                System.out.println(sortedNumbers[j]);
            else
                System.out.println("-");
        }
        input.close();
    }
}