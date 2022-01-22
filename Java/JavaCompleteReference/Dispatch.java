class A {
    void callMe() {
        System.out.println("Inside A's callMe method");
    }
}

class B extends A {
    void callMe() {
        System.out.println("Inside B's callMe method");
    }
}

class C extends A {
    void callMe() {
        System.out.println("Inside c's callMe method");
    }
}

public class Dispatch {
    public static void main(String[] args) {
        A a = new A();
        B b = new B();
        C c = new C();
        A r;
        r = a;
        r.callMe();
        r = b;
        r.callMe();
        r = c;
        r.callMe();
    }
}
