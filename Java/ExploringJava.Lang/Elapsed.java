class Elapsed {
    public static void main(String[] args) {
        long start, end, startNano, endNano;
        System.out.println("Timing a for loop from 0 to 100,000,000");
        start = System.currentTimeMillis();
        startNano = System.nanoTime();
        for (long i = 0; i < 100000000L; i++)
            ;
        end = System.currentTimeMillis();
        endNano = System.nanoTime();
        System.out.println("Elapsed time: " + (end - start));
        System.out.println("Elapsed time in Nanoseconds: " + (endNano - startNano));
    }
}
