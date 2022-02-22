class NonGen2 {
    int num;

    NonGen2(int i) {
        num = i;
    }

    int getNum() {
        return num;
    }
}

class Gen5<T> extends NonGen2 {
    T ob;

    Gen5(T o, int i) {
        super(i);
        ob = o;
    }

    T getOb() {
        return ob;
    }
}

class HierDemo2 {
    public static void main(String[] args) {
        Gen5<String> w = new Gen5<String>("Hello", 47);
        System.out.print(w.getOb() + " ");
        System.out.println(w.getNum());
    }
}
