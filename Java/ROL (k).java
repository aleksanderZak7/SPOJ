import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] Numbers = new int[n];
        for (int i = 0; i < n; i++)
            Numbers[i] = input.nextInt();
        int startIndex = (k % n + n) % n;
        for (int i = 0; i < n; i++) 
        {
            int index = (startIndex + i) % n;
            System.out.print(Numbers[index] + " ");
        }
        input.close();
    }
}