import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        while(input.hasNextLine())
        {
            String line = input.nextLine();
            String[] words = line.split(" ");
            for(int i = 0; i < words.length; i++)
            {
                String word = words[i];
                if(!word.isEmpty())
                {
                    if(i == 0)
                        System.out.print(word);
                    else
                        System.out.print(word.substring(0,1).toUpperCase() + word.substring(1));
                }
            }
            System.out.println();
        }
        input.close();
    }
}