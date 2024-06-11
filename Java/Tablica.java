import java.util.Scanner;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        String numbers = input.nextLine();
        String[] data = numbers.split(" ");
        for(int i = data.length - 1; i >= 0; i--)
            System.out.print(data[i] + " ");
        input.close();
    }
}
