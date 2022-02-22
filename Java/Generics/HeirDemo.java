class Gen3<T> {
    T ob;

    Gen3(T o) {
        ob = o;
    }

    T getOb() {
        return ob;
    }
}

class Gen4<T, V> extends Gen3<T> {
    V ob2;

    Gen4(T o, V o2) {
        super(o);
        ob2 = o2;
    }

    V getOb2() {
        return ob2;
    }
}

class HeirDemo {
    public static void main(String[] args) {
        Gen4<String, Integer> x = new Gen4<String, Integer>("Value is: ", 99);
        System.out.print(x.getOb());
        System.out.println(x.getOb2());
    }
}
