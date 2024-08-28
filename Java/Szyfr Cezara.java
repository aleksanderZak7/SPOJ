import java.util.Scanner;

class Main
{
    private static final String ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        while (input.hasNextLine()) {
            char[] sentence = input.nextLine().toCharArray();
            StringBuilder output = new StringBuilder();
            for (char letter : sentence) 
            {
                if (Character.isLetter(letter)) 
                {
                    boolean isUpperCase = Character.isUpperCase(letter);
                    int index = ALPHABET.indexOf(Character.toUpperCase(letter));
                    char shifted = ALPHABET.charAt((index + 3) % ALPHABET.length());
                    output.append(isUpperCase ? shifted : Character.toLowerCase(shifted));
                } else
                    output.append(letter);
            }
            System.out.println(output.toString());
        }
        input.close();
    }
}