import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int n = Integer.parseInt(input.nextLine());
        for (int i = 0; i < n; i++) 
        {
            String[] numbers = input.nextLine().split(" ");
            List<String> odd = new ArrayList<>();
            List<String> even = new ArrayList<>();
            for (int j = 1; j < numbers.length; j += 2)
                even.add(numbers[j]);
            for (int j = 2; j < numbers.length; j += 2)
                odd.add(numbers[j]);
            List<String> result = new ArrayList<>();
            result.addAll(odd);
            result.addAll(even);
            System.out.println(String.join(" ", result));
        }
        input.close();
    }
}
