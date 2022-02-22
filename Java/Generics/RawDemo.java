class Gen2<T> {
    T ob;

    Gen2(T o) {
        ob = o;
    }

    T getOb() {
        return ob;
    }
}

class RawDemo {
    public static void main(String[] args) {
        Gen2<Integer> iOb = new Gen2<Integer>(88);
        Gen2<String> strOb = new Gen2<String>("Generics Test");

        Gen2 raw = new Gen2(Double.valueOf(98.6));

        double d = (Double) raw.getOb();
        System.out.println("value: " + d);

        strOb = raw;
        raw = iOb;
    }
}
