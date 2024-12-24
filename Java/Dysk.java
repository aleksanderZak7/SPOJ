import java.util.Scanner;

public class Main
{
    public static String encodeToDisk(String data) 
    {
        StringBuilder disk = new StringBuilder("DDDD");
        for (char bit : data.toCharArray()) {
            char prev = disk.charAt(disk.length() - 1);
            if (bit == '1')
                disk.append(prev == 'D' ? 'G' : 'D');
            else
                disk.append(prev);
        }
        return disk.toString();
    }

    public static String decodeFromDisk(String disk) 
    {
        StringBuilder data = new StringBuilder();
        for (int i = 4; i < disk.length(); i++) 
        {
            char prev = disk.charAt(i - 1);
            char current = disk.charAt(i);
            if (prev != current)
                data.append('1');
            else
                data.append('0');
        }
        return data.toString();
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        String data = input.nextLine();
        if (data.matches("[01]+"))
            System.out.println(encodeToDisk(data));
        else if (data.matches("[GD]+"))
            System.out.println(decodeFromDisk(data));
        input.close();
    }
}