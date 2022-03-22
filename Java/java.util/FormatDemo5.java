import java.util.*;

public class FormatDemo5 {
    public static void main(String[] args) {
        Formatter fmt = new Formatter();
        fmt.format("% d", -100);
        System.out.println(fmt);
        fmt.close();

        fmt = new Formatter();
        fmt.format("% d", 100);
        System.out.println(fmt);
        fmt.close();

        fmt = new Formatter();
        fmt.format("%(d", -200);
        System.out.println(fmt);
        fmt.close();

        fmt = new Formatter();
        fmt.format("% d", 200);
        System.out.println(fmt);
        fmt.close();

        fmt = new Formatter();
        fmt.format("%,.2f", 4356783497.34);
        System.out.println(fmt);
        fmt.close();

        fmt = new Formatter();
        fmt.format("%X", 250);
        System.out.println(fmt);
        fmt.close();

        fmt = new Formatter();
        fmt.format("%E", 123.1234);
        System.out.println(fmt);
        fmt.close();

        fmt = new Formatter();
        fmt.format("%3$d %1$d %2$d", 10, 20, 30);
        System.out.println(fmt);
        fmt.close();

        fmt = new Formatter();
        fmt.format("%d in hex is %<x", 255);
        System.out.println(fmt);
        fmt.close();
    }
}
