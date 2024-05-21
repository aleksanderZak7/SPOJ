import java.util.Scanner;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int i = 0; i < n; i++) 
        {
            int size = input.nextInt();
            int[] array = new int[size];
            for (int j = 0; j < size; j++)
                array[j] = input.nextInt();
            for (int j = size - 1; j >= 0; j--)
                System.out.print(array[j] + " ");
            System.out.println();
        }
        input.close();
    }
}
