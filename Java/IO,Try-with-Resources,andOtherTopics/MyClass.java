class MyClass {
    int a;
    int b;

    MyClass(int i, int j) {
        a = i;
        b = j;
    }

    MyClass(int i) {
        this(i, i);
    }

    MyClass() {
        this(0);
    }

    public static void main(String[] args) {
        MyClass a = new MyClass(6, 9);
        System.out.println(a.a + a.b);
    }
}
