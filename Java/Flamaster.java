import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int C = input.nextInt();
        input.nextLine();
        for (int i = 0; i < C; i++) 
        {
            String string = input.nextLine();
            compressString(string);
        }
        input.close();
    }

    private static void compressString(String string) 
    {
        StringBuilder compressed = new StringBuilder();
        char repeatedLetter = string.charAt(0);
        int count = 1;
        for (int i = 1; i < string.length(); i++) 
        {
            char currentLetter = string.charAt(i);
            if (currentLetter == repeatedLetter) 
                count++;
            else 
            {
                compressed.append(repeatedLetter);
                if (count > 2) 
                    compressed.append(count);
                else if (count == 2) 
                    compressed.append(repeatedLetter);
                repeatedLetter = currentLetter;
                count = 1;
            }
        }
        compressed.append(repeatedLetter);
        if (count > 2) 
            compressed.append(count);
        else if (count == 2) 
            compressed.append(repeatedLetter);
        System.out.println(compressed);
    }
}