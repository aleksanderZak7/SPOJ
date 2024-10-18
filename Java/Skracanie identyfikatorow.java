import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String variableName = input.next();
        if (variableName.length() <= n)
            System.out.println(variableName);
        StringBuilder filteredName = new StringBuilder();
        for (char ch : variableName.toCharArray())
            if (Character.isLetterOrDigit(ch) || ch == '$')
                filteredName.append(ch);
        if (filteredName.length() <= n)
            System.out.println(filteredName.toString());
        StringBuilder noDigits = new StringBuilder();
        for (char ch : filteredName.toString().toCharArray())
            if (!Character.isDigit(ch))
                noDigits.append(ch);
        if (noDigits.length() <= n)
            System.out.println(noDigits.toString());
        String vowels = "AEIOUaeiou";
        boolean firstVowelFound = false;
        StringBuilder finalName = new StringBuilder();
        for (char ch : noDigits.toString().toCharArray()) 
        {
            if (vowels.indexOf(ch) != -1) 
            {
                if (!firstVowelFound) 
                {
                    firstVowelFound = true;
                    finalName.append(ch);
                }
            } 
            else
                finalName.append(ch);
        }
        if (finalName.length() <= n)
            System.out.println(finalName.toString());
        System.out.println(finalName.substring(0, n));
        input.close();
    }
}
