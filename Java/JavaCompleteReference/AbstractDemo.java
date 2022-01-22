abstract class A {
    abstract void callMe();

    void callMeToo() {
        System.out.println("This is a concrete method.");
    }
}

class B extends A {
    void callMe() {
        System.out.println("B's implementation of callme.");
    }
}

public class AbstractDemo {
    public static void main(String[] args) {
        B b = new B();
        b.callMe();
        b.callMeToo();
    }
}
