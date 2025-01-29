import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();
        for (int i = 0; i < n; i++) 
        {
            String binary = input.nextLine();
            StringBuilder decoded = new StringBuilder();
            for (int j = 0; j + 4 < binary.length(); j += 5) 
            {
                String group = binary.substring(j, j + 5);
                int num = Integer.parseInt(group, 2);
                char decodedChar = (char) ('A' + (num % 26));
                decoded.append(decodedChar);
            }
            System.out.println(decoded.toString());
        }
        input.close();
    }
}