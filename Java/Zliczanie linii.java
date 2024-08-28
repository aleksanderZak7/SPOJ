import java.io.IOException;
import java.io.InputStream;

public class Main 
{
    public static void main(String[] args) 
    {
        InputStream inputStream = System.in;
        int lineCount = 1;
        int character;
        try 
        {
            while ((character = inputStream.read()) != -1) 
            {
                if (character == '\n')
                    lineCount++;
            }
        } catch (IOException e) {
            System.exit(1);
        }
        System.out.println(lineCount);
    }
}
