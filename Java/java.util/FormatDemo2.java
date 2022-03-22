import java.util.*;

public class FormatDemo2 {
    public static void main(String[] args) {
        Formatter fmt = new Formatter();
        Formatter fmt2 = new Formatter();
        Formatter fmt3 = new Formatter();

        fmt2.format("Hex: %x, Octal: %o", 196, 196);
        System.out.println(fmt2);

        fmt3.format("%a", 512.0);
        System.out.println(fmt3);
        for (double i = 1.23; i < 1.0e+6; i *= 100) {
            fmt.format("%f %e", i, i);
            System.out.println(fmt);
        }
        fmt.close();

    }
}
