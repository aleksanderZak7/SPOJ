import java.util.Scanner;

class Main
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        while(input.hasNextLine())
        {
            String[] data = input.nextLine().split(" ");
            String mainNumber = data[0];
            int howManyTimesNumberRepeat = 0;
            for(int i = 2; i < data.length; i++)
            {
                if(data[i].equals(mainNumber))
                    howManyTimesNumberRepeat++;
            }
            System.out.println(howManyTimesNumberRepeat);
        }
        input.close();
    }
}