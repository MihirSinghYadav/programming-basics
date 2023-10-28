public class SwitchCase {
    public static void main(String[] args) {
        int value = 4;
        switch (value){
            case 1:
                System.out.println("one");
                break;
            case 2:
                System.out.println("two");
                break;
            case 3:
                System.out.println("three");
                break;
            case 4:
            case 5:
            case 6:
                System.out.println("is 4 or 5 or 6");
            default:
                System.out.println("greater than three");
                break;
        }
        value = 100;
        switch (value){
            case 1 -> System.out.println("one");
            case 2 -> System.out.println("two");
            default -> {
                System.out.println("default");
            }
        }
    } 
}
