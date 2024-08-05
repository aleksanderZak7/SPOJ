import java.util.Scanner;

class Main
{
    static final String ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int numberOfWords = input.nextInt();
        input.nextLine();
        for (int i = 0; i < numberOfWords; i++) 
        {
            String word = input.nextLine().toUpperCase();
            System.out.println(letterDifference(word));
        }
        input.close();
    }

    static int letterDifference(String word) 
    {
        int maxIndex = 0;
        int minIndex = ALPHABET.length() - 1;
        for (char letter : word.toCharArray()) 
        {
            int currentIndex = ALPHABET.indexOf(letter);
            if (currentIndex > maxIndex)
                maxIndex = currentIndex;
            if (currentIndex < minIndex)
                minIndex = currentIndex;
        }
        return maxIndex - minIndex;
    }
}