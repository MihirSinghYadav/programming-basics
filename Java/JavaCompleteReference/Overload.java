class OverloadDemo {
    void test() {
        System.out.println("No Parameters");
    }

    // void test(int a) {
    // System.out.println("a: " + a);
    // }

    void test(int a, int b) {
        System.out.println("a and b: " + a + " " + b);
    }

    double test(double a) {
        System.out.println("double a: " + a);
        return a * a;
    }
}

public class Overload {
    public static void main(String[] args) {
        OverloadDemo ob = new OverloadDemo();
        double result;
        int i = 88;

        ob.test();
        ob.test(10);
        ob.test(10, 20);
        ob.test(i);
        result = ob.test(123.25);
        System.out.println("Result of ob.test(123.25): " + result);
    }
}
