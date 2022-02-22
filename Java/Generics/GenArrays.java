class Gen12<T extends Number> {
    T ob;
    T vals[];

    Gen12(T o, T[] nums) {
        ob = o;
        vals = nums;
    }
}

class GenArrays {
    public static void main(String[] args) {
        Integer n[] = { 1, 2, 3, 4, 5 };
        Gen12<Integer> iOb = new Gen12<>(50, n);
        Gen12<?> gens[] = new Gen12<?>[10];
    }
}
