import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        while (input.hasNextLine()) 
        {
            boolean bigLetters = false;
            String output = "";
            String line = input.nextLine();
            char[] words = line.toCharArray();
            for (int i = 0; i < words.length; i++) 
            {
                char word = words[i];
                if (word == '<') 
                {
                    bigLetters = true;
                    output += word;
                } 
                else if (word == '>') 
                {
                    bigLetters = false;
                    output += word;
                } 
                else if (bigLetters)
                    output += Character.toUpperCase(word);
                else
                    output += word;
            }
            System.out.println(output);
        }
        input.close();
    }
}