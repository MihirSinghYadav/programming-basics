public class Main6String {
    public static void main(String[] args) {
        printInformation("Hello World!");
        printInformation("");
        printInformation("\t  \n");

        String helloWorld = "Hello World";
        System.out.printf("Index of r = %d %n", helloWorld.indexOf('r'));
        System.out.printf("Index of r = %d %n", helloWorld.indexOf("World"));

        System.out.printf("Index of l = %d %n", helloWorld.indexOf('l'));
        System.out.printf("Index of l = %d %n", helloWorld.lastIndexOf('l'));

        System.out.printf("Index of l = %d %n", helloWorld.indexOf('l',3));
        System.out.printf("Index of l = %d %n", helloWorld.lastIndexOf('l',8));

        String helloWorldLower = helloWorld.toLowerCase();
        if(helloWorld.equals(helloWorldLower))
            System.out.println("Values match exactly");

        if(helloWorld.equalsIgnoreCase(helloWorldLower))
            System.out.println("Values match ignoring case");

        if(helloWorld.startsWith("Hello"))
            System.out.println("String starts with Hello");
        if(helloWorld.endsWith("World"))
            System.out.println("String ends with World");

        if(helloWorld.contains("World"))
            System.out.println("String contains World");

        if(helloWorld.contentEquals("Hello World"))
            System.out.println("Values match exactly");

    }

    public static void printInformation(String string){
        int length = string.length();
        System.out.printf("Length = %d %n",length);

        if(string.isEmpty()){
            System.out.println("String is Empty");
            return;
        }

        if(string.isBlank()){
            System.out.println("String is Blank");
        }

        System.out.printf("First Char = %c %n",string.charAt(0));
        System.out.printf("Last Char = %c %n",string.charAt(length-1));
        System.out.println();
    }
}
