import java.util.Scanner;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int[] stack = new int[10];
        int topIndex = -1;
        while (true) 
        {
            try {
                char operation = input.next().charAt(0);
                if (operation == '+') 
                {
                    int numberToAdd = input.nextInt();
                    if (topIndex + 1 >= 10)
                        System.out.println(":(");
                    else 
                    {
                        stack[++topIndex] = numberToAdd;
                        System.out.println(":)");
                    }
                } 
                else 
                {
                    if (topIndex == -1)
                        System.out.println(":(");
                    else
                        System.out.println(stack[topIndex--]);
                }
            } catch (Exception ex) {
                break;
            }
        }
        input.close();
    }
}
