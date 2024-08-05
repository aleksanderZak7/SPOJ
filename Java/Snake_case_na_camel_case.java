import java.util.Scanner;

class Main 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        String snakeCase = input.nextLine();
        StringBuilder camelCase = new StringBuilder();
        boolean capitalizeNext = false;
        for (char letter : snakeCase.toCharArray()) 
        {
            if (letter == '_')
                capitalizeNext = true;
            else if (!capitalizeNext)
                camelCase.append(letter);
            else 
            {
                camelCase.append(Character.toUpperCase(letter));
                capitalizeNext = false;
            }
        }
        System.out.println(camelCase.toString());
        input.close();
    }
}