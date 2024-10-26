import java.util.Scanner;

public class Main
{
    public static String gronsfeld(String text, String k, boolean encrypt) 
    {
        StringBuilder result = new StringBuilder();
        int keyLength = k.length();
        for (int i = 0; i < text.length(); i++) 
        {
            char letter = text.charAt(i);
            int shift = Character.getNumericValue(k.charAt(i % keyLength));
            if (!encrypt)
                shift = -shift;
            char newLetter = (char) ((letter - 'A' + shift + 26) % 26 + 'A');
            result.append(newLetter);
        }
        return result.toString();
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        String mode = input.nextLine();
        String k = input.nextLine();
        String text = input.nextLine();
        if (mode.equals("SZYFRUJ"))
            System.out.println(gronsfeld(text, k, true));
        else
            System.out.println(gronsfeld(text, k, false));
        input.close();
    }
}