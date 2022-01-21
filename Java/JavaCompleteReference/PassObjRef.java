class Test {
    int a, b;

    Test(int i, int j) {
        a = i;
        b = j;
    }

    void meth(Test o) {
        o.a *= 2;
        o.b /= 2;
    }
}

public class PassObjRef {
    public static void main(String[] args) {
        Test ob = new Test(15, 20);
        System.out.println("a and b before call: " + ob.a + " " + ob.b);
        ob.meth(ob);
        System.out.println("a and b after call: " + ob.a + " " + ob.b);
    }
}
