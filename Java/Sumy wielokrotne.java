import java.util.Scanner;

class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        long total_sum = 0;
        while (input.hasNextLine()) 
        {
            long sum = 0;
            String line = input.nextLine();
            String[] data = line.split(" ");
            for (String number : data)
                sum += Integer.parseInt(number);
            System.out.println(sum);
            total_sum += sum;
        }
        System.out.println(total_sum);
        input.close();
    }
}