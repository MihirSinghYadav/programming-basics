interface MyFunc5<T> {
    MyClass3<T> func(T n);
}

class MyClass3<T> {
    private T val;

    MyClass3(T v) {
        val = v;
    }

    MyClass3() {
        val = null;
    }

    T getVal() {
        return val;
    };
}

class ConstructRefDemo2 {
    public static void main(String[] args) {
        MyFunc5<Integer> myClassCons = MyClass3<Integer>::new;
        MyClass3<Integer> mc = myClassCons.func(100);
        System.out.println("val in mc is " + mc.getVal());
    }
}
