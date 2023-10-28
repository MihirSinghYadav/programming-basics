public class StringMethods {
    public static void main(String[] args) {
        String birthDate = "13/03/2002";
        int startingIndex = birthDate.indexOf("2002");
        System.out.println("startingIndex = " + startingIndex);
        System.out.println("Birth Year = " + birthDate.substring(startingIndex));

        System.out.println("Month = " + birthDate.substring(3,5));
        String newDate = String.join("/","13","03","2002");
        System.out.println("newDate = " + newDate);

        newDate = "03";
        newDate = newDate.concat("/");
        newDate = newDate.concat("02");
        System.out.println("newDate = " + newDate);

        newDate = "13" + "/" + "03" + "/" + "2002";
        System.out.println("newDate = " + newDate);

        newDate = "13".concat("/").concat("03").concat("/").concat("2002");
        System.out.println("newDate = " + newDate);

        System.out.println(newDate.replace('/','-'));
        System.out.println(newDate.replace("2","00"));
        System.out.println(newDate.replaceFirst("/","-"));
        System.out.println(newDate.replaceAll("/","---"));

        System.out.println("ABC\n".repeat(3));
        System.out.println("-".repeat(20));

        System.out.println("ABC\n".repeat(3).indent(8));
        System.out.println("-".repeat(20));

        System.out.println("        ABC\n".repeat(3).indent(-2));
        System.out.println("-".repeat(20));

        //StringBuilder
        Main6String.printInformation("Hello");
        printInformation("Hello");

        String helloWorld = "Hello" + " World";
        helloWorld.concat(" and Goodbye");

        StringBuilder helloWorldBuilder = new StringBuilder("Hello" + " World");
        helloWorldBuilder.append(" and Goodbye");

        printInformation(helloWorld);
        printInformation(helloWorldBuilder);

        StringBuilder emptyStart = new StringBuilder();
        emptyStart.append("a".repeat(57));

        StringBuilder emptyStart32 = new StringBuilder(32);
        emptyStart32.append("a".repeat(17));

        printInformation(emptyStart);
        printInformation(emptyStart32);

        StringBuilder builderPlus = new StringBuilder("Hello" + " World");
        builderPlus.append(" and Goodbye");

        builderPlus.deleteCharAt(16).insert(16, 'g');
        System.out.println(builderPlus);

        builderPlus.replace(16,17,"G");
        System.out.println(builderPlus);

        builderPlus.reverse().setLength(7);
        System.out.println(builderPlus);
    }

    public static void printInformation(String string){
        System.out.println("String = " + string);
        System.out.println("Length = " + string.length());

    }

    public static void printInformation(StringBuilder builder){
        System.out.println("StringBuilder = " + builder);
        System.out.println("Length = " + builder.length());
        System.out.println("Capacity = " + builder.capacity());
    }
}
