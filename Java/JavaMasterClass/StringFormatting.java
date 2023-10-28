public class StringFormatting {
    public static void main(String[] args) {
        String bulletIt = "Print a Bulleted List:\n\t\u2022 First Point\n\t\t\u2022 Sub Point";
        System.out.println(bulletIt);

        String textBlock = """
                Print a Bulleted List:
                        \u2022 First Point
                            \u2022 Sub Point""";
        System.out.println(textBlock);

        int age = 35;
        System.out.printf("Your age is %d %.2f%n",age, 35.5);

        for(int i=1;i<=100000;i*=10){
            System.out.printf("Printing %6d %n",i);
        }

        String formattedString = String.format("Your age is %d %.2f%n",age, 35.5);
        System.out.println(formattedString);

        formattedString = "Your age is %d %d".formatted(age,12);
        System.out.println(formattedString);
    }
}
