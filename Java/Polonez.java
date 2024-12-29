import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        int woman = 0, man = 0;
        Scanner input = new Scanner(System.in);
        input.nextLine();
        String[] class3a = input.nextLine().split(" ");
        String[] class3b = input.nextLine().split(" ");
        String[] class4j = input.nextLine().split(" ");
        for (String name : class3a) 
        {
            if (name.endsWith("a")) 
                woman++;
            else 
                man++;
        }
        for (String name : class3b) 
        {
            if (name.endsWith("a")) 
                woman++;
            else 
                man++;
        }
        for (String name : class4j) 
        {
            if (name.endsWith("a")) 
                woman++;
            else 
                man++;
        }
        System.out.println(Math.min(woman, man));
        input.close();
    }
}