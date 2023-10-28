import java.util.Scanner;

public class ReadingUserInput {
    public static void main(String[] args)
    {
        int currentYear = 2023;
        String userDOB = "2001";

        int DOB = Integer.parseInt(userDOB);

        System.out.println("Age = " + (currentYear - DOB));

        String partialYear = "22.5";
        double agePartial = Double.parseDouble(partialYear);
        System.out.println("User age is = " + agePartial);

        try {
            System.out.println(getInputConsole(currentYear));
        }catch (NullPointerException e) {
            System.out.println(getInputScanner(currentYear));
            System.out.println(e);
        }
    }

    public static String getInputConsole(int currentYear){
        System.out.println("Console Function");
        String name = System.console().readLine("Write your name : ");
        System.out.println("Your name is : " + name);
        String DOB = System.console().readLine("What year were you born : ");
        int age = currentYear - Integer.parseInt(DOB);
        return "So you are " + age + " years old";
    }

    public static String getInputScanner(int currentYear){
        Scanner scanner = new Scanner(System.in);

        System.out.println("What is your name?");
        String name = scanner.nextLine();
        System.out.println("Your name is : " + name);

        System.out.println("What year were you born?");
        boolean validDOB = false;
        int age = 0;
        do{
            System.out.println("Enter year between " + (currentYear - 125) + " and " + (currentYear));
            try
            {
                age = checkData(currentYear, scanner.nextLine());
                validDOB = age >= 0;
            }catch(NumberFormatException badUserData){
                System.out.println("Characters not allowed!!! Try again.");
            }
        }while(!validDOB);

        return ("So you are " + age + " years old");
    }
    public static int checkData(int currentYear, String DOB){
        int dob = Integer.parseInt(DOB);
        int minimumYear = currentYear - 125;

        if((dob<minimumYear)||(dob>currentYear)){
            return -1;
        }
        return (currentYear - dob);
    }
}
