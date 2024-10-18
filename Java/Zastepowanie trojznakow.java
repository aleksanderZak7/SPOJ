import java.util.Map;
import java.util.HashMap;
import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Map<String, String> trigraphs = new HashMap<>();
        trigraphs.put("??=", "#");
        trigraphs.put("??/", "\\");
        trigraphs.put("??'", "^");
        trigraphs.put("??(", "[");
        trigraphs.put("??)", "]");
        trigraphs.put("??!", "|");
        trigraphs.put("??<", "{");
        trigraphs.put("??>", "}");
        trigraphs.put("??-", "~");
        Scanner input = new Scanner(System.in);
        while (input.hasNextLine()) 
        {
            String line = input.nextLine();
            for (Map.Entry<String, String> trig : trigraphs.entrySet())
                line = line.replace(trig.getKey(), trig.getValue());
            System.out.println(line);
        }
        input.close();
    }
}
