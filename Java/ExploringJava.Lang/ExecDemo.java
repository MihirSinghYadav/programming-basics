class ExecDemo {
    public static void main(String[] args) {
        Runtime r = Runtime.getRuntime();
        Process p = null;
        try {
            p = r.exec("Notes");
        } catch (Exception e) {
            System.out.println("Error executing Notes");
        }
    }
}
