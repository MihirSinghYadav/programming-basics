import java.util.InputMismatchException;
import java.util.Scanner;

public class ReadingInputChallenge {
    public static void main(String[] args) {
        double sum = 0;
        int count = 1;
        while(count<=5){
            sum += takeInput(count);
            count++;
        }
        System.out.println("Sum is " + sum);
    }

    public static double takeInput(int count) {
        Scanner scanner = new Scanner(System.in);
        double number = 0;
        boolean validInput = false;
        do {
            try {
                System.out.println("Enter number #" + count + ": ");
                number = scanner.nextDouble();
                validInput = true;
            } catch (InputMismatchException e) {
                System.out.println("Enter double numbers only!");
                scanner.nextLine();
            }
        } while (!validInput);
        return number;
    }
}
