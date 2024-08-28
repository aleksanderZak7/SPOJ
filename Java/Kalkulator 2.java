import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int[] Numbers = new int[10];
        while(true)
        {
            try {
                char Symbol = input.next().charAt(0);
                int a = input.nextInt();
                int b = input.nextInt();
                switch(Symbol)
                {
                    case 'z':
                        Numbers[a] = b;
                        break;
                    case '+':
                        System.out.println(Numbers[a] + Numbers[b]);
                        break;
                    case '-':
                        System.out.println(Numbers[a] - Numbers[b]);
                        break;
                    case '*':
                        System.out.println(Numbers[a] * Numbers[b]);
                        break;
                    case '/':
                        System.out.println(Numbers[a] / Numbers[b]);
                        break;
                    case '%':
                        System.out.println(Numbers[a] % Numbers[b]);
                        break;
                }
            } catch(Exception exc) {
                break;
            }
        }
        input.close();
    }
}
