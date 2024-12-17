import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        int sumOfStudents = 0;
        Scanner input = new Scanner(System.in);
        for (int i = 0; i < 4; i++) 
        {
            int allStudents = input.nextInt();
            int onlineStudents = input.nextInt();
            sumOfStudents += allStudents - onlineStudents;
        }
        input.close();
        System.out.println(sumOfStudents);
    }
}