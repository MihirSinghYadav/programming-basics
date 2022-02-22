class Stats2<T extends Number> {
    T[] nums;

    Stats2(T[] o) {
        nums = o;
    }

    double average2() {
        double sum = 0.0;
        for (int i = 0; i < nums.length; i++)
            sum += nums[i].doubleValue();
        return sum / nums.length;
    }

    boolean sameAvg(Stats2<?> ob) {
        if (average2() == ob.average2())
            return true;
        return false;
    }
}

class WildcardDemo {
    public static void main(String[] args) {
        Integer inums[] = { 1, 2, 3, 4, 5 };
        Stats2<Integer> iob = new Stats2<Integer>(inums);
        double v = iob.average2();
        System.out.println("average of iob: " + v);

        Double dnums[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
        Stats2<Double> dob = new Stats2<Double>(dnums);
        double w = dob.average2();
        System.out.println("average of dob: " + w);

        Float fnums[] = { 1.0F, 2.0F, 3.0F, 4.0F, 5.0F };
        Stats2<Float> fob = new Stats2<Float>(fnums);
        double x = fob.average2();
        System.out.println("average of fob: " + x);

        System.out.print("Averages of iob and dob ");
        if (iob.sameAvg(dob))
            System.out.println("are the same.");
        else
            System.out.println("are different.");

        System.out.print("Averages of iob and fob ");
        if (iob.sameAvg(fob))
            System.out.println("are the same.");
        else
            System.out.println("are different.");
    }
}
