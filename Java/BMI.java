import java.util.List;
import java.util.Scanner;
import java.util.ArrayList;

class Main 
{
    static void printPeopleList(String category, List<String> people) 
    {
        System.out.println(category);
        for (String person : people)
            System.out.println(person);
        System.out.println();
    }

    static void categorizePeople(int numberOfPeople, Scanner input) 
    {
        List<String> underweight = new ArrayList<>();
        List<String> optimal = new ArrayList<>();
        List<String> overweight = new ArrayList<>();
        for (int i = 0; i < numberOfPeople; i++) 
        {
            String data = input.nextLine();
            String[] information = data.split(" ");
            String name = information[0];
            double mass = Double.parseDouble(information[1]);
            double height = Double.parseDouble(information[2]) / 100;
            double bmi = mass / (height * height);
            if (bmi < 18.5) 
                underweight.add(name);
            else if (bmi >= 18.5 && bmi < 25)
                optimal.add(name);
            else
                overweight.add(name);
        }

        printPeopleList("niedowaga", underweight);
        printPeopleList("wartosc prawidlowa", optimal);
        printPeopleList("nadwaga", overweight);
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int numberOfPeople = Integer.parseInt(input.nextLine());
        categorizePeople(numberOfPeople, input);
        input.close(); 
    }
}