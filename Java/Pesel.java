import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        int[] weights = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1};
        for (int i = 0; i < t; i++) 
        {
            String pesel = input.nextLine().trim();
            int result = 0;
            for (int j = 0; j < 11; j++)
                result += Character.getNumericValue(pesel.charAt(j)) * weights[j];
            if (result % 10 == 0)
                System.out.println("D");
            else
                System.out.println("N");
        }

        input.close();
    }
}