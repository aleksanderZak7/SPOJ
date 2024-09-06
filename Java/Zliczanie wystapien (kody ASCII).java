import java.io.IOException;

public class Main 
{
    public static void main(String[] args) throws IOException 
    {
        int[] charTab = new int[256];
        int input;
        while ((input = System.in.read()) != -1)
        {
            charTab[input]++;
        }
        for (int i = 0; i < 256; i++) 
            if (charTab[i] != 0)
                System.out.println(i + " " + charTab[i]);
    }
}