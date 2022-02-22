class Gen10<T> {
    T ob;

    Gen10(T o) {
        ob = o;
    }

    T getOb() {
        return ob;
    }
}

class Gen11 extends Gen10<String> {
    Gen11(String o) {
        super(o);
    }

    String getOb() {
        System.out.print("You called String getOb(): ");
        return ob;
    }
}

class BridgeDemo {
    public static void main(String[] args) {
        Gen11 strOb2 = new Gen11("Generics Test");
        System.out.println(strOb2.getOb());
    }
}
