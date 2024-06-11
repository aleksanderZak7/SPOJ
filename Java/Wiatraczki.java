import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int r;
        while(true)
        {
            String  Windmill = ""; 
            r = input.nextInt();
            if(r == 0)
                break;
            if(r > 0)
            {
                for(int i = 0; i < r; i++)
                {
                    for(int j = 0; j < r * 2; j++)
                    {
                        if(j < r && j >i)
                            Windmill += ".";
                        else if(j - r * 2 + i >= 0)
                            Windmill += ".";
                        else 
                            Windmill += "*";
                    }
                    Windmill += '\n';
                }
                for(int i = 0; i < r; i++)
                {
                    for(int j = 0; j < r * 2; j++)
                    {
                        if(j < r && j > i)
                            Windmill += ".";
                        else if(j >= r && -1 * (r - j) < i)
                            Windmill += ".";
                        else 
                            Windmill += "*";
                    }
                    Windmill += '\n';
                }
            }
            else 
            {
                r *= -1;
                for(int i = 0; i < r; i++)
                {
                    for(int j = 0; j < r * 2; j++)
                    {
                        if(j < i)
                            Windmill += ".";
                        else if(j >= r && j + i + 1 < r * 2)
                            Windmill += ".";
                        else 
                            Windmill += "*";
                    }
                    Windmill += '\n';
                }
                for(int i = 0; i < r; i++)
                {
                    for(int j = 0; j < r * 2; j++)
                    {
                        if(j >= r - i && j <r)
                            Windmill += ".";
                        else if(j >= r && j > r + i)
                            Windmill += ".";
                        else 
                            Windmill += "*";
                    }
                    Windmill += '\n';
                }
            }
            System.out.println(Windmill);
        }
        input.close();
    }
}