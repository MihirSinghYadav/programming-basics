import java.util.Scanner;

public class MinMaxChallenge {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        double max = 0, min = 0;
        int loopCount = 0;

        while(true){
            System.out.println("Enter a number or else char to exit: ");
            String nextEntry = scanner.nextLine();

            try {
                double validNum = Double.parseDouble(nextEntry);

                if(validNum > max || loopCount == 0)
                    max = validNum;
                if(validNum < min || loopCount == 0)
                    min = validNum;

                loopCount++;
            }catch (NumberFormatException numberFormatException){
                break;
            }
        }
        if(loopCount>0)
        {
            System.out.println("Max number is " + max);
            System.out.println("Min number is " + min);
        }
        else {
            System.out.println("No valid data entered.");
        }
    }
}
