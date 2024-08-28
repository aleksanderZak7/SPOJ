import java.util.Scanner;

public class Main 
{
    public static int validateForm(String line) 
    {
        try 
        {
            int nameStart = line.indexOf("Imię: ") + "Imię: ".length();
            int surnameStart = line.indexOf("Nazwisko: ") + "Nazwisko: ".length();
            int dateStart = line.indexOf("Data ur.: ") + "Data ur.: ".length();
            int nameEnd = line.indexOf(';', nameStart);
            int surnameEnd = line.indexOf(';', surnameStart);
            String name = line.substring(nameStart, nameEnd).trim();
            String surname = line.substring(surnameStart, surnameEnd).trim();
            String date = line.substring(dateStart).trim();
            if (name.isEmpty() || !Character.isUpperCase(name.charAt(0)) || !name.substring(1).toLowerCase().equals(name.substring(1))) 
                return 0;
            if (surname.isEmpty() || !Character.isUpperCase(surname.charAt(0)) || !surname.substring(1).toLowerCase().equals(surname.substring(1)))
                return 1;
            if (date.length() != 10 || date.charAt(4) != '-' || date.charAt(7) != '-' || !date.replace("-", "").matches("\\d+"))
                return 2;
            int year = Integer.parseInt(date.substring(0, 4));
            int month = Integer.parseInt(date.substring(5, 7));
            int day = Integer.parseInt(date.substring(8, 10));
            if (year < 1900 || year > 2000 || month < 1 || month > 12 || day < 1 || day > 31)
                return 2;
            return 3;
        } catch (Exception e) {
            return 0;
        }
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNextLine()) 
        {
            String line = scanner.nextLine();
            System.out.println(validateForm(line));
        }
        scanner.close();
    }
}