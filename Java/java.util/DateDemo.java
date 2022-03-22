import java.util.*;

class DateDemo {
    public static void main(String[] args) {
        Date date = new Date();
        System.out.println(date);
        long msec = date.getTime();
        System.out.println("Milliseconds since January 1, 1970 GMT = " + msec);
    }
}
